#include<stdio.h>
#include<string.h> // 字符串操作库文件
/**
* 在c语言当中，一个字符串是以\0结尾的, 字符串输出方式，给出字符串首，不断对指针移动，直到遇到\0字符为止
**/
int main() {
	// 字符串以\0结尾，\0可以不显示写出来！编译器会加上去的，但是要注意数组长度
	// char cs[5] = {'a', 'b', 'c', 'd' }; // 自动加\0
	// char cs[5] = {'a', 'b', 'c', 'd', 'e', '\0'}; // too many initializers
	// char cs[5] = {'a', 'b', 'c', 'd', 'e'}; // 由于数组长度所以没有\0结尾，会导致不正常的输出！
	// printf( "%s \n", cs);

	// char cs2[5];
	// strcpy( cs2, cs); // strcpy第二个参数是 const char *类型，也就是常量类型，不可变
	// printf("复制后的数组 = %s \n", cs2 );

	// printf( "数组长度= %d \n", strlen("你好啊") );
	
	// 使用指针来创建字符串
	char *cs = "abcdasdlasd;m;la;lsdl";
	printf( " %s \n", cs+1 );
	printf( " %s \n", cs+2 );
	printf( " %s \n", cs+3 );
	printf( " %s \n", cs+4 );
	return 0;
} 