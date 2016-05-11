/* Clinton Andrews
 * 2016-05-10
 *
 * Binary Search
 */

#include <stdio.h>

int binary_search(int data[], int size, int value);

main()
{
	int TERMS = 1000;
	int VALUE = 1000;
	int i, data[TERMS];

	for (i=0; i<TERMS; ++i) {
		data[i] = i + 1;
	}

	i = binary_search(data, TERMS, VALUE);
	if (i != -1) {
		printf("The value %d was found at index %d\n", VALUE, i);
	} else {
		printf("Could not find value %d\n", VALUE);
	}
}

int binary_search(int data[], int size, int value)
{
	int low = 0, mid, high = size-1;

	while (low <= high) {
		mid = (high+low) / 2;
		if (value == data[mid])
			return mid;
		else if (value < data[mid])
			high = mid-1;
		else
			low = mid+1;
	}
	return -1;
}
