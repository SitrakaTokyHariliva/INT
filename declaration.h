#ifndef DECLARATION_H
#define DECLARATION_H
#include <stdio.h>
#include <stdlib.h>

#define MAX_CARACTERE 50
#define MAX_ETUDIANT 15


typedef struct  {
    char nom[MAX_CARACTERE];
    char prenom[MAX_CARACTERE];
    char github[MAX_CARACTERE];
    char mail[MAX_CARACTERE];
} etudiant;

int lecture_fichier(etudiant tab_etudiants[]);

void ecriture_fichier_html(etudiant tab_etudiants[], int nb_etudiants);

#endif