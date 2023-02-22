#include "sort.h"

/**
 * bubble_sort - The simplest sorting function that repeatedly swap adjacent element that are in wrong order
 *
 *
 * @array: The array passed to the function
 * @size: capacity of the array
 * Return: It returns nothing
 */
void bubble_sort(int *array, size_t size)
{
	int i;
	int j;
	int temp;
	
	/* First loop iterate the items in array*/
	for (i = 0; i < size - 1; i++)
	{
		/* Second loop compares the individual items in the array*/
		for (j = 0; j < size - i - 1; j++)
		{	
			/* If the element in the first index is bigger than the second swap*/
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
			}
		}
	}
}
