/*
 * MaximoMinimo.c
 *
 *  Created on: 31 mar. 2020
 *      Author: Gonzalez
 */
#include<stdio.h>
#include<stdlib.h>
#define TRUE  1
#define FALSE  0

int main(void)
{
	setbuf(stdout,NULL);
	int maximo;
	int minimo;
	int i=1;
	int flag = TRUE;
	int bufferInt;

	do{
		printf("Ingrese el numero %d: ",i);
		scanf("%d",&bufferInt);

		if (bufferInt!=888)
		{
			if(flag == TRUE)
			{
				maximo= bufferInt;
				minimo= bufferInt;
				flag = FALSE;
			}
			else if(maximo<bufferInt)
			{
				maximo= bufferInt;
			}
			else if(minimo<bufferInt)
			{
				minimo= bufferInt;
			}
		}
		i++;

	}while(bufferInt!=888);
	printf("\nEl maximo es: %d\nEl minimo es: %d",maximo,minimo);

	return 0;
}

