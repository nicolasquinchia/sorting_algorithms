#include "sort.h"

/**
 * bubble_sort - Entry point
 * @array: array to sort
 * @size: size of the array
 *
 * Return: Void
 */
void bubble_sort(int *array, size_t size)
{
	int temp = 0;
	size_t limit = size - 1;
	size_t index = 0;

	if (array == NULL)
	{
		return;
	}
	while (limit > 0)
	{
		for (index = 0; index < limit; index++)
		{
			if (array[index] > array[index + 1])
			{
				temp = array[index];
				array[index] = array[index + 1];
				array[index + 1] = temp;
				print_array(array, size);
			}
		}
		limit--;
	}
}
