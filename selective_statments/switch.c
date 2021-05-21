// program to build a simple calculator using switch statment

#include<stdio.h>
int main(){

    char choice;
    int a,b,c;
    printf("enter '+' for addition function\n");
    printf("enter '-' for subtraction function\n"); 
    printf("enter '*' for multiplication function\n");
    printf("enter '/' for division function\n");
    printf("enter your choice\n");
    //selection of choice
    scanf("%c",&choice);

    switch (choice)
    {
    case '+':
        printf("you have chosen addition\n");
        printf("enter the value of a and b\n");
        scanf("%d%d",&a,&b);
        c = a+b;
        printf("sum of %d and %d is %d",a,b,c);
        break;

        case '-':
        printf("you have chosen subtraction\n");
        printf("enter the value of a and b\n");
        scanf("%d%d",&a,&b);
        c = a-b;
        printf("difference of %d and %d is %d",a,b,c);
        break;

        case '*':
        printf("you have chosen multiplication\n");
        printf("enter the value of a and b\n");
        scanf("%d%d",&a,&b);
        c = a*b;
        printf("product of %d and %d is %d",a,b,c);
        break;

        case '/':
        printf("you have chosen division\n");
        printf("enter the value of a and b\n");
        scanf("%d%d",&a,&b);
        c = a/b;
        printf("quotient of %d and %d is %d",a,b,c);
        break;
    
    default:
            printf("invalid selection");
        break;
    }
}
