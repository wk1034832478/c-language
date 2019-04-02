#include<stdio.h>

int main() {

	int a = 0;
	switch(a) {
	case 0:
		printf(" a = 0 ");
		break;
	case 1:
		printf(" a = 0 ");
		break;
	default:
		printf(" unknown number ");
	}

	// 循环
	for ( int i = 0; i < 10; i++) {
		printf(" %d, ", i);
	}

	int b = 0;
	while( true ) {
		printf(" %d ", b);
		b++;
		if ( b > 10 ) {
			// break; // 把break注释后，将会无线循环
		} else {
			continue;
		}
	}
	return 0;
}