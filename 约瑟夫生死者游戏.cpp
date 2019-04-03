/**
*30 个人在一条船上，超载，需要 15 人下船。

于是人们排成一队，排队的位置即为他们的编号。

报数，从 1 开始，数到 9 的人下船。

如此循环，直到船上仅剩 15 人为止，问都有哪些编号的人下船了呢？
**/

#include<stdio.h>

int main() {
	int peoples[30] = {0};
	int count = 0; // 计算多少人已经下船
	int index = 0;
	while ( true ) {
		for ( int i = 0; i < 30; i++) {
			if ( peoples[i] == 1 ) {
				continue;
			}
			index++;
			if ( index == 9 ) {
				printf( " %d 下船", i + 1 );
				peoples[i] = 1;
				index = 0;
				count++;
			}
		}
		if ( count == 15 ) {
				break;
		}
	}
	/*
	for ( int i = 0; i < 30; i++) {
			if ( peoples[i] == 1 ) {
				printf( " %d ", i + 1 );
			}
	}
	*/
	return 0;
}