#include <stdio.h>

void printNumber(int N);

int main(){
    int N;
    scanf("%d", &N);

    printNumber(N);

    return 0;
}

void printNumber(int N){
    if(N >= 1){
        printNumber(N-1);
        printf("%d ", N);
    }
}
