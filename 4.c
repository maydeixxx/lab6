#include <stdio.h>
#include <stdlib.h>

int main(){
    int cardnum[16];
    int chet, nechet, sum; 
    chet = 0; 
    nechet = 0; 
    sum = 0;

    printf("Input card number: ");
    for(int i = 0; i < 16; i++) {
        int z;
        scanf("%d", &z);
        cardnum[i] = z;
    }
    
    for(int i = 1; i < 16; i += 2) {
        nechet += cardnum[i];
    }

    for(int i = 0; i < 16; i += 2) {
        int doubled = cardnum[i] * 2;
        if (doubled > 9) {
            nechet += doubled - 9;
        } else {
            nechet += doubled;
        }
    }

    sum = chet + nechet; 

    if(sum % 10 == 0) {
        printf("Номер карты верный");
    }

    else {
        printf("Номер карты неверный");
    }
}