#include <stdio.h>
#include <stdio.h>
int main()
{
  int i;
  double bonus,b1,b2,b3,b4,b5;
  int m;
  b1=100000*0.1;
  b2=b1+100000*0.075;
  b3=b2+200000*0.05;
  b4=b3+200000*0.03;
  b5=b4+400000*0.015;
  printf("请输入利润：");
  scanf("%d",&i);
  m=i/100000;
  if (m>10)  m=10;
  switch(m)
  {  
     case 0:bonus=i*0.1;break;
     case 1:bonus=b1+(i-100000)*0.075;break;
     case 2:bonus=b2+(i-200000)*0.05;break;
     case 3:bonus=b2+(i-200000)*0.05;break;
     case 4:bonus=b3+(i-400000)*0.03;break;
     case 5:bonus=b3+(i-400000)*0.03;break;
     case 6:bonus=b4+(i-600000)*0.015;break;
     case 7:bonus=b4+(i-600000)*0.015;break;
     case 8:bonus=b4+(i-600000)*0.015;break;
     case 9:bonus=b4+(i-600000)*0.015;break;
     case 10:bonus=b5+(i-1000000)*0.01;
  }
   printf("奖金是: %10.2f元\n",bonus);
   return 0;
 }
