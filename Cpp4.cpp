/**
* 数组
**/
#include<stdio.h>
// 数组长度
#define SIZE 10

int main() {
	// 声明int数组
	/*
	int is[SIZE] = {0, 0, 0, 0, 0, 0, 0, 0}; 
	for (int i = 0; i < SIZE; i++) { // 这里的i是main函数当中局部的变量
		printf("i = %d \n", is[i]);
	}
	*/

	// 声明char数组
	/*
	char cs[] = { 65, 65, 65, 65, 65, 65, 65, 65, 65};
	for ( i = 0; i < SIZE; i++) { 
		printf("c = %d \n", cs[i]);
	}
	*/
	
	// 多维数组
	int is[2][SIZE] = { 
		{ 1,2,3,4,5,6,7,8,9,10 },
		{ 1,2,3,4,5,6,7,8,9,10 }
	};
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < SIZE; j++) {
			printf(" is = %d ", (is[i][j]) ); // 访问数组的正确方式
		}
		printf("\n");
	}

	return 0;
}