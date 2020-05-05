#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

void swap(int *xp, int *yp) 
	{ 
		int temp = *xp; 
		*xp = *yp; 
		*yp = temp; 
	} 

void selectionSort(int arr[], int size)
	{
		int i, j, min_i;
		for (i = 0; i < size-1; i++)
		{
			min_i = i;
			for(j = i+1; j < size; j++)
				if (arr[j] < arr[min_i])
					min_i = j;
				
			swap(&arr[min_i], &arr[i]);
		}
	}


void printArray(int arr[], int size) 
	{ 
		int i; 
		for (i=0; i < size; i++) 
		printf("%d ", arr[i]); 
		printf("\n"); 
	} 

int main()	
	{
		int arr[] = {42, 1337, 20, 66};
		int size = sizeof(arr)/sizeof(arr[0]);
		selectionSort(arr, size);
		printf("Sortierte Zahlen: \n");
		printArray(arr, size);
		return 0;
	}
	
	
	
	
	
	
	
	