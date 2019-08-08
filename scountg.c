#include<stdio.h>
int main()
{
int n;
scanf("%d",&n);
int a[n],b[n];
for(int i=0;i<n;i++)
{
b[i]=0;
scanf("%d",&a[i]);
}
for(int i=0;i<n;i++)
{
b[a[i]]=b[a[i]]+1;
}
for(int i=0;i<n;i++)
{
if(b[i]>1)
{
printf("%d ",b[i]);
}
}
return 0;
}
