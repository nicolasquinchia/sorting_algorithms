#include "sort.h"
/**
 * swap - Swap elements position given by a pointer
 * @a: address of item a to swap
 * @b: address of item b to swap
 *
 * Return: Void
 */
void swap(int *a, int *b)
{
	int t = *a;
	*a = *b;
	*b = t;
}
/**
 * partition - sort an array based on a pivot on the last position
 * @arr: array of integers to sort
 * @low: first index of the array to sort
 * @high: last index of the array to sort
 * @size: size of the array
 *
 * Return: int, Index of the pivot sorted
 */
int partition(int arr[], int low, int high, size_t size)
{
	int pivot = arr[high];
	int i = (low - 1), j;

	for (j = low; j <= high - 1; j++)
	{
		if (arr[j] < pivot)
		{
			i++;
			if (arr[i] != arr[j])
			{
				swap(&arr[i], &arr[j]);
				print_array(arr, size);
			}
		}
	}
	if (arr[i + 1] != arr[high])
	{
		swap(&arr[i + 1], &arr[high]);
		print_array(arr, size);
	}
	return (i + 1);
}
/**
 * quickSort - sorts an array of int using recursive quicksort
 * @arr: array of integers to sort
 * @low: first index of the array to sort
 * @high: last index of the array to sort
 * @size: size of the array
 *
 * Return: Always 0 (Success)
 */
void quickSort(int arr[], int low, int high, size_t size)
{
	int pivot_index;

	if (low < high)
	{
		pivot_index = partition(arr, low, high, size);
		quickSort(arr, low, pivot_index - 1, size);
		quickSort(arr, pivot_index + 1, high, size);
	}
}
/**
 * quick_sort - sorts an array of integers using quick sort algorithm
 * @array: array of integers
 * @size: size of array
 *
 * Return: Always 0 (Success)
 */
void quick_sort(int *array, size_t size)
{
	if (array != NULL)
	{
		quickSort(array, 0, size - 1, size);
	}
}
