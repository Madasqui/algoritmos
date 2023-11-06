#include <stdio.h>
#include <math.h>

int main()
{
    int a,b;
    printf("escreva um numero qualquer: ");
    scanf("%i",&b);
    printf("divisores do numero digitado: ", b);
    for(a=1;a<=b;a++)
    {
        if(b%a==0)
        {
            printf("%i ",a);
        }
    }
}
