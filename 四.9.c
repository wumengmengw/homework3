#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num;
	int a,b,c,d,e,n;
	printf("������һ����������λ��������:");
	scanf("%d",&num);
	if(num>9999) 
	   n=5;
	   else if(num>999) n=4;
	   else if(num>99) n=3;
	   else if(num>9) n=2;
	else n=1;
	printf("����һ��%dλ������\n",n);
	printf("ÿλ����Ϊ��");
	e=num/10000;
	d=(num-e*10000)/1000;
	c=(num-e*10000-d*1000)/100;
	b=(num-e*10000-d*1000-c*100)/10;
	a=num-e*10000-d*1000-c*100-b*10;
	switch(n) 
	{
		case 5:printf("%d,%d,%d,%d,%d\n",e,d,c,b,a);
		printf("��������Ϊ��%d,%d,%d,%d,%d\n",a,b,c,d,e);break;
		case 4:printf("%d,%d,%d,%d\n",d,c,b,a);
		printf("��������Ϊ��%d,%d,%d,%d\n",a,b,c,d);break;
		case 3:printf("%d,%d,%d\n",c,b,a);
		printf("��������Ϊ��%d,%d,%d\n",a,b,c);break;
		case 2:printf("%d,%d\n",b,a);
		printf("��������Ϊ��%d,%d\n",a,b);break;
		case 1:printf("%d\n",a);
		printf("��������Ϊ��%d\n",a);break;
		
		
	}
	return 0;
}
