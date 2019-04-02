#include<stdio.h>
#include<stdlib.h>

/**
* 学习指针前，必须要了解什么是内存！否则很难深入去理解
* void意思是函数不需要参数
**/

int test(void);

int test(void) {
	printf( "测试执行函数" );
	return 0;
}
int test1( int a, char b ) {
	printf( "测试执行函数(int a, char b)" );
	return 0;
}
/**
* 使用指针函数
*/

int execute(int (*test)(void)) {
	(*test)();
	return 0;
}
int main() {
	printf("这里是指针");

	// int i = 1;
	// printf("指针变量：%p\n", &i );

	// 声明指针变量
	int *a; // 整形指针
	double *d; // 浮点指针
	float *f; // 浮点类型指针
	char *ch; // 字符型的指针

	// 空指针
	// int *nullPointer = NULL;
	// printf("空指针 = %p \n", nullPointer); // 00000000, 也就是0， 可以用if语句检查指针是否为空
	// if ( !nullPointer ) {
	//	printf("nullPointer 是空指针 \n");
	// }

	// 指针详解
	// 1. 指针的算术运算 ++、--、+、-
	// 如果指针p是整数类型的时候，32位整数，当前指向10000， p++,此时，指针会移动4个字节，此时就指向1004
	/**
	int is[4] = {1, 2, 3, 4};
	int *iptr = is;
	for (int i = 0; i < 4; i++) {
		printf(  " is = %d ", *(iptr));
		iptr += 1;
	}
	*/

	// 函数指针，不管数据还是指令，在计算机当中都是二进制形式存在的，函数也是如此，所以也就有函数指针

	// printf("test 函数指针地址为：%x", & test );
	// printf("随机数 = %d", rand() );

	// int (*testP)(void) = & test; // 声明一个指针函数 (*test) 变量名  (void)指明参数类型
	// (*testP)();
	// printf("\n");

	int (*testP)(int, char) = & test1; // 声明一个指针函数, int是返回值 (*test) 变量名  (int)指明参数类型
	(*testP)(1,2);
	printf("\n");
	return 0;
}