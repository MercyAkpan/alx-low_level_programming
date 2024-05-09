#include "search_algos.h"
/**
	* binary_search - This uses the binary search algo, to search for a value
	* @array: This is a pointer to an array
	* @size: Length of numbers in the array
	* @value: This is the value to be searched for
	* Return: Returns index of value (1st occurence) or -1, if not found
	*/
int binary_search(int *array, size_t size, int value)
{
	int low = 0, high = size - 1, result_index;

	if (array != NULL  && size != 0)
	{
		result_index = real_binary_search(array, value, low, high);
		return (result_index);
	}
	return (-1);
}
/**
	* real_binary_search - This searches for a value using Binary_search technique
	* SPACE COMPLEXITY - O(log2(n)), as the Space of constant vars
	*					 made depend on number of Recursive calls.
	*					 and O(1) for iterative approach.
	* @array: This is a pointer to an array
	* @low: Lowest current index
	* @value: This is the value to be searched for
	* @high: Highest current index
	* Return: Returns index of value (1st occurence) or -1, if not found
		*/
int real_binary_search(int *array, int value, int low, int high)
{
	int mid;

	printf("Searching in array: ");
	print_array(array, low, high);
/*	printf("low: %d   ",low);*/
/*	printf("high: %d    \n",high);*/
/*	printf("==================================\n");*/
	while (low <= high)
	{
		mid = low + (high - low) / 2;
/*		printf("mid: %d    \n",mid);*/
		if (array[mid] == value)
		{
			return (mid);
		}
		else if (value > array[mid])
		{
/*			printf("IN HIGHER HALF\n");*/
			return (real_binary_search(array, value, mid + 1, high));
		}
		else if (value < array[mid])
		{
/*			printf("IN LOWER HALF");*/
			return ((real_binary_search(array, value, low, mid - 1)));
		}
	}
	return (-1);
}

/**
	* print_array - This prints current array searched
	* @low: Lowest current index
	* @array: This is the pointer to array
	* @high: Highest current index
	*/
void print_array(int *array, int low, int high)
{
	while (low <= high)
	{
		if (low == high)
		{
			printf("%d\n", array[low]);
			return;
		}
		printf("%d, ", array[low]);
		low++;
	}
}

