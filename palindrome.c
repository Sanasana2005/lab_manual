//to find whether inputted string is palindrome or not

#include<stdio.h>
#include<string.h>

int main()
{
    char str[250]; //declaring and defining a string
    int len,i;
    printf("enter a string:");
    scanf("%s",&str); //ask user to enter a string

    len=strlen(str); //counts the no of characters in given inputted string

    for(i=0;i<=len;i++)
    {
        if(str[i] != str[len-i-1])//it checks the first and last characters of the given inputted string if they are equal print palindrome
        {
           printf("given string is not a palindrome\n"); 
           return 0;
        }
    }
           
           printf("string is a palindrome\n");
    
    return 0;
 

}