#include<stdio.h>
#include<string.h>
int main()
{
char str[100000];
scanf("%s",str);
int i,l=strlen(str);
for(i=l-1;i>=0;i--)
printf("%c",str[i]);
}
