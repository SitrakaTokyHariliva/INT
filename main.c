    int main()
{   
    char tab[MAX_ETUDIANTS][4][50];
    char recherche_suppression[50];
    char recherche_infos[50];
    char recherche_modifier[50];
    
    lecture_fichier(tab);
    printf("Nom de l'etudiant à afficher le numéro : ");
    scanf("%49s", recherche_infos);
    info_etudiants(tab,recherche_infos);
    printf("Nom de l'etudiant à modifier : ");
    scanf("%49s", recherche_modifier);
    modifier_infos(tab, recherche_modifier);
    printf("Nom de l'etudiant à supprimer_etudiants : ");
    scanf("%49s", recherche_suppression);
    supprimer_etudiants(tab, recherche_suppression);
    
    
    enregistrer_fichier(tab);
    return 0;
}