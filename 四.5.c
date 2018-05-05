#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	 int x;
	 int y;
	 printf("请输入一个小于1000的正数x：\n");
	 scanf("%d",&x);
	
	 if(x>=1000||x<=0)
	    {printf("请输入一个小于1000的正数x：\n");
	     scanf("%d",&x);
		}
    y=sqrt(x);
	printf("y=%d",y);
		
		
	return 0;
}
