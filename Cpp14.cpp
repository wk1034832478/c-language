#include<stdio.h>
/**
* ���������в���
**/
int main( int num, char *argv[]) {
	
	for (int i = 0; i < num; i++ ) {
		if ( num == 1) {
			printf( "û�������в������������ \n");
		}
		printf( " %s \n", argv[i] );
	}
	return 0;
}