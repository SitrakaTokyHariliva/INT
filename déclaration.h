#ifndef DECLARATION_H
#define DECLARATION_H

#include <stdio.h>

#define MAX_ETUDIANTS 15
#define MAX_CHAMPS 4
#define MAX_CAR 50


void lecture_fichier(char tab[MAX_ETUDIANTS][MAX_CHAMPS][MAX_CAR]);


void enregistrer_fichier(char tab[MAX_ETUDIANTS][MAX_CHAMPS][MAX_CAR], int nb_etudiants);


void supprimer_etudiant(char tab[MAX_ETUDIANTS][MAX_CHAMPS][MAX_CAR], int *nb_actuel, char recherche[MAX_CAR]);

#endif