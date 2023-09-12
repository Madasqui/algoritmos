#include<stdio.h> 
 float main() 
 { 
   float T, V, D, L; 
   printf("escreva o tempo:");
   scanf("%f", &T); 
   printf ("escreva a velocidade:");
   scanf("%f", &V);
   D = V * T; 
   L = D / 12; 
   printf("litros usados: %.2f\n", L);
   printf("Velocidade: %.2f \n", V);
   printf("Tempo:%.2f \n", T);
   printf("Distância:%.2f\n", D); 
 }