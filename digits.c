/*
File Name: digits.c
Author: Davis Foster
Class: Computational Problem Solving for Engineers
Section:  2
Program Intent:  Takes a 1-10 digit int input, digests and spits data out.
Input Data: 1-10 digit int, positive only.  
Output Data:  Analysis or failure info
*/

/*---------------
Include Section
----------------*/
#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
#include<stdbool.h>

void separate(long int input);



/*--------------------------- main function -------------------------------
Purpose: Takes input
Returns:  Exit
---------------------------------------------------------------------------*/

int main()
{
    while(1){

        int ch; // input buffer clear

        printf("\nEnter a positive integer or 0 (zero) to end: ");

        long int input;
        scanf("%d[^\n]", &input); //takes input
        
       
        if (input == 0){
            printf("\n*** Program Terminated ***");
            return (EXIT_SUCCESS);
        }
        else if(input < 0){
            printf("\nWrong input\n");
        }
        else{

        }
              
    }
    printf("\n*** Program Terminated ***");
    return (EXIT_SUCCESS);
}

void separate(long int input)
{
    int sep[10] = {0};

    for(int i = 0; i<10; i++){ 
        sep[i] = input%10;
        sep = sep / 10;
    }


    }
return pi;
}

