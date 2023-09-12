#include<stdio.h>
#include<math.h>
int main ()
{
float V, A, R;
printf("escreva o raio:");
scanf("%f", &R);
printf("escreva a altura:");
scanf("%f", &A);
V = 3.14 * pow(R,2) *A;
printf("volume: %.2f \n", V);
}