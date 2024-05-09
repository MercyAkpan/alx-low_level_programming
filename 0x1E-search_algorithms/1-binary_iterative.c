#include "search_algos.h"
/**
	* STILL_MINE
	* binary_search - This uses the binary search algo, to search for a value
	* @array: This is a pointer to an array
	* @size: Length of numbers in the array
	* @value: This is the value to be searched for
	* Return: Returns index of value (1st occurence) or -1, if not found
	*/
int binary_search_iterative(int *array, size_t size, int value)
{
	int low = 0, high, mid;
	if (array != NULL  && size != 0)
	{
		high = size - 1;
		while (low <= high)
		{
			print_array(array, low, high);
			mid = (low + (high - low) / 2);
			if (array[mid] == value)
				return (mid);
			else if (array[mid] < value)
				low = mid + 1;
			else
				high = mid - 1;
		}
		return (-1);
	}
	return (-1);
}
