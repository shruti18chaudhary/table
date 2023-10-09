#include<stdio.h>
int main()
{
 int number,rem;
 printf("enter any number to check even or odd");
 scanf("%d",&number);
 rem=number%2;
 if(rem==0)
 printf("number is even");
 else
 printf("number is odd");
}
