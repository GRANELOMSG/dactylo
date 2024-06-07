#include <stdio.h>
#include <stdlib.h>


enum MENU {DEMARER,CONFIGURER,AIDE};
int main()
{
    enum MENU menu;

    printf("                                                UDBL DACTYLOGICIEL\n                                                ==================\n\n");
    printf("  .MONGA ILUNGA GRACIA\n  .MONGA SEYA GRANEL\n  .MOZA FATUMA BENEDICTE\n  .MPENGE MULUMBU LOIS\n\n");
    int ref= 0;
    do
    {
        printf("1. DEMARER\n");
        printf("2. CONFIGURER\n");
        printf("3. AIDE\n");
        printf("4. QUITTER\n");
        scanf("%d",&ref);
    } while (ref !=0 && (ref<1 && ref>3) );

    if(ref==1) {
         menu=DEMARER;
    }else if(ref==2) {
         menu=CONFIGURER;
    }else if(ref==3) {
         menu=AIDE;
    }
    char nom[14];
    int nombremots;
    if (menu==DEMARER)
        {
        printf("saisir votre pseudo: ");
        scanf("%s",&nom);
        printf("==BIENVENUE DANS LE JEU JOUER == %s \n====================================\n",nom);
        printf("Combien des mots vous souhaitez saisir:  ");
        scanf("%d",&nombremots);
        }
    if (menu==CONFIGURER)
    {
        FILE *f=NULL;
        f=fopen("mots.txt", "w");
        if(f!=NULL)
        {
            fprintf(f,"");
            fclose(f);
        }
    }
    if (menu==AIDE)
    {
        printf("DESCRIPTION: Jeu de mot %s\n");
        printf("VERSION: 2.0 %d\n");
        printf("CONCEPTEURS: GGLB %s\n");
        printf("Date de conception: Juin 2024 %s\n");
    }
    return 0;
}
 /*int description()
{
    struct Applinfo des_info;
    strcpy(des_info.description,"Jeu de mots");
    strcpy(des_info.version,"DPX1.0");
    strcpy(des_info.concepteur,"GGLB");
    strcpy(des_info.date_conception,"juin 2024");
}*/
