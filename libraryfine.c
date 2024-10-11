#include<stdio.h>
int main()
{
int days;
float fine;
printf("the no of days a person is late to return book is? ");
scanf("%d", &days);

if (days>0 && days<=5)
{

    fine = 0.50*days;
    printf("the fine is %f",fine);

}
else if(days>=5 && days<=10)
{
    fine = 1*days;
    printf("the fine is %f",fine);


}
else if (days>=10 && days<=30)
{
    fine = 5.00*days;
    printf("the fine is %f",fine);

}
else
{
    fine = 10.00*days;
    printf("the fine is %f",fine);
}

}
