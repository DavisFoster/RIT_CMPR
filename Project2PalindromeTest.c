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
//char sel;
/*--------------------------- main function -------------------------------
Purpose: Takes input, tests if it's a palindrome or not.

Returns:  Palindrome T/F and failure data.
---------------------------------------------------------------------------*/

/*int digits;
int numFor[5];
int numBak[5];
int truth = 1; //Lazy Bool
char charFor[5];
char charBak[5];
char charIn[5];
char sel; 
int ch;*/

int main()
{
    while(1){
   int digits;
int numFor[5];
int numBak[5];
int truth = 1; //Lazy Bool
char charFor[5];
char charBak[5];
char charIn[5];
char sel; 
int ch;
    printf("\nEnter n for number, w for word, or t to terminate: ");
   
    scanf("%c[^\n]", &sel);
    //printf("\nSel is: %c", &sel);
   
    if (sel == 'n'){
        printf("\n");
        printf("\nEnter a 5-digit integer: ");
        scanf( "%i", &digits);
        //printf("\nInput: %i",&digits);
        //Yes, I'm seeing how poorly I can do this.  Efficiency?  Pfft.
        for(int i = 0; i<5; i++){  //Overflow?  LOL.

            numFor[i] = digits%10;
            digits = digits / 10;
        }

       
        for(int i = 0; i<5; i++){
            numBak[i] = numFor[(4-i)];
            //printf("\nNum Is: %d", numBak[i]);
        }
        
        for(int i = 0; i<5; i++){
            if (numFor[i] != numBak[i]){
                truth = 0;
            }
        }

        if (truth == 1){  //This should be a bool... Why is it not a bool?  Idk.
            printf("\nIt is a palindrome\n");
        }
        else{
            printf("\nIt is not a palindrome\n");
        }
        while ((ch =getchar()) != EOF && ch != '\n');


    }
    if (sel == 'w'){
        printf("\n");
        printf("\nEnter a 5-letter word: ");
        scanf( "%s", &charIn);
        for(int i = 0; charIn[i] != '\0'; i++){  //gotta love C strings
            charFor[i] = charIn[i];
        }
        
        for(int i = 0; i<5; i++){
            charBak[i] = charFor[(4-i)];
            //printf("\nNum Is: %c", charBak[i]);
        }
        
        for(int i = 0; i<5; i++){
            if (charFor[i] != charBak[i]){
                
                truth = 0;
            }
        }

        if (truth == 1){ 
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

//void clearBuffer()
//{
//    int ch;
  //  while ((ch =getchar()) != EOF && ch != '\n');
//}