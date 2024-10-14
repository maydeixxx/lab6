#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    int fn, fni, fi; fn = 1;
    printf("Input n > 0:\n");
    while(1) {
        scanf("%d", &n);
        if(n > 0) {
        break;
        }
        else {
            printf("Incorrect input!\n");
        }
    }

    int C[n];
    for(int i = 1; i <= n; i++){
        fn *= i;
    }
    for(int i = 1; i <= n; i++){
        fi = 1;
        for(int z = 1; z <= i; z++){
            fi *= z;
        }
        fni = 1;
        if((n - i) == 0){
            fi = 1;
        }
        else {
            for(int z = 1; z <= (n - i); z++){
                fni *= z;
            }
        }
        C[i - 1] = fn / (fi * fni);
    }

    printf("Массив:\n");
    for(int i = 0; i < n; i++){
        printf("%d ", C[i]);
    }

    return 0;
}