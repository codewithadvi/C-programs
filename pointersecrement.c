#include <stdio.h>
int main() {

int n, arr[100],i;
printf(" ener no of elements in array");
scanf("%d",&n);;
printf("enter the elements");
for (int i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
int *ptr = &arr[n-1];
printf(" array elements in reverse order using pointer decrement \n");
for(int i =0; i<n;i++)
{
printf("%d\n",*ptr);
ptr--;
}
return 0;
}
