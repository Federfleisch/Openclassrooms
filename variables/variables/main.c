//
//  main.c
//  variables
//
//  Created by Denis Lefèvre on 14/07/16.
//  Copyright © 2016 Denis Lefèvre. All rights reserved.
//

#include <stdio.h>

int main(){
    int age = 0;
    
    printf("Quel âge avez-vous ?\n");
    scanf("%d", &age);
    printf("Ah, vous avez donc %d ans !\n\n", age);
}
