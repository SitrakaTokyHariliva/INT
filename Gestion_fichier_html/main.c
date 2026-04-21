    #include "declaration.h"
    #include <stdio.h>
    int main() {
        etudiant INT_2026[MAX_ETUDIANT];
        int nb_etudiants = 0;

        nb_etudiants = lecture_fichier(INT_2026);
        
        if (nb_etudiants > 0) {
            ecriture_fichier_html(INT_2026, nb_etudiants);
        } 
        return 0;
    }
