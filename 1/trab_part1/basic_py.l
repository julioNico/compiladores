%{
    #include <stdio.h>
    #include <string.h>
    #include <ctype.h>

    //estruturas
    typedef struct
    {
        char name[25];
    } token;

    //variáveis
    int qtd_tokens = 0;
    token tokens[100];

    char *textTab;
    /* INDENT */
    int qtd_indent = 0;
    int qtd_tab_l = 0;
    int qtd_tab_l_ant = 0;

    //Contando tabs da string tratada(textTab).
    int qtdTabs(char *textTab)
    {
        int lenTT = strlen(textTab);
        int i, count = 0;
        for (i = 0; i < lenTT; i++)
        {
            char c = textTab[i];
            if (c == '\t')
            {
                count++;
            }
        }
        return count;
    }

    void tratamentoIndentacao(){
        int i, j, k;
        int cSpace = 0;
        int numTab = 0;

        // TROCA SEQUENCIA DE 4 ESPACOS POR TAB E
        // REMOVE TUDO QUE VEM ANTES DE ENTER.
        int lenYY = strlen(yytext);
        for (i = 0; i < lenYY; i++)
        {
            char c = yytext[i];
            if (c == ' ')
            {
                cSpace++;
                if (cSpace == 4)
                {
                    numTab++;
                    cSpace = 0;
                    strcat(textTab, "\t");
                }
            }else //EH ENTER!
            {
                cSpace = 0;
                strcpy(textTab, "\n");
            }
        }
        
        //TRATAMENTO PARA yytext
        //SOMENTE COM ESPACOS(SEM ENTER)
        if (cSpace > 0)
        {
            for (j = 0; j < cSpace; j++)
            {
                strcat(textTab, " ");
            }
        }
    }
    
    //IDENT DEDENT SPACE E NEW LINE
    void indentDedentSpaceNl(){  
        int i, j;  
        int lenTT = strlen(textTab);

        for (i = 0; i < lenTT; i++)
        {
            char c = textTab[i];
            if (lenTT > 1)
            {
                qtd_tab_l = qtdTabs(textTab);
                int diff;
                if (qtd_tab_l > qtd_tab_l_ant) //INDENT
                {
                    diff = qtd_tab_l - qtd_tab_l_ant;
                    qtd_indent += diff;
                    for (j = 0; j < diff; j++)
                    {
                        printf("\nINDENT");
                    }
                    printf("\n\n");
                }
                else if (qtd_tab_l < qtd_tab_l_ant) //DEDENT
                {
                    diff = qtd_tab_l_ant - qtd_tab_l;
                    qtd_indent -= diff;
                    for (j = 0; j < diff; j++)
                    {
                        printf("\nDEDENT");
                    }
                    printf("\n\n");
                }
            }

            if (c == ' ')
            {
                printf("ESPACO");
                if (lenTT > 1)
                {
                    //printf("ERRO ESPACO\n");
                }
            }
            else if (c == '\n')
            {
                printf("ENTER");
                qtd_tab_l_ant = qtd_tab_l;
                qtd_tab_l = 0;
            }
        }
    }


    void indent()
    {
        int i, j, k;
        int cSpace = 0;
        int numTab = 0;
        int lenYY = strlen(yytext);
        textTab = (char *)malloc(sizeof(yytext));
        
        //funcoes principais
        tratamentoIndentacao();
        indentDedentSpaceNl();
        
        /*
        printf("\n\n\n INI_TEXT_TAB \n");
        printf("Numtab: %d\n", numTab);
        printf("lenYY: %d, lenTT: %d\n", lenYY, lenTT);
        for(i=0; i<lenTT; i++){
            int new_c = textTab[i];
            printf("@%d@\n", new_c);
        }
        printf("END_TEXT_TAB\n");
        */
        

    }

%}

%%
[\n\t ]+     { indent(); }


%%
int main() {
    yylex();
    printf("\n\nqtd_indent: %d.\n", qtd_indent);
    return 0;
}
