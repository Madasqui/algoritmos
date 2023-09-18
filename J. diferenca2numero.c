#include<stdio.h>
#include<math.h>
float main()
{
    float A, B, C, D;
    printf("escreva o valor de A:");
    scanf("%f",&A);
    printf("escreva o valor de B:");
    scanf("%f",&B);
    C = A - B;
    printf("Diferenca de A e B: %.2f ", C);
    D = pow(C,2);
    printf("Quadrado da diferenca de A e B: %.2f ", D);
    
}
