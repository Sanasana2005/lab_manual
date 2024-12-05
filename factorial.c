//to find factorial of a number

#include<stdio.h>

int main()
{
    int num,i,factorial=1; //factorial=1 is used for multiplication if we have taken 0 it will become 0 , i is for iteration(i=1,.....)
    printf("enter a number:");
    scanf("%d",&num); //take a number from user
    
        if(num<=0)
        {
            printf("factorial of number does not exist"); // if num=-7 it will show factorial of number does not exist since -7<=0
        }

        else
        {
            for(i=1;i<=num;i++) /* suppose user enter 3 so it will become first i=1,1<=4,so 1*1=1 next i=2,2<=4,2*1=2 next i=3,3<=3,2*3=6*/
            {
                factorial*=i;
            }
            printf("factorial of %d=%d\n",num,factorial); //o/p will be factorial of 3=6
            
        }
        
    
    return 0;
}