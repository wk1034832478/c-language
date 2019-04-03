#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define SIZE 20

/**
* �����㷨
* 1. ð������
* 2. ѡ������
**/

// 1. ð������
int bubble_sort( int nums[], int size ) {
	printf( "ð������ \n" );
	for ( int i = 0; i <  size - 1; i++) {
		for ( int j = i + 1; j <  size; j++) {
			if ( nums[i] > nums[j] ) {
				int temp = nums[i];
				nums[i] = nums[j];
				nums[j] = temp;
			}
		}
	}
	return 0;
}

// 2. ѡ������
// ����������
int swap(int *a, int *b) {
	int temp = *a;
    *a = *b;
    *b = temp;
	return 0;
}
int selection_sort( int nums[], int size ) {
	printf( "ѡ������\n" );
	int min = 0; // ��Сֵ���
	for ( int i = 0; i < SIZE - 1 ; i++ ) {
		min = i;
		for ( int j = i + 1; j < SIZE ; j++ ) {
			if ( nums[min] > nums[j] ) {
				min = j;
			}
			swap( &nums[min], &nums[i] );
		}
	}
	return 0;
}

// 3. ��������, �������Ѿ�����Ļ�����
int insertion_sort( int nums[], int size ) {
	printf( "��������\n" );
	int tmp;
	int j = 0;
	for ( int i = 1; i < size; i++ ) {
		tmp = nums[i];
		for (j = i; j > 0 && nums[j-1] > tmp ; j-- ) {
			nums[j] = nums[j-1];
		}
		nums[j] = tmp;
	}
	return 0;
}

// ϣ������, gap ��ϣ������һ��ʼ�ļ�϶�� ������С��1
// important!!!!!!!
int shell_sort ( int nums[], int size, int gap) {
	printf( "ϣ������" );
	int i = 0;
	int tmp;
	for (; gap >= 1; gap /= 2 ) {
		for ( i = gap; i < size; i++ ) {
			tmp = nums[i];
			int j = i;
			for (j = i - gap; j >= 0 &&  nums[j] > tmp; j -= gap ) nums[j+gap] = nums[j];
			nums[j+gap] = tmp;
		}
	}
	return 0;
}

int nums[SIZE];

int init(int nums[], int size) {
	for ( int i = 0; i < size; i++) {
		nums[i] = rand();
	}
	return 0;
}

int printArray(int nums[], int size) {
	for ( int i = 0; i < size; i++) {
		printf(" %d ", nums[i]);
	}
	printf( "\n" );
	return 0;
}

int main(void) {
	init( nums, SIZE);

	printArray( nums, SIZE);
	
	bubble_sort( nums, SIZE );
	printArray( nums, SIZE);

	selection_sort( nums, SIZE );
	printArray( nums, SIZE);

	
	insertion_sort( nums, SIZE );
	printArray( nums, SIZE);

	shell_sort(nums, SIZE, 8 );
	printArray( nums, SIZE);
	return 0;
}