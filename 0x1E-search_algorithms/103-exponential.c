#include "search_algos.h"

/**
 * recursive_search - searches for a value in an array of
 * integers using the Binary search algorithm
 *
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search is
 * Return: index of the number
 */
int recursive_search(int *array, size_t size, int value)
{
	size_t half = size / 2;
	size_t i;

	if (array == NULL || size == 0)
		return (-1);

	printf("Searching in array");

	for (i = 0; i < size; i++)
		printf("%s %d", (i == 0) ? ":" : ",", array[i]);

	printf("\n");

	if (half && size % 2 == 0)
		half--;

	if (value == array[half])
		return ((int)half);

	if (value < array[half])
		return (recursive_search(array, half, value));

	half++;

	return (recursive_search(array + half, size - half, value) + half);
}

/**
 * binary_search - calls to binary_search to return
 * the index of the number
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: index of the number
 */
int binary_search(int *array, size_t size, int value)
{
	int tuna;

	tuna = recursive_search(array, size, value);

	if (tuna >= 0 && array[tuna] != value)
		return (-1);

	return (tuna);
}

/**
 * exponential_search - searches for a value in an array of
 * integers using the Exponential search algorithm
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search is
 * Return: index of the number
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t tuna, next;
	int result;

	if (array == NULL)
		return (-1);

	if (array[0] == value)
		return (0);

	tuna = 1;

	while (array[tuna] < value && tuna < size)
	{
		printf("Value checked array[%d] = [%d]\n", (int)tuna, array[tuna]);
		tuna *= 2;
	}

	next = (tuna >= size) ? (size - 1) : tuna;

	tuna /= 2;

	printf("Value found between tunas [%d] and [%d]\n", (int)tuna, (int)next);

	result = binary_search(array + tuna, (next + 1) - tuna, value);

	if (result >= 0)
		result += tuna;

	return (result);
}
