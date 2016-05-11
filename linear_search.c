/* Clinton Andrews
 * 2016-05-10
 *
 * Linear Search
 */

#include <stdio.h>

int linear_search(int data[], int size, int value);

main()
{
	int TERMS = 1000;
	int VALUE = 23;
	int i, data[TERMS];

	for (i=0; i<TERMS; ++i) {
		data[i] = i + 1;
	}

	i = linear_search(data, TERMS, VALUE);
	if (i != -1) {
		printf("The value %d was found at index %d\n", VALUE, i);
	} else {
		printf("Could not find value %d\n", VALUE);
	}
}

int linear_search(int data[], int size, int value)
{
	int i;

	for (i=0; i<size; ++i)
		if (data[i] == value)
			return i;
	return -1;
}
