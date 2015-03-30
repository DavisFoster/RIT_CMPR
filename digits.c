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
void print(int ayy[], int size, long int input);
int digits_different(int occurances[], int size);
int divisible(int ayy[], int size, long int input);



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
        scanf("%ld[^\n]", &input); //takes input
        
       
        if (input == 0){
            printf("\n*** Program Terminated ***\n");
            return (EXIT_SUCCESS);
        }
        else if(input < 0){
            printf("\nWrong input\n");
        }
        else{
            //printf("%d",input );
            separate(input);
        }
              
    }
    printf("\n*** Program Terminated ***");
    return (EXIT_SUCCESS);
}

void separate(long int input)
{
    int sep[10] = {0};
    int size = 0;

    for(int i = 0; i<10; i++){ 
        sep[i] = input%10;
        input = input / 10;
        //printf("%d",sep[i]);
        if(input < 1){
            size = (i+1);
            //printf("%d",size );
            break;
        }
    }


    print(sep, size, input);

}

void print(int ayy[], int size, long int input)
{
    //int val;
    int occurances[10] = {0,0,0,0,0,0,0,0,0,0}; //LOL
    for(int x = 0; x<size; x++){ 
        //val = ayy[x];
        occurances[ayy[x]] = occurances[ayy[x]]+1;
    }

    printf("\n");
    printf("\nDigits:         0  1  2  3  4  5  6  7  8  9\n");
    printf("\nOccurrences: ");
    printf("   ");
    for(int i = 0; i<10; i++){ 
       printf("%d  ",occurances[i]);
    }
    printf("\n");
    int chek = 0;
    for(int y = 0; y<10; y++){
        if((occurances[y] > 1)){
            printf("\nWrong input for the second part.\n");
            printf("\nInput should not contain each digit more than once.\n");
            chek = 1;
            break;
        } 
    }
    if((occurances[0] > 0) && (chek != 1)){
            printf("\nWrong input for the second part.\n");
            printf("\nInput should not contain zero.\n");
    }
    if((occurances[0] > 0) && (chek == 1)){
            printf("\nInput should not contain zero.\n");
    }
    chek = 0;
/*
    if((divisible(ayy, size, input) == 1) && (chek == 0)){
                printf("\nIs divisible\n");
            
    }
    */
//int valid = digits_different(occurances[], size);


}

int digits_different(int occurances[], int size)
{
    int ret = 1;
    for(int i = 0; i<10; i++){ 
       if (occurances[i] > 1)
       {
           ret = 0;
           break;
       }
    }
    return ret;

}

int divisible(int ayy[], int size, long int input){
    for(int i = 0; i<size; i++){ 
       if (ayy[i] == 0){
           continue;
       }
       else if(input % i != 0){
            return 0;
       }
    }
    return 1;

}




