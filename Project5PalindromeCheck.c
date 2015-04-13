
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
#include<ctype.h>
#include<string.h>

/*--------------------------- main function -------------------------------
Purpose: Takes input, tests if it's a palindrome or not.

Returns:  Palindrome T/F and exit.  

Yes.  I did it all in one fuction.  Bad practice?  Maybe.
---------------------------------------------------------------------------*/

int main()
{
    //printf("\n");
    while(1){ //So I heard you're a fan of nested loops...
        char input[81];
        int x;
        int ayyLen = 0;
        printf("\nEnter a string: ");
        if (fgets(input, 81, stdin) != NULL){ //Takes input
            for(int i=0; input[i]!='\0'; ++i) //Iterates through all of input
            {
                while (! ( (input[i]>='a'&&input[i]<='z') || ((input[i]>='A'&&input[i]<='Z') || input[i]=='\0') ) ) //Runs while input is not within bounds
                {   
                    for(x=i;input[x]!='\0';++x)
                    {
                        input[x]=input[x+1]; //gets rid of character by setting space equal to next position in array
                    }
                    input[x]='\0'; //null term
                }
            }
        }
        
        for (int z = 0; input[z] !='\0'; ++z)
        {
            input[z]=tolower(input[z]); //ensures that all characters are lower case
            ayyLen++; //counts values in array
        }
        
        char back[ayyLen+1]; //mirrored input.  Needs +1 to add null term.

        int q; //iterator needs to exist outside of loop
        for(q = 0; q<ayyLen; ++q) //I'm aware of how god awful this is.
        {
            back[q] = input[(ayyLen-q-1)];  
        }
        back[q]='\0'; //null term
        
        //This section checks for palindromal text. VV
        char done[5] = {'d', 'o', 'n', 'e', '\0'};
        if(strcmp(done,input) == 0){
            printf("\n***** Program Terminated *****\n");
            return (EXIT_SUCCESS);
        }

        bool truth = true;
        for(int i = 0; i<ayyLen; i++)
        {
            if (input[i] != back[i])
            {
                truth = false;
            }
        }

        if (truth == false)
        {
            printf("\nIt is not a palindrome\n");
        }

        if (truth == true)
        {
            printf("\nIt is a palindrome\n");
        }

        
    }
    return (EXIT_SUCCESS);
}

