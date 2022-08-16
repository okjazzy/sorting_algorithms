#include "sort.h"
/**
 * bubble_sort - function that sorts an array using the bubble sort method
 * @array: unsorted array
 * @size: length of the array to be sorted
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, checker, temp;

	if (size < 2 || array == NULL)
		return;
	while (1)
	{
		checker = 0;
		for (i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				checker = 1;
				print_array(array, size);
			}
		}
		if (checker == 0)
			break;
	}
}
