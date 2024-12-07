#include <stdio.h>
int main() {

int n, num, arr[100],i;
printf(" enter no of elements in array\n ");
scanf("%d",&n);
printf("enter the elements");
for (int i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
printf("enter the num to subtract\n");
scanf("%d",&num);
int *ptr = arr+n-1;
printf("pointer elements after adding the num in reverse order \n");
for(i=0;i<n;i++)
{
    printf("%d \n",*ptr-num);
    ptr--;
}
return 0;
}

