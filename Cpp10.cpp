#include<stdio.h>
#include "my.h"

/***
include 引用方式
1. #include <file>  引用系统头文件 它在系统目录的标准列表中搜索名为 file 的文件。在编译源代码时，您可以通过 -I 选项把目录前置在该列表前。
2. #include "file"  引用用户头文件 它在包含当前文件的目录中搜索名为 file 的文件。在编译源代码时，您可以通过 -I 选项把目录前置在该列表前
**/

/**
* 文件的读写
**/

int main( void ) {
	FILE *f1;
	f1 = fopen("test.txt", "w");
	fputs("你好，我是c语言！！", f1);
	fclose( f1 );

	printf("当前日期: %s", __DATE__ );
	printf("当前时间: %s\n", __TIME__ );
	printf("当前文件名 %s\n", __FILE__ ); // 包括完整的路径
	return 0;
}