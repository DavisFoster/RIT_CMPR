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

int derp, herp, slurp, burp, nerp, sum, product, average, largest, smallest, ratio, multiple; //This is lazy and it makes me happy
/*--------------------------- main function -------------------------------
Purpose: Takes input, runs operations, returns modified data.

Returns:  Sum, product, avg, max, min, ratio, etc.  
---------------------------------------------------------------------------*/


int main()
{
	
    printf("warsaw 167 ./a.out\n");
    printf("\nEnter n for number, w for word, or t to terminate: ");
    scanf( "")
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




    return (EXIT_SUCCESS);
}
