/**
 * reverse_array - reverse_array
 * @a: first input
 * @n: second input
 * Return: nothing
 */
void reverse_array(int *a, int n)
{

	int i = 0;

	for (; i < n / 2; ++i)
	{

		int temp = a[i];

		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;

	}
}
