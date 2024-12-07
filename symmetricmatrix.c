#include <stdio.h>
int main()
{
    int i,j,m,n;
    int a[100][100];
    printf("Enter the dimensions of matrix");
    scanf("%d%d",&m,&n);
    printf("enter the elements of matrix");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
  for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i][j]== a[j][i])
            {
                printf("The matrix is symmetric");
            }
            else{
                printf('The matrix is not symmetric');
                exit(0);
            }
        }
    }
  return 0;
}
















