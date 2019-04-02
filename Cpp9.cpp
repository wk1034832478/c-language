#include<stdio.h>
#include<stdlib.h>

/**
*
* 共用体是一种特殊的数据类型，允许您在相同的内存位置存储不同的数据类型。
* 您可以定义一个带有多成员的共用体，但是任何时候只能有一个成员带有值。
* 共用体提供了一种使用相同的内存位置的有效方式。
*
*union [union tag]
{
   member definition;
   member definition;
   ...
   member definition;
} [one or more union variables];

一个变量（相同的内存位置）可以存储多个多种类型的数据。
您可以根据需要在一个共用体内使用任何内置的或者用户自定义的数据类型。
共用体占用的内存应足够存储共用体中最大的成员。
**/

union Data {
	int a;
	float b;
	char c[20];
} d1, d2;
int main() {
	// printf("公用体Data的字节长度为：%d \n", sizeof( Data ) ); // 等于共同体当中占用类型最大的那个类型的长度
	
	d1.a = 1;
	d1.b = 2.0f;
	// 0，因为公用体是公用一块内存地址，只能同时有一个变量可以使用
	// 用途有点类似java中的泛型
	printf( "%f\n", d1.a );
	
	// 为类型起别名 gets() & puts() 
	typedef int MyInt;
	MyInt i = 11;
	printf( " %d \n", i );
	// char c = getchar();
	putchar('a');
	putchar('b');
	// putchar( c );

	perror("标准错误");

	putchar('\n');
	return 0;
}