#include<stdio.h>
int main()
{
int a,b,c,t ;
scanf("%d",&t);
while(t--)
{
scanf("%d %d",&b,&c);
if(b>c)
printf(">\n");
else if(b<c)
printf("<\n");
else
printf("=\n");
}
return 0;
}
