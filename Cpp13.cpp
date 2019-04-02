#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void) {
	char *c;// 10个4字节的空间
	// c = (char*)calloc(10,4); // 函数声明 	void *calloc(int num, int size); 可以强制转换成任何指针
	// 等效 c = (char*)malloc( 40 );
	c = (char*)malloc( 40 );
	strcpy( c, "sadas");
	printf( "地址 ： %d\n", c );
	// c = "aass"; // 这样会更改c指针的地址, 也就解释了为什么char数组不能在声明后像指针这样赋值
	printf( "地址 ： %d\n", c );
	printf( "%s\n",c );
	strcpy( c, "adakjsdkasdhsahdkjsahdkjsahdhkasdhkdjhasdkj");
	printf( "%s\n", c );
	// free( c ); // 释放内存
 	return 0;
}