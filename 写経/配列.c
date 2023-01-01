//配列
//配列 配列名[要素数]
//int array[100]

// sample
#include <stdio.h>

int main(void)
{
	int array[100];

	array[9] = 100;
	printf("1:%d\n", array[9]);
	array[9]++;
	printf("1:%d\n", array[9]);

	return 0;
}

// sample
#include <stdio.h>

int main(void)
{
	int array[10] = {72, 79, 13};

	printf("array[0] = %d\n", array[0]);
	printf("array[1] = %d\n", array[1]);
	printf("array[2] = %d\n", array[2]);
	printf("array[3] = %d\n", array[3]);
	printf("array[4] = %d\n", array[4]);

	return 0;
}

// sample
#include <stdio.h>

int main(void)
{
	int array[] = {72, 79, 13};

	printf("array[0] = %d\n", array[0]);
	printf("array[1] = %d\n", array[1]);
	printf("array[2] = %d\n", array[2]);

	return 0;
}

// sample
#include <stdio.h>

int main(void)
{
	int array[] = {42, 55, 13, 73, 19};
	int i;

	for (i = 0; i < 5; i++ ) {
		printf("array[%d] = %d\n", i, array[i]);
	}

	return 0;
}

// sizeof
#include <stdio.h>

int main(void)
{
	int array[] = {42, 55, 13, 98, 57};
	int i;

	for (i = 0; i < sizeof(array)/sizeof(array[0]); i++){
		printf("array[%d] = %d\n", i, array[i]);
	}

	return 0;
}

// memcpy
#include <stdio.h>
#include <memory.h>

int main(void)
{
	int array1[] = {42, 79, 13, 19, 41};
	int array2[] = {1, 2, 3, 4, 5};
	int i;

	for (i = 0; i < sizeof(array2) / sizeof(array2[0]); i++){
		printf("array2[%d] = %d\n", i, array2[i]);
	}

	memcpy(array2, array1, sizeof(array1)); //array1をarray2にコピー

	for (i = 0; i < sizeof(array2) / sizeof(array2[0]); i++){
		printf("array2[%d] = %d\n", i, array2[i]);
	}
	return 0;

}