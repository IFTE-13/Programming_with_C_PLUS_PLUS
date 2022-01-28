#include <stdio.h>
#include <stdlib.h>

int multiplyNum(int , int, int);

int main()
{
int num1,num2,num3,product;

printf("Enter the three number ");
scanf("%d %d %d",&num1,&num2,&num3);

product=multiplyNum(num1,num2,num3);

printf("The product of these numbers are: %d",product);

getch();

return 0;
}

int multiplyNum(int a, int b, int c)
{
    int result=a*b*c;

    return result;
}
