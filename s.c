#include<stdio.h>
void main()
{
int a,b,c=0;
printf("enter the numbers:\n");
scanf("%d%d",&a,&b);
printf("before reversing:\n");
printf("%d%d",a,b);
printf("after reversing:\n");
c=a;
a=b;
b=c;
printf("%d%d",a,b);

}
