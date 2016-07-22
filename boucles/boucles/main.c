//
//  main.c
//  boucles
//
//  Created by Denis Lefèvre on 22/07/16.
//  Copyright © 2016 Denis Lefèvre. All rights reserved.
//

#include <stdio.h>

// EXO 1 : WHILE
/*
int main(int argc, const char * argv[]) {
    int nombreEntre = 0;
    
    while(nombreEntre != 47){
        printf("Tapez le nombre 47 !\n");
        scanf("%d", &nombreEntre);
    }
}
 */
// EXO 2 : COMPTEUR
/*
int main(int argc, const char * argv[]){
    int compteur = 0;
    
    while (compteur < 10){
        printf("La variable compteur vaut maintenant %d.\n", compteur);
        compteur++;
    }
}
*/

//EXO 3 : DO... WHILE
/*
int main(int argc, const char * argv[]){
    int compteur = 0;
    
    do {
        printf("Salut les zéros !\n");
        compteur++;
    } while(compteur > 10);
}
*/

//EXO 4 : BOUCLE FOR

int main(int argc, const char * argv[]){
    int compteur;
    for (compteur = 0; compteur < 10; compteur++) {
        printf("Salut les zéros !\n");
    }
}