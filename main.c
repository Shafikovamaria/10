#include <stdio.h>
#include <string.h>

int main ()
{
    FILE *fp;
    fp = fopen( "vvod.txt", "r" );
    if(fp==NULL)
    {
        return 1;
    }

    char str[200];
    fgets(str,199,fp);
    fclose(fp);
    fp = fopen( "viivod.txt", "w+" );

    fprintf ( fp, "%s\n", str );
    printf("%s\n", str);
    int i;
    char str24[10][20];
    char *str14 = strtok (str, " .");
    int a;
    i=0;
    for (i; str14 != NULL; i++)
    {
        printf("%s ", str14);
        fprintf ( fp, "%s ", str14 );
        strcpy(str24[i], str14);
        str14 = strtok (NULL, " .");
        a=i;
    }
    printf("\n");
    fprintf(fp,"\n");
    i=0;
    for (i; i <a+1; i++)
    {
        if(strcmp(str24[a], str24[i]) !=0)
        {
            printf("%s ", str24[i]);
            fprintf ( fp, "%s ", str24[i] );
        }
    }





    int ab=0, min, dlina=0;
    i=-1;
    do
    {
        i++;
        min=strlen(str24[i]);
        ab = i;
    }
    while(strcmp(str24[a], str24[i]) ==0);
    printf("-> ");
    fprintf(fp,"-> ");
    i=0;

    for (i; i <a+1; i++)
    {
        if(strcmp(str24[a], str24[i]) !=0)

        {
            dlina = strlen(str24[i]);

            if(dlina < min)
            {
                min=dlina;
                ab=i;
            }
        }}
    printf("%s", str24[ab]);
    fprintf ( fp, "%s", str24[ab] );
    fclose ( fp );
    return 0;
}