//
//  main.c
//  conditions
//
//  Created by Denis Lefèvre on 22/07/16.
//  Copyright © 2016 Denis Lefèvre. All rights reserved.
//

#include <stdio.h>

// EXO 1
/*
int main(int argc, const char * argv[]) {
    int age = 3;
    
    if(age >= 18){
        printf("Vous êtes majeur !\n");
    }
    
    else if (age > 4){
        printf("Bon, t'es pas trop jeune quand même...\n");
    }
    
    else{
        printf("agaa, aga, buh?\n");
    }
    return 0;
}
 */

// EXO 2
/*

int main(int argc, const char * argv[]) {
    int age = 0;
    int argent = 0;
    
    printf("Quel âge avez-vous ?\n");
    scanf("%d", &age);
    printf("Combien d'argent possédez-vous ?\n");
    scanf("%d", &argent);
    
    if(age >= 18 || argent >= 50000){
        printf("Bienvenue chez Picsou Bank !\n\n");
    }
    
    else{
        printf("Désolé, nous ne pouvons pas vous accepter.\n\n");
    }
}
 */

// EXO 3 : BOOLEENS
/*
int main (int argc, const char * argv[]){
    
int age = 42;
int majeur = 0;

majeur = age >= 18;
printf("Majeur vaut : %d\n", majeur);

}

*/

// EXO 4 : SWITCH
/*
int main(int argc, const char * argv[]){
    int age = 21;
    
    switch(age){
        case 2:
            printf("Agu ruh buh bah ?\n");
            break;
        case 7:
            printf("Bonjour, mon enfant\n");
            break;
        case 12:
            printf("Yo, ado !\n");
            break;
        case 18:
            printf("Salut, jeune homme.\n");
            break;
        case 21:
            printf("Bonjour, monsieur.\n");
            break;
        default:
            printf("Je n'ai aucune réponse pour cet âge...\n\n");
            break;
    }
}
*/

// EXO 5 : MENU

int main(int argc, const char * argv[]){
    int choixMenu = 0;
    
    printf("=== MENU ===\n");
    printf("1. Royal Cheese\n");
    printf("2. Mc Deluxe\n");
    printf("3. Mc Bacon\n");
    printf("4. Big Mac\n\n");
    printf("Votre choix ?\n");
    scanf("%d", &choixMenu);
    
    printf("\n");
    
    switch(choixMenu){
        case 1:
            printf("Tu as choisi un Royal Cheese, très bon choix !\n\n");
            break;
        case 2:
            printf("Tu as choisi un Mc Deluxe ? Quel fin gourmet...\n\n");
            break;
        case 3:
            printf("Tu as choisi un Mc Bacon, mon préféré... miam !\n\n");
            break;
        case 4:
            printf("Tu as choisis un Big Mac, tu dois avoir très faim !\n\n");
            break;
        default:
            printf("Oups ! Tu dois écrire le numéro correspondant à ce que tu désires manger.\n\n");
            break;
    }
}