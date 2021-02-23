%{
    #include <stdio.h>
    #include <string.h>
    #include <ctype.h>

    typedef struct
    {
        char name[25];
    } token;

    int qtd_tokens = 0;
    token tokens[100];
    /* INDENT */
    int qtd_indent = 0;
    int qtd_tab_l = 0;
    int qtd_tab_l_ant = 0;

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

    void indent()
    {
        int i, j, k;
        int cSpace = 0;
        int numTab = 0;
        char *textTab = (char *)malloc(sizeof(yytext));
        int lenYY = strlen(yytext);

        // TROCA SEQUENCIA DE 4 ESPACOS POR TAB E
        // REMOVE TUDO QUE VEM ANTES DE ENTER.
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
            }
            else
            {
                cSpace = 0;
                strcpy(textTab, "\n");
            }
        }

        // TRATAMENTO PARA ESPACOS - OBS: DIF DE TABS
        if (cSpace > 0)
        {
            for (j = 0; j < cSpace; j++)
            {
                strcat(textTab, " ");
            }
        }

        int lenTT = strlen(textTab);
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

        for (i = 0; i < lenTT; i++)
        {
            char c = textTab[i];
            if (lenTT > 1)
            {
                qtd_tab_l = qtdTabs(textTab);
                int diff;
                if (qtd_tab_l > qtd_tab_l_ant)
                {
                    diff = qtd_tab_l - qtd_tab_l_ant;
                    qtd_indent += diff;
                    for (j = 0; j < diff; j++)
                    {
                        printf("\nINDENT");
                    }
                    printf("\n\n");
                }
                else if (qtd_tab_l < qtd_tab_l_ant)
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
                if (lenTT > 1)
                {
                    printf("ERRO SPACO\n");
                }
            }
            else if (c == '\n')
            {
                qtd_tab_l_ant = qtd_tab_l;
                qtd_tab_l = 0;
            }
        }
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
