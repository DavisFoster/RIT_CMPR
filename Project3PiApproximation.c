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

Returns:  Nothing formally.
---------------------------------------------------------------------------*/
long double iLovePi;
long double lifeOfPi;
long double piInTheSky;
long double approx1(int wut);
long double approx2(int wut);
long double approx3(int wut);

int main()
{
    while(true){

        int x;
        bool isValid = false;
        while(isValid == false){
            int x2;
            char xtra;
            printf("\nEnter the number of terms to appoximate pi, or 0 to terminate: ");
             //scanf("%i[^\n]", &x);
            fseek(stdin,0,SEEK_END); //Clear input buffer
            if(scanf("%d%c", &x2, &xtra) != 2 || xtra != '\n' || x2 < 0){ //Check for input validity
                printf("\nWrong input, please try again\n");
                //break;
            }
            else{
                x = x2;
                isValid = true;
            }
        
        }
        if (x == 0){ //Terminate if 0 is input
            printf("\n***** Program Terminated *****\n");
            return (EXIT_SUCCESS);
        }
        else{

        }
        
        iLovePi = approx1(x);
        lifeOfPi = approx2(x);
        piInTheSky = approx3(x);
        if(x>1){
            printf("\nFirst approximation of pi to %d terms is %.8Lf\n",x, iLovePi);
            printf("\nSecond approximation of pi to %d terms is %.8Lf\n",x, lifeOfPi);
            printf("\nThird approximation of pi to %d terms is %.8Lf\n",x, piInTheSky);
        }
        else{
            printf("\nFirst approximation of pi to %d term is %.8Lf\n",x, iLovePi);
            printf("\nSecond approximation of pi to %d term is %.8Lf\n",x, lifeOfPi);
            printf("\nThird approximation of pi to %d term is %.8Lf\n",x, piInTheSky);
        }

    }

    return (EXIT_SUCCESS);
}

long double approx1(int wut)
{
    long double pi = 0;
    long double numer = 4;
    long double denom = 1;

    for (int i = 1; i <= wut; i++){
        if (i % 2 != 0){
            pi = pi + (numer / denom);
        }
        else{
            pi = pi - (numer / denom);
        }
        denom = denom + 2;

    }
return pi;
}

long double approx2(int wut)  //I promise I'm not trying to obfuscate
{
    long double pix = 1;
    long double numer = 1;
    long double denom = 4;
    int zed = 2;


    if (wut != 1){
        --wut; //shifts start over 1 digit
        for (int i = 1; i <= wut; i++){
            if (i % 2 != 0){ //odd
                pix = pix - (numer / denom);
            }
            else{ // even
                pix = pix + (numer / denom);
            }
            ++zed;
            denom = (zed * zed);
        }
    }    
    pix = sqrt((12 * pix));
return pix;
}

long double approx3(int wut)  //Potentially the most cryptic function of all time
{
    long double pix = 0;
    long double numer = 1;
    long double denom = 9;
    int zed = 3;
    int ted = 1;


    if (wut == 1){ //handles the "1" case
        pix = 1;
    }
    else{
        --wut; //shifts start over 1 digit
        pix = 1;
        for (int i = 1; i <= wut; i++){
            if (i % 2 != 0){ //odd
                pix = pix - (numer / denom);
            }
            else{ // even
                pix = pix + (numer / denom);
            }
            zed = zed + 2; //increments the multiplier
            ++ted; //Increments the power
            denom = (zed * pow(3, ted));
        }
    }    
    pix = (sqrt(12) * pix);
return pix;
}