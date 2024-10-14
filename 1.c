#include <stdio.h>
#include <stdlib.h>

const int N = 20;
int random (int N) { return rand()%N; } 

int main() {
    int A[N], a = -10, b = 10;

    printf("Все случайные числа от -10 до 10:\n");
    for (int i = 0; i < N; i++) {
        A[i] = random(b-a+1) + a;
        printf("%4d", A[i]);
    }

    printf("\nСлучайные положительные числа:\n");
    for (int i = 0; i < N; i++) {
        A[i] = random(b-a+1) + a;
        if(A[i] > 0) {
            printf("%4d", A[i]);
        }
    }

    printf("\nСлучайные отрицательные числа:\n");
    for (int i = 0; i < N; i++) {
        A[i] = random(b-a+1) + a;
        if(A[i] < 0) {
            printf("%4d", A[i]);
        }
    }

    return 0;
}