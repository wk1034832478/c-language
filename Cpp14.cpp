#include<stdio.h>
/**
* 输入命令行参数
**/
int main( int num, char *argv[]) {
	
	for (int i = 0; i < num; i++ ) {
		if ( num == 1) {
			printf( "没有命令行参数（除命令本身） \n");
		}
		printf( " %s \n", argv[i] );
	}
	return 0;
}