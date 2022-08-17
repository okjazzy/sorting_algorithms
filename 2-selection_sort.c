#include "sort.h"
/**
 * selection_sort - function that sorts an array of integers in ascending order
 * using the Selection sort algorithm
 * @array: the array to be sorted
 * @size: size of the array
 */
void selection_sort(int *array, size_t size)
{
	size_t i = 0, j;
	size_t lowest, temp;

	while (i < size)
	{
		lowest = i;
		j = i + 1;
		while (j < size)
		{
			if (array[lowest] > array[j])
				lowest = j;
			j++;
		}
		if (i != lowest)
		{
			temp = array[i];
			array[i] = array[lowest];
			array[lowest] = temp;
			print_array(array, size);
		}
		i++;
	}
}
