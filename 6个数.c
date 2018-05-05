#include <stdio.h>
int main()
{
  int letter=0,digit=0,others=0;
  char c;
  printf("任意输入一串字符，以“?”结束:\n");
  while((c=getchar())!='?'){
  if(c>='1'&&c<='9')
       digit++;
   else if((c>='a'&&c<='z')||(c>='A'&&c<='Z'))
       letter++;
   else others++;
  }
  printf("字母个数:%d\n",letter);
  printf("数字个数:%d\n",digit);
  printf("其他字符个数:%d\n",others);
return 0;
}
