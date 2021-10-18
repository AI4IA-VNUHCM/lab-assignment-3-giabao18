/*
3.	Input an array of n integers. Find the largest sorted sub array
(sorted array increasing/decreasing and has the largest number of elements)
Ex:
 _____________________________________________
| Input: 2 5 3 4 8 9 7 6 10                   |
| Output: Increasing 3 4 8 9 Decreasing 9 7 6 |
|_____________________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void Ex3(int in_arr[], int n)
{
	// Your codes here
	int max1 = 1, len1 = 1, lc;
	for (int i = 1; i < n - 1; i++)
	{
		if (in_arr[i] > in_arr[i - 1])
			len1++;
		else
		{ // 2 5 3 4 8 9 7 6 10
			if (max1 < len1)
			{
				max1 = len1;
				// lc = i;
			}
			len1 = 1;
		}
		if (max1 < len1)
		{
			max1 = len1;
			lc = i;
		}
	}
	printf(" Increasing");
	for (int i = lc - max1 + 1; i < lc + 1; i++)
	{
		printf(" %d", in_arr[i]);
	}
	int lc2;
	int max2 = 1, len2 = 1;
	for (int i = 1; i < n - 1; i++)
	{
		if (in_arr[i] < in_arr[i - 1])
			len2++;
		else
		{ // 2 5 3 4 8 9 7 6 10
			if (max2 < len2)
			{
				max2 = len2;
				// lc = i;
			}
			len2 = 1;
		}
		if (max2 < len2)
		{
			max2 = len2;
			lc2 = i;
		}
	}
	printf(" Decreasing");
	for (int i = lc2 - max2 + 1; i < lc2 + 1; i++)
	{
		printf(" %d", in_arr[i]);
	}
}

int main(int argc, char *argv[])
{
	// testing variable, applying it to your algorithm for auto-evaluating
	argc--;
	int testcase[argc], i;
	for (i = 0; i < argc; i++)
	{
		testcase[i] = atoi(argv[i + 1]);
	}

	Ex3(testcase, argc);

	return 0;
}
