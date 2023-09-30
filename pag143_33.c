#include<stdio.h>
#include<math.h>
void main()
{
  float N1,N2,R;
  scanf("%f",&N1);
  scanf("%f",&N2);
  R=N1+N2;
  if((0<R) && (R<9))
  {
  printf("resultado:unidade", R);
  }
  else if((9<=R) && (R<100))
  {
    printf("resultado:dezena", R);
  }
  else if((100<=R) && (R<=999))
  {
    printf("resultado:centena", R);
  }
}
