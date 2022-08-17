#include "sort.h"

/**
 * quick_sort - function that sorts an array of integers
 * in ascending order using the Quick sort algorithm
 * @size: length of the array
 * @array: array to be sorted
 */
void quick_sort(int *array, size_t size)
{
	qsorter(array, 0, size - 1, size);
}
/**
 * qsorter - a recurssive function that ensures the
 * array is sorted
 * @arr: array to be sorted
 * @f_index: first index of the array
 * @size: length of the array
 * @l_index: last index of the array
 */
void qsorter(int *arr, int f_index, int l_index, size_t size)
{
	int c_index;

	if (f_index < l_index)
	{
		c_index = partition(arr, f_index, l_index, size);

		qsorter(arr, f_index, c_index - 1, size);
		qsorter(arr, c_index + 1, l_index, size);
	}
}
/**
 * partition - function that separates the array into two parts
 * @arr: array to be partitioned
 * @f_index: the first index of the section of the array to be partitioned
 * @l_index: the last index of the section of the array to be partitioned
 * @size: length of the array
 * Return: the index of the pivot after it is properly positioned
 */
int partition(int *arr, int f_index, int l_index, size_t size)
{
	int pivot = arr[l_index];
	int c_index = f_index;
	int i;

	for (i = f_index; i < l_index; i++)
	{
		if (arr[i] <= pivot)
		{
			if (c_index < i)
			{
				Swap(arr, i, c_index);
				print_array(arr, size);
			}
			c_index++;
		}
	}

	if (arr[c_index] > pivot)
	{
		Swap(arr, c_index, l_index);
		print_array(arr, size);
	}
	return (c_index);
}
/**
 * Swap - swaps the element at two array indexes
 * @a: index of element to be swapped
 * @b: index of element to be swapped
 * @arr: the array whose index is to be swapped
 */
void Swap(int *arr, int a, int b)
{
	int temp = arr[a];

	arr[a] = arr[b];
	arr[b] = temp;
}
