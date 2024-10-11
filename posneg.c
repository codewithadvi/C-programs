#include<stdio.h>
int main()
{
int no;
printf("the no is ");
scanf("%d", &no);
if (no>0)
printf("\n no is positive");
if (no<0)
printf("\n no is negative");
else if (no == 0)
printf("\n no is zero");
}
