//to print multiplication table of a number

#include<stdio.h>

int main(){
    int num,i;

    printf("enter a number:");
    scanf("%d\n",&num); //taking number as input from user

    for(i=1;i<=10;i++)
    {
        printf("%d*%d=%d\n",num,i,num*i); //for eg-user put number as 2 then table will be 2*1=2,2*2=4......2*10=20
    }

    return 0;
}