#include<stdio.h>
#include<float.h>

// 定义常量的方式
#define True 1
const int LOVE = 520;

/**
* auto 局部（默认）
*
* register 寄存器（不一定寄存器当中），计算速度十分快
*
* static 在声明的位置始终保持着存在，不会被销毁 
* 
* extern 提供了一个全局变量的引用，全局变量对所有的程序文件都是可见的，
* 当您有多个文件且定义了一个可以在其他文件中使用的全局变量或函数时，
* 可以在其他文件中使用 extern 来得到已定义的变量或函数的引用。
* 可以这么理解，extern 是用来在另一个文件中声明一个全局变量或函数。
**/

// 理解什么是 左值和右值
// 如果abc变量来自其它的文件，则我们需要在这个地方进行声明
// extern int abc 
int abc = 111444;

bool test( int target, int expect ) {
	return target == expect;
}

int test1(int* i) {
	*i = 100;
	return 0;
}

/**
* 测试静态变量
**/
int test2() {
	static int a = 0;
	a++;
	printf("这是静态变量 a = %d \n", a);
	return 0;
}

/**
* 测试逻辑运算符号
**/
int test3() {
	int a = 2;
	a <<= 1; // 向左移动一个位置
	printf("2左移1位 = %d \n", a);
	return 0;
}

int main() {
	printf("这是常量%d", LOVE);
	test2();
	test2();
	test2();
	test2();

	test3();

	// printf("出错" + "出错");
	// printf("你好，c语言，我又回来了，你好鸭！\n");
	// printf("这是True的值：%d\mn", True);
	// double f = 0.1 + 0.2;
	// printf("%.20f\n", f);
	
	// 测试地址传递，修改内存地址指向的值
	/*
	int i = 200;
	test1( &i );
	printf("%d\n", i);
	printf("int 存储大小：%lu \n", sizeof(int));
	*/

	/**
	* float 是2作为幂底数
	**/
	/*
	printf("float 存储最大字节数：%d \n", sizeof(float) );
	printf("float 存储最大值：%E \n", FLT_MIN ); // %E 以指数形式输出浮点数
	printf("float 存储最小值：%E \n", FLT_MAX );
	printf("float 精度值（最多可保留多少位）：%d \n", FLT_DIG );
	*/

	/*
	printf("八进制的9：%o（无符号）\n", 9);
	int ch = 0;
	for ( ch = 65; ch < 91; ch++ ) {
		printf("ASCII值 = %d, 字符为 = %c\n", ch, ch );
	}	
	printf( "指针的值：%p", ch );
	*/
	extern int abc; //  声明是外部的变量，只需定义说明即可
	printf("abc = %d \n", abc);
	return 0;
}