#include "declaration.h"
#include <string.h>
#include <stdlib.h>

void lecture_fichier(char tab_etudiant[MAX_ETUDIANTS][4][50]){
    FILE *f;
    char buffer_header[200];
    
    f = fopen("Etudiant.csv", "r");
    printf("Lecture ! \n");
    if (f == NULL){
        printf("Erreur d'ouverture fichier");
        exit(1);
    }

    if (fgets(buffer_header, sizeof(buffer_header), f) == NULL) {
        fclose(f);
        return;
    }
    
    
    for(int i=0;i<MAX_ETUDIANTS;i++){
            fscanf(f," %49[^;];%49[^;];%49[^;];%49[^\n]", tab_etudiant[i][0],tab_etudiant[i][1],tab_etudiant[i][2],tab_etudiant[i][3]);       
    }
    
    for(int i=0;i<MAX_ETUDIANTS;i++){
        for(int j = 0;j<4;j++){
            printf("%s\t", tab_etudiant[i][j]);       
        }
        printf("\n");
    }
    fclose(f);
    return tab_etudiant;
}

void info_etudiants(tab[MAX_ETUDIANTS][4][50], char recherche[50]){
    for (int i =0; i<lignes; i ++){
        if (strcmp(tab[i][0],recherche) == 0){
            printf("Numéro recherché de %s : %s", recherche, tab[i][2]);
            return;
        }
    }
    printf("Etudiant %s non trouvé.\n", recherche);
}

void modifier_infos(tab[MAX_ETUDIANTS][4][50], char recherche[50]){
    char nouveau_numero[50]
    for (int i =0; i<lignes; i ++){
        if (strcmp(tab[i][0],recherche) == 0){
            printf("Etudiant trouvé. Veuillez mettre le nouveau numéro :");
            scanf("%49s",nouveau_numero);
            strcpy(tab[i][2], nouveau_numero);
            printf("Mise à jour effectuée.\n");
            return;
        }
    }
}

void supprimer_etudiants(char tab[MAX_ETUDIANTS][4][50], int *nb_actuel, char recherche[50]) {
    for (int i = 0; i < *nb_actuel; i++) {
        if (strcmp(tab[i][0], recherche) == 0) {
            for (int k = i; k < *nb_actuel - 1; k++) {
                for (int j = 0; j < 4; j++) {
                    strcpy(tab[k][j], tab[k + 1][j]);
                }
            }
            (*nb_actuel)--; 
        }
    }
}

void enregistrer_fichier(char tab[MAX_ETUDIANTS][4][50]) {
    FILE *f = fopen("Etudiant.csv", "w");
    int i;

    if (f == NULL) {
        perror("Erreur lors de la sauvegarde");
        return;
    }

    fprintf(f, "Nom;Prenom;Tel;Genre\n");

    for (i = 0; i < MAX_ETUDIANTS; i++) {
            fprintf(f, "%s;%s;%s;%s\n", 
                    tab[i][0], 
                    tab[i][1], 
                    tab[i][2], 
                    tab[i][3]);
        
    }

    fclose(f);
}
