#include<stdio.h>
void main( )
{ 
float  a, b, c, max ;
  printf("���������a:\n");
  scanf("%f" , &a);
  printf("���������b:\n");
  scanf("%f" , &b);
  printf("���������c:\n");
  scanf("%f" , &c);
  max=a ;
  if (b>max) max=b;
  if (c>max) max=c;
  printf("���ֵ: %.2f\n", max); 
}
