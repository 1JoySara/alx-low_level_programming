/**
 * reverse_array - Reverses the content of an array of integers
 * @a: Array of integers
 * @n: Number of elements in the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n-- ; i++)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
}
}
