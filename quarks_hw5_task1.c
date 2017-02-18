/*
 * =====================================================================================
 *
 *       Filename:  quarks_hw5_task1.c
 *       	Usage:  ./quarks_hw5_task1.c
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  02/14/2017 04:38:13 PM
 *       Compiler:  gcc -Wall -Werror
 *         Author:  Andrew Little (), andrewlittle@mail.weber.edu
 * =====================================================================================
 */
#include <stdio.h>		/* For Standard I/O */
#include <math.h>

/* Function Prototypes */

/* Main Program */
int main(void)
{

	float r1, r2, I;
	printf("Enter the value for outer radius (r2):");
	scanf("%f", &r2);
	printf("enter the value for inner radius (r1):");
	scanf("%f", &r1);

	while(1)
		{
			I = (3.1415926/4) * (pow(r2,4) - pow(r1,4));  
			printf("The second moment of inertia is %4.2f\n", I);
			break;
		}
	return 0;
}


/* Function Defenitions */


