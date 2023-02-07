//Input: Nhap vao dong chu "xin chao" va ho ten cua ban
//output: in ra man hinh "xin chao" + ho va ten cua ban
#include<stdio.h>
#include<string.h>
int main()
{
char str1[1000];
char str2[1000];
printf("Nhap xin chao: ");
gets(str1);
printf("Nhap ho va ten ban: ");
gets(str2);
strcat(str1," ");
strcat(str1,str2);
printf("\n%s",str1);
return 0;
}
