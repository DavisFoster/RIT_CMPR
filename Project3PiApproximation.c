/*
File Name: pi.c

Author: Davis Foster

Class: Computational Problem Solving for Engineers

Section:  2

Program Intent:  Uses 3 different methods to approximate pi.  User inputs the number of add/subtract steps used in the approximation.  

Input Data: An integer for the number of steps.  

Output Data:  Approximation or failure data.
*/

/*---------------
Include Section
----------------*/
#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
#include<stdbool.h>
#include<math.h>

/*--------------------------- main function -------------------------------
Purpose: Takes input

Returns:  Nothing useful.
---------------------------------------------------------------------------*/

int main()
{
    int x;
    //char xtra;
    bool isValid = false;
    while(isValid == false){
        int x2;
        char xtra;
        printf("\nEnter the number of terms to appoximate pi, or 0 to terminate: ");
         //scanf("%i[^\n]", &x);
        fseek(stdin,0,SEEK_END);
        if(scanf("%d%c", &x2, &xtra) != 2 || xtra != '\n'){
            printf("\nWrong input, please try again\n");
            //break;
        }
        else{
            x = x2;
            isValid = true;
        }
    //printf("\nX is currently: %d", x);
    }
    if (x == 0){
        return (EXIT_SUCCESS);
    }
    printf("\nX is currently: %d\n", x);






    return (EXIT_SUCCESS);
}

