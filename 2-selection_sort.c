#include "sort.h"
/**
 * selection_sort - sorts an array of integers using selection sort algorithm
 * @array: array of integers
 * @size: size of array
 *
 * Return: Always 0 (Success)
 */
void selection_sort(int *array, size_t size)
{
	int temp, idx;
	size_t i, j;

	if (array == NULL)
	{
		return;
	}
	for (i = 0; i < size; i++)
	{
		idx = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[idx])
			{
				idx = j;
			}
		}
		if (array[idx] < array[i])
		{
			temp = array[idx];
			array[idx] = array[i];
			array[i] = temp;
			print_array(array, size);
		}
	}
}
