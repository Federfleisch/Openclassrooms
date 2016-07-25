//
//  main.c
//  tp1
//
//  Created by Denis Lefèvre on 23/07/16.
//  Copyright © 2016 Denis Lefèvre. All rights reserved.
//
// TP1 : JEU DU PLUS OU MOINS

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
int main(int argc, const char * argv[]) {
    int nombreEntre, nombreMystere;
    const int MAX = 100, MIN = 1;
    int essais = 0;
    
    srand(time(NULL));
    nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;
    
    printf("Trouvez le nombre mystère :\n");
    scanf("%d", &nombreEntre);
    essais++;
    
    while (nombreEntre != nombreMystere) {
        if (nombreEntre < nombreMystere){
            printf("C'est plus !\n");
            scanf("%d", &nombreEntre);
            essais++;
        }
        else if (nombreEntre > nombreMystere) {
            printf("C'est moins !\n");
            scanf("%d", &nombreEntre);
            essais++;
        }
    }
    
    if(nombreEntre == nombreMystere) {
        printf("Félicitations, vous avez trouvé en %d coups !\n\n", essais);
    }
}
*/

//TP1 : CORRRECTION

//int main ( int argc, char** argv )
//{
//    int nombreMystere = 0, nombreEntre = 0;
//    const int MAX = 100, MIN = 1;
//    
//    // Génération du nombre aléatoire
//    
//    srand(time(NULL));
//    nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;
//    
//    /* La boucle du programme. Elle se répète tant que l'utilisateur n'a pas trouvé le nombre mystère */
//    
//    do
//    {
//        // On demande le nombre
//        printf("Quel est le nombre ? ");
//        scanf("%d", &nombreEntre);
//        
//        // On compare le nombre entré avec le nombre mystère
//        
//        if (nombreMystere > nombreEntre)
//            printf("C'est plus !\n\n");
//        else if (nombreMystere < nombreEntre)
//            printf("C'est moins !\n\n");
//        else
//            printf ("Bravo, vous avez trouve le nombre mystere !!!\n\n");
//    } while (nombreEntre != nombreMystere);
//    
//    return 0;
//}

//TP1 : AMELIORATION : COMPTEUR

//int main ( int argc, char** argv )
//{
//    int nombreMystere = 0, nombreEntre = 0, compteur = 1;
//    const int MAX = 100, MIN = 1;
//    
//    // Génération du nombre aléatoire
//    
//    srand(time(NULL));
//    nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;
//    
//    /* La boucle du programme. Elle se répète tant que l'utilisateur n'a pas trouvé le nombre mystère */
//    
//    do
//    {
//        // On demande le nombre
//        printf("Quel est le nombre ?\n");
//        scanf("%d", &nombreEntre);
//        
//        // On compare le nombre entré avec le nombre mystère
//        
//        if (nombreMystere > nombreEntre) {
//            printf("C'est plus !\n");
//            compteur++;
//            }
//        else if (nombreMystere < nombreEntre) {
//            printf("C'est moins !\n");
//            compteur++;
//            }
//        else {
//            printf ("Bravo, vous avez trouve le nombre mystere en %d coups !\n\n", compteur);
//            }
//    } while (nombreEntre != nombreMystere);
//    
//    return 0;
//}

//TP1 : AMELIORATION : NOUVELLE PARTIE

//int main ( int argc, char** argv )
//{
//    int nouvellePartie = 1;
//    
//    while (nouvellePartie == 1) {
//        const int MAX = 100, MIN = 1;
//        int nombreMystere = 0, nombreEntre = 0, compteur = 1;
//        nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;
//        
//        srand(time(NULL));
//        
//        do
//        {
//            printf("Quel est le nombre ?\n");
//            scanf("%d", &nombreEntre);
//            
//            if (nombreMystere > nombreEntre) {
//                printf("C'est plus !\n");
//                compteur++;
//            }
//            else if (nombreMystere < nombreEntre) {
//                printf("C'est moins !\n");
//                compteur++;
//            }
//            else {
//                printf("Bravo, vous avez trouve le nombre mystere en %d coups !\n\n", compteur);
//                printf("Voulez-vous faire une nouvelle partie ?\n");
//                printf("1 = Oui\n");
//                printf("2 = Non\n");
//                scanf("%d", &nouvellePartie);
//            }
//        } while (nombreEntre != nombreMystere);
//    }
//}

//TP1 : AMELIORATION : 2 JOUEURS

//int main ( int argc, char** argv )
//{
//    srand(time(NULL));
//    int modeJeu = 0, nouvellePartie = 1;
//    
//    printf("=== BIENVENUE DANS LE JEU DU PLUS OU MOINS ===\n\n");
//    
//    while (nouvellePartie == 1) {
//        printf("Choisissez un mode de jeu :\n");
//        printf("1 = Solo\n");
//        printf("2 = Multijoueur\n");
//        scanf("%d", &modeJeu);
//        
//        const int MAX = 100, MIN = 1;
//        int nombreMystere = 0, nombreEntre = 0, compteur = 1;
//        
//        if(modeJeu == 1){
//            nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;
//        }
//        
//        else if (modeJeu == 2){
//            printf("Choisissez le nombre mystère :\n");
//            scanf("%d", &nombreMystere);
//        }
//        
//        do{
//            printf("Quel est le nombre ?\n");
//            scanf("%d", &nombreEntre);
//            
//            if (nombreMystere > nombreEntre){
//                printf("C'est plus !\n");
//                compteur++;
//            }
//            else if (nombreMystere < nombreEntre){
//                printf("C'est moins !\n");
//                compteur++;
//            }
//            else{
//                printf("Bravo, vous avez trouve le nombre mystere en %d coups !\n\n", compteur);
//                printf("Voulez-vous faire une nouvelle partie ?\n");
//                printf("1 = Oui\n");
//                printf("2 = Non\n");
//                scanf("%d", &nouvellePartie);
//            }
//        }
//        while (nombreEntre != nombreMystere);
//    }
//}

//TP1 : AMELIORATION : DIFFICULTES

int main ( int argc, char** argv )
{
    srand(time(NULL));
    int modeJeu = 0, nouvellePartie = 1;
    
    printf("=== BIENVENUE DANS LE JEU DU PLUS OU MOINS ===\n\n");
    
    while (nouvellePartie == 1) {
        printf("Choisissez un mode de jeu :\n");
        printf("1 = Solo\n");
        printf("2 = Multijoueur\n");
        scanf("%d", &modeJeu);
        
        int max = 100, min = 1;
        int nombreMystere = 0, nombreEntre = 0, compteur = 1;
        
        if(modeJeu == 1){
            int difficulte = 0;
            printf("=== Niveau de difficulté : ===\n");
            printf("1 = Facile\n");
            printf("2 = Normal\n");
            printf("3 = Difficile\n");
            scanf("%d", &difficulte);
            
            if(difficulte == 1){max = 10;}
            else if(difficulte == 2){max = 1000;}
            else if(difficulte == 3){max = 10000;}
            
            nombreMystere = (rand() % (max - min + 1)) + min;
        }
        
        else if (modeJeu == 2){
            printf("Choisissez le nombre mystère :\n");
            scanf("%d", &nombreMystere);
        }
        
        do{
            printf("Quel est le nombre ?\n");
            scanf("%d", &nombreEntre);
            
            if (nombreMystere > nombreEntre){
                printf("C'est plus !\n");
                compteur++;
            }
            else if (nombreMystere < nombreEntre){
                printf("C'est moins !\n");
                compteur++;
            }
            else{
                printf("Bravo, vous avez trouve le nombre mystere en %d coups !\n\n", compteur);
                printf("Voulez-vous faire une nouvelle partie ?\n");
                printf("1 = Oui\n");
                printf("2 = Non\n");
                scanf("%d", &nouvellePartie);
            }
        }
        while (nombreEntre != nombreMystere);
    }
}