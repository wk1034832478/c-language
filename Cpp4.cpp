/**
* ����
**/
#include<stdio.h>
// ���鳤��
#define SIZE 10

int main() {
	// ����int����
	/*
	int is[SIZE] = {0, 0, 0, 0, 0, 0, 0, 0}; 
	for (int i = 0; i < SIZE; i++) { // �����i��main�������оֲ��ı���
		printf("i = %d \n", is[i]);
	}
	*/

	// ����char����
	/*
	char cs[] = { 65, 65, 65, 65, 65, 65, 65, 65, 65};
	for ( i = 0; i < SIZE; i++) { 
		printf("c = %d \n", cs[i]);
	}
	*/
	
	// ��ά����
	int is[2][SIZE] = { 
		{ 1,2,3,4,5,6,7,8,9,10 },
		{ 1,2,3,4,5,6,7,8,9,10 }
	};
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < SIZE; j++) {
			printf(" is = %d ", (is[i][j]) ); // �����������ȷ��ʽ
		}
		printf("\n");
	}

	return 0;
}