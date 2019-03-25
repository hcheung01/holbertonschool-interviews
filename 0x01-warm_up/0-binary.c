#include <stdio.h>

/**
 * printer - print array
 * @array: sub-array to print
 * @i: starting index
 * @size: length of sub-array
 *
 * Description: print sub array
 * Return: void
 */
void printer(int *array, int i, int size)
{
	printf("Searching in array: ");
	for (; i < size; i++)
	{
		printf("%d", array[i]);
		if (i < size - 1)
			printf(", ");
	}
	printf("\n");
}

/**
 * binary_search - search algorithm
 * @array: array input
 * @size: size of array int type
 * @value: value to search for if exist in array
 *
 * Description: binary search algorithm to find value
 * Return: -1 if not found or if array is NULL or index of value location
 **/
int binary_search(int *array, size_t size, int value)
{
	int low = 0;
	int high = size;
	int mid = NULL;

	printer(array, low, high);
	while (low < high)
	{
		mid = (low + high) / 2;
		if (array[mid] == value)
			return (mid);
		if (array[mid] < value)
		{
			low = mid + 1;
			printer(array, low - 1, high);
		}
		else
		{
			high = mid - 1;
			printer(array, low, high + 1);
		}
	}
	return (-1);
}
