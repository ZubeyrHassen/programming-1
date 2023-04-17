#include<stdio.h>

int main(){
    int mark;
    printf("Enter the marks: ");
    scanf("%d", &mark);

    if(mark >= 95)
        printf("A+");
    else if(mark >= 85 && mark <= 94)
        printf("A");
    else if(mark >= 80 && mark <= 84)
        printf("A-");
    else if(mark >= 75 && mark <= 79)
        printf("B+");
    else if(mark >= 70 && mark <= 74)
        printf("B");
    else if(mark >= 65 && mark <= 69)
        printf("B-");
    else if(mark >= 60 && mark <= 64)
        printf("C+");
    else if(mark >= 50 && mark <= 59)
        printf("C");
    else
        printf("F");
    return 0;
}