#include <stdio.h>
int findMax(int *arr, int size){
    int *max = arr;
    for(int i=0; i<size;i++)
    {
        if(*(arr+i)> *max)
        {
            max = arr + i;
        }

}

return *max;
}
int main() {
    int n;
    printf("enter the no of elements");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

int max = findMax(arr,n);
printf("Max no in the array is %d",max);
return 0;
}
