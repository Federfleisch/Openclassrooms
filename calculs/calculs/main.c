//
//  main.c
//  calculs
//
//  Created by Denis Lefèvre on 14/07/16.
//  Copyright © 2016 Denis Lefèvre. All rights reserved.
//

#include <stdio.h>
#include <math.h>


// EXO 1 : CALCULATRICE
/*

int main(int argc, const char * argv[]) {
    int resultat = 0, nombre1 = 0, nombre2 = 0;
    
    printf("Entrez le nombre 1 : ");
    scanf("%d", &nombre1);
    printf("Entrez le nombre 2 : ");
    scanf("%d", &nombre2);
    
    resultat = nombre1 / nombre2;
    
    printf("%d / %d = %d \n\n", nombre1, nombre2, resultat);
    return 0;
}
 
*/



// EXO 2 : OPERATIONS MATHEMATIQUES POW
/*
int main(int argc, const char * argv[]){
    double nombre = 0, puissance = 0, result = 0;
    
    printf("Entrez un nombre : \n");
    scanf("%lf", &nombre);
    printf("Entrez une puissance : \n");
    scanf("%lf", &puissance);
    
    result = pow(nombre, puissance);
    
    printf("%f puissance %f = %f \n\n", nombre, puissance,  result);
}

*/


// EXO 3 : OPERATIONS MATHEMATIQUES SQRT

 int main(int argc, const char * argv[]){
 double nombre = 0, result = 0;
 
 printf("Entrez un nombre : \n");
 scanf("%lf", &nombre);
 
 result = sqrt(nombre);
 
 printf("La racine de %f est %f \n\n", nombre,  result);
 }

 // GITHUB SYNCED!!!
 // IT WORKS BACKWARDS TOO.
