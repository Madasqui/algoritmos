#include<stdio.h>

void main()
{
float C, F;
printf("escreva a temperatura em celcius:");
scanf("%f", &C);
F = ( 9 * C + 160 ) /  5;
printf("\nfahrenheit: %.2f ºF\n", F);
}