#include <stdio.h>
#include <conio.h>

int fact(int n); 

int main() {
    int N, i;
    double s = 0.0;

    printf("Enter N: ");
    scanf("%i", &N);

    for (i = 1; i <= N; i+=1) {
        s += (double)(N * i) / fact(N + i);
    }

    printf("Sum s = %.10lf", s);
    getch();
    return 0;
}

int fact(int n) {
    return (n > 1 ) ? n * fact(n-1) : 1;
}