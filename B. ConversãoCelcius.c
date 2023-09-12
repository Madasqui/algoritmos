#include<stdio.h>

float main()
{
    float F, C;
    printf("escreva a temperatura em graus fahrenheit:");
    scanf("%f",& F);
    C = ( F - 32) * 5/9;
    printf("Celcius: %.2f °C \n", C);
}