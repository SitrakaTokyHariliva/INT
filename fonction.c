#include "declaration.h"
#include <string.h>
#include <stdlib.h>

int lecture_fichier(etudiant tab_etudiants[]){
    FILE *f;
    char header[256];
    int count_etudiant=0;

    f = fopen("fichierINT.csv","r");
    if (f == NULL){
        printf("Erreur d'ouverture fichier");
        exit(1);
    }
    fgets(header, sizeof(header), f);

    while (count_etudiant < MAX_ETUDIANT && 
           fscanf(f, " %49[^,],%49[^,],%49[^,],%49[^\n]", 
                  tab_etudiants[count_etudiant].nom, 
                  tab_etudiants[count_etudiant].prenom, 
                  tab_etudiants[count_etudiant].github, 
                  tab_etudiants[count_etudiant].mail) == 4) {
        count_etudiant++;
    }


    fclose(f);
    return count_etudiant;
}

void ecriture_fichier_html(etudiant tab_etudiants[], int nb_etudiants){
    FILE *f;

    f = fopen("INT.html","w");
    if (f == NULL){
        printf("Erreur d'ouverture fichier");
    }
    
    fprintf(f, "<!DOCTYPE html>\n<html>\n<head>\n<title>Etudiant INT</title>\n</head>\n<body>\n");
    fprintf(f, "<table border='1'>\n<thead>\n<tr>\n<th>Nom</th>\n<th>Prenom</th>\n<th>Github</th>\n<th>Mail</th>\n</tr>\n</thead>\n");
    fprintf(f,"<tbody>\n");
    for (int i =0; i < nb_etudiants ; i++){
        fprintf(f, "<tr>\n<td>%s</td>\n<td>%s</td>\n<td>%s</td>\n<td>%s</td></tr>\n",
            tab_etudiants[i].nom, 
            tab_etudiants[i].prenom, 
            tab_etudiants[i].github, 
            tab_etudiants[i].mail);
    }
    fprintf(f, "</tbody>\n</table>\n");
    fprintf(f, "</body>\n</html>\n");
    fclose(f);
   
}