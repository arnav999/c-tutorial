// program to find reminder of 2 numbers
#include<stdio.h>
void main(){
  int a,b,c;
  printf("enter value of a and b\n");
  scanf("%d%d",&a,&b);
  //reminder of two numbers
  c = a%b;
  printf("mod of %d and %d is %d",a,b,c);
}