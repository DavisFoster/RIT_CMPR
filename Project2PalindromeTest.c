/*
File Name: pal.c

Author: Davis Foster

Class: Computational Problem Solving for Engineers

Section:  2

Program Intent:  Checks if 5-digit numbers or 5-char words are palindromes or not.  Other arbitrary functions.  Not modular.

Input Data: 5-digit integers or 5-char words.  

Output Data:  Palindrome Y/N or failure data.
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

        bool truth = true; //Palindrome or not.
        int ch; // input buffer clear

        printf("\nEnter n for number, w for word, or t to terminate: ");

        char sel;
        scanf("%c[^\n]", &sel); //Input selection character
        
       
        if (sel == 'n'){

            int digits;     //The input
            int numFor[5];  //Array of digits in forward direction
            int numBak[5];  //Array of digits in reverse direction

            printf("\n");
            printf("\nEnter a 5-digit integer: ");

            scanf( "%i", &digits);  //Yes, I'm seeing how poorly I can do this.  Efficiency?  Pfft.

            for(int i = 0; i<5; i++){  //Overflow?  LOL.

                numFor[i] = digits%10;
                digits = digits / 10;
            }

            for(int i = 0; i<5; i++){

                numBak[i] = numFor[(4-i)];
                
            }
            
            for(int i = 0; i<5; i++){

                if (numFor[i] != numBak[i]){
                    truth = false;
                }
            }

            if (truth == true){  

                printf("\nIt is a palindrome\n");
            }

            else{
                printf("\nIt is not a palindrome\n");
            }

            while ((ch =getchar()) != EOF && ch != '\n');
        }



        if (sel == 'w'){ //This section of the code should actually handle numbers fine, too.  

            char charFor[5]; //Forward character array
            char charBak[5]; //Reversed character array
            char charIn[5];  //Array of input

            printf("\n");
            printf("\nEnter a 5-letter word: ");

            scanf( "%s", &charIn);

            for(int i = 0; charIn[i] != '\0'; i++){  //gotta love C strings

                charFor[i] = charIn[i];
            }
            
            for(int i = 0; i<5; i++){
                charBak[i] = charFor[(4-i)];
                
            }
            
            for(int i = 0; i<5; i++){

                if (charFor[i] != charBak[i]){
                     truth = false;
                }
            }

            if (truth == true){ 

                printf("\nIt is a palindrome\n");
            }

            else{

                printf("\nIt is not a palindrome\n");
            }

            while ((ch =getchar()) != EOF && ch != '\n');
        }


        if (sel == 't'){

            printf("\n");
            printf("\n***** Program Terminated *****\n");
            printf("\n");
            exit(0);

        }

        if (sel != 'w' && sel != 'n' && sel != 't'){

            printf("\n");
            printf("\nWrong input, please try again\n");
            while ((ch =getchar()) != EOF && ch != '\n');

        }
    
    }
    return (EXIT_SUCCESS);
}

