//to find maximum number 

#include<stdio.h>

int main()
{
    int a,b,c; //declaring and defining three no as a,b,c
    printf("enter three numbers a,b,c:");
    scanf("%d,%d,%d",&a,&b,&c); //taking i/p from user

    if(a>=b&&a>=c)
    {
        printf("the maximum number a is=%d\n",a); //if 1st condition is true and 2nd condition is true then o/p will be a
    }

    else if(b>=a&&b>=c)
    {
        printf("the maximum number b is=%d\n",b); //if 1st condition is true and 2nd condition is true then o/p will be b

    }

    else
    {
        printf("the maximum number is=%d\n,c"); //if both the above conditions are false it will print value of c
    }
        
    return 0;
}