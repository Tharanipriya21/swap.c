#include <stdio.h>
int main()
{
int a,b,t;
printf("enter the values of a and b");
scanf("%d%d",&a,&b);
t=a;
a=b;
b=t;
printf("%d%d",a,b);

return 0;
}

