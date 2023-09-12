#include<stdio.h>
int main()
{
    float V, Tp, T, P;
    printf("escreva o valor da prestacao:");
    scanf("%f", &V);
    printf("escreva a taxa percentual:");
    scanf("%f", &Tp);
    printf("escreva o tempo da divida:");
    scanf("%f",&T);
    P = V + ( V * ( Tp / 100 )) * T;
    printf("prestação: %.2f \n", P);
}