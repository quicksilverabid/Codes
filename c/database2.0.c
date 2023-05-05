#include<stdio.h>
typedef struct student
{
    char name[100];
    int age;
    int roll;
    float cgpa;
}std;

int main(){
    FILE *fptr;
    fptr = fopen("student.txt", "w");

    std s1;
    printf("Name : ");
    scanf("%s",&s1.name);
    printf("Age : ");
    scanf("%d",&s1.age);
    printf("Roll : ");
    scanf("%d",&s1.roll);
    printf("Cgpa : ");
    scanf("%f",&s1.cgpa);

    fprintf(fptr , "Name : %s\n" , s1.name);
    fprintf(fptr , "Age : %d\n" , s1.age);
    fprintf(fptr , "Roll : %d\n" , s1.roll);
    fprintf(fptr , "Cgpa : %.2f\n" , s1.cgpa);
    
    fclose(fptr);
    return 0;
}