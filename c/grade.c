#include<stdio.h>
int main(){

    int n;
    printf("Enter number : ");
    scanf("%d",&n);
    if(n<=100 && n>=80)
    printf("A+\n");
    else if (n<=79 && n>=75)
    printf("A\n");
    else if (n<=74 && n>=70)
    printf("A-\n");
    else if (n<=69 && n>=65)
    printf("B+\n");
    else if (n<=64 && n>=60)
    printf("B\n");
    else if (n<=59 && n>=55)
    printf("B-\n");
    else if (n<=54 && n>=50)
    printf("C+\n");
    else if (n<=49 && n>=45)
    printf("C\n");
    else if (n<=44 && n>=40)
    printf("D\n");
    else if (n<=39 && n>=0)
    printf("F\n");
    else
    printf("Invalid number\n");
    
    return 0;
}