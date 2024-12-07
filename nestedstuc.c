#include <stdio.h>

struct Address{
    char street[50];
    char city[50];
    int zipcode;

};

struct Student{
    char name[50];
    int rollno;
    struct Address addr;
};

int main(){
    struct Student student;
    printf("Enter Student Details:  \n");
    printf("Name:");
    scanf("%s",student.name);
    printf("Roll no: ");
    scanf("%d",&student.rollno);
    printf("Address(street,city and zipcode ; ");
    scanf("%s %s %d",student.addr.street,student.addr.city,&student.addr.zipcode);
    printf("Student Details: \n");
    printf("Name: %s, Roll No: %d",student.name,student.rollno);
    printf("Address %s %s %d\n",student.addr.street,student.addr.city,student.addr.zipcode);
    return 0;
}


