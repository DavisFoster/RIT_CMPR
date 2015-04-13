
/*
File Name: palCheck.c

Author: Davis Foster

Class: Computational Problem Solving for Engineers

Section:  2

Program Intent:  Checks if an arbitrary length string is a palindrome or not.  

Input Data: Up to 80-char alphanumeric string. 

Output Data:  Palindrome T/F.
*/

/*---------------
Include Section
----------------*/
#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
#include<stdbool.h>
#include<time.h>

/*--------------------------- main function -------------------------------
Purpose: Takes input, tests if it's a palindrome or not.

Returns:  Palindrome T/F and failure data.
---------------------------------------------------------------------------*/

int main()
{
    while(1){
        char input[81];
        int x;
        printf("\nEnter Yo Shit\n");
        if (fgets(input, 81, stdin) != NULL){
            for(int i=0; input[i]!='\0'; ++i)
            {
                while (! ( (input[i]>='a'&&input[i]<='z') || (input[i]>='A'&&input[i]<='Z' || input[i]=='\0') ) )
                {
                    for(x=i;input[x]!='\0';++x)
                    {
                        input[x]=input[x+1];
                    }
                    input[x]='\0';
                }
            }
        }
        puts(input);
    

        
    }
    return (EXIT_SUCCESS);
}

