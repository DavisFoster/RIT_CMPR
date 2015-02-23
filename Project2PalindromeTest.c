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
//char sel;
/*--------------------------- main function -------------------------------
Purpose: Takes input, tests if it's a palindrome or not.

Returns:  Palindrome T/F and failure data.
---------------------------------------------------------------------------*/
char sel;
int digits;
int numFor[5];
int numBak[5];
int truth = 1; //Lazy Bool
char charFor[5];
char charBak[5];
char charIn[5];

int main()
{
	while(true){
    
    printf("\nEnter n for number, w for word, or t to terminate: ");
    //scanf( "%c", &sel);
    sel = getchar();
    if (sel == 'n'){
        printf("\nEnter a 5-digit integer: ");
        scanf( "%i", &digits);
        //Yes, I'm seeing how poorly I can do this.  Efficiency?  Pfft.
        for(int i = 0; i<5; i++){  //Overflow?  LOL.
            numFor[i] = digits%10;
            digits = digits / 10;
        }
        for(int i = 0; i<5; i++){
            printf("\nVal%d\n", numFor[i]);
        }
        for(int i = 0; i<5; i++){
            numBak[i] = numFor[(4-i)];
        }
        for(int i = 0; i<5; i++){
            printf("\nVal%d\n", numBak[i]);
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


    }
    if (sel == 'w'){
        printf("\nEnter a 5-letter word: ");
        scanf( "%s", &charIn);
        for(int i = 0; charIn[i] != '\0'; i++){  //gotta love C strings
            charFor[i] = charIn[i];
        }
        for(int i = 0; i<5; i++){
            printf("\nVal %c\n", charFor[i]);
        }
        for(int i = 0; i<5; i++){
            charBak[i] = charFor[(4-i)];
        }
        for(int i = 0; i<5; i++){
            printf("\nVal %c\n", charBak[i]);
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
    }
    if (sel == 't'){
        printf("\n***** Program Terminated *****\n");
        exit(0);
    }
    if (sel != 'w' && sel != 'n' && sel != 't'){
        printf("\nWrong input, please try again\n");
    }
    /*
    scanf( "%i %i %i %i %i", &derp, &herp, &slurp, &burp, &nerp);
    sum = derp + herp + slurp + burp + nerp;

    int ayy[5] = {derp, herp, slurp, burp, nerp};
    

    int i, max=-32767;  //More lazy. More deliciousness. Who needs functions anyways?  Pfft.
	for (i=0; i<5; i++)
	{
		if (ayy[i] > max)
		{
			max=ayy[i];
		}
	}

	largest = max;

	int x, min=+32766;  //Yum.
	for (x=0; x<5; x++)
	{
		if (ayy[x] < min)
		{
			min=ayy[x];
		}
	}

	smallest = min;

	average = (sum / 5);



    printf("\nSum is: %d\n", sum);
    product = derp * herp * slurp * burp * nerp;
    printf("\nProduct is: %d\n", product);
    average = (sum / 5);
    printf("\nAverage is: %d\n", average);
    printf("\nLargest is: %d\n", largest);
    printf("\nSmallest is: %d\n", smallest);
    
    ratio = (largest / smallest);
    printf("\nLargest / Smallest is: %d\n", ratio);

    multiple = (sum + product - (product % sum));
    printf("\nNext largest multiple of Product w.r.t Sum is: %d\n", multiple);
    printf("\n**** Program Terminated ****\n");
    printf("\nWarsaw 168\n");


*/

    return (EXIT_SUCCESS);
    }
}