#include<stdio.h>
int main()
{
int x,y;
printf("x is ");
scanf("%d", &x);
if (x>0)
{
y =1;
printf("value of y is%d",y);
}
if (x<0)
{
y = -1;
printf("value of y is %d",y);
}
else if (x == 0)
{
y = 0;
printf("value of y is %d",y);
}

}
