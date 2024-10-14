#include <stdio.h>
#include <stdlib.h>

int main() {
    float C[20];
    printf("Array:\n");
    for (int i = 0; i < 20; i++){
        C[i] = (rand() * (-10) /RAND_MAX + 10);
        printf("%2.1f ", C[i]);
    }
    for (int i = 1; i < 19; i++){
        if (C[i]>C[i-1] && C[i]>C[i+1])
        {
            printf("\n%.1f", C[i]);
        }
    }  
}