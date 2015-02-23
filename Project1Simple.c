/*
File Name: simple.c

Author: Davis Foster

Class: Computational Problem Solving for Engineers

Section:  2

Program Intent:  Takes inputs, outputs things.

Input Data: 5 integers

Output Data:  Printed modified integers.  
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
    printf("\nPlease Enter five different intergers: ");
    scanf( "%i %i %i %i %i", &derp, &herp, &slurp, &burp, &nerp);
    sum = derp + herp + slurp + burp + nerp;

    int ayy[5] = {derp, herp, slurp, burp, nerp};
    
    //Pretty sure we weren't supposed to do this with arrays... Oh well, I sleep through 8AM fire alarms.  

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
