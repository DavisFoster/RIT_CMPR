
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
#include<ctype.h>

/*--------------------------- main function -------------------------------
Purpose: Takes input, tests if it's a palindrome or not.

Returns:  Palindrome T/F and failure data.
---------------------------------------------------------------------------*/

int main()
{
    while(1){ //So I heard you're a fan of nested loops...
        char input[81];
        int x;
        int ayyLen = 0;
        printf("\nEnter Yo Shit\n");
        if (fgets(input, 81, stdin) != NULL){ //Takes input
            for(int i=0; input[i]!='\0'; ++i) //Iterates through all of input
            {
                while (! ( (input[i]>='a'&&input[i]<='z') || (input[i]>='A'&&input[i]<='Z' || input[i]=='\0') ) ) //Runs while input is not within bounds
                {   
                    for(x=i;input[x]!='\0';++x)
                    {
                        input[x]=input[x+1]; //gets rid of character by setting space equal to next position in array
                    }
                    input[x]='\0'; //null term
                }
            }
        }
        //puts(input);
        for (int z = 0; input[z] !='\0'; ++z)
        {
            input[z]=tolower(input[z]); //ensures that all characters are lower case
            ayyLen++; //counts values in array
        }
        //puts(input);
        //printf("\n%d\n", ayyLen);

        //char forward[ayyLen];
        char back[ayyLen+1];

        /*for(int i = 0; i<ayyLen; ++i)
        {
            forward[i] = input[i];    
        }
        */
        int q;
        for(q = 0; q<ayyLen; ++q) //I'm aware of how god awful this is.
        {
            back[q] = input[(ayyLen-q-1)];
            //printf("%c\n",input[q]);  
            //printf("%c\n",back[q]);  
        }
        back[q]='\0'; //null term
        //puts(input);
        //puts(forward);
        //puts(back);
        //printf("\n%d\n", ayyLen);
        bool truth = true;
        for(int i = 0; i<ayyLen; i++)
        {
            if (input[i] != back[i]){
                truth = false;
            }
        }

        if (truth == false)
        {
            printf("Not Palindrome.\n");
        }

        if (truth == true)
        {
            printf("Palindrome!\n");
        }

        
    }
    return (EXIT_SUCCESS);
}

