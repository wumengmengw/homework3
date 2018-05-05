#include <stdio.h>
#include <stdlib.h>
#define PI 3.1415926
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    int r;
	float s;
	scanf("%d",&r);
	s=PI*r*r;
	printf("r=%d PI=%f\n",r,PI);
	printf("S=%f\n",s);
	return 0;
}
