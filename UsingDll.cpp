#include<windows.h>
#include<stdio.h>
#include<errno.h>

extern int errno;

int main(void) {
	printf( " 测试动态链接库 \n" );
	// 声明函数指针
	typedef int (*pMax)(int a, int b);
	int a;
	pMax Max;
	HINSTANCE hDLL; // DLL句柄
	hDLL = LoadLibrary( "MyDll.dll" ); // 加载动态链接库
	Max = (pMax) GetProcAddress(hDLL, "Max"); // 获取函数指针
	a = Max(5, 8);
	printf( "比较结果：%d", a );
	FreeLibrary( hDLL ); // 卸载MyDll.dll文件
	char *errorStr = strerror( errno ); // 返回当前错误信息
	printf( "\n 错误代码： %d, 错误信息: %s \n", errno, errorStr );
	/**
	* 没有将Max写正确
	**/
	hDLL = LoadLibrary( "MyDll.dll" ); // 加载动态链接库
	Max = (pMax) GetProcAddress(hDLL, "Max2"); // 获取函数指针
	a = Max(5, 8);
	// printf( "比较结果：%d", a );
	// FreeLibrary( hDLL ); // 卸载MyDll.dll文件
	errorStr = strerror( errno ); // 返回当前错误信息
	printf( "\n 错误代码： %d, 错误信息: %s", errno, errorStr );
	getchar();
	return 0;
}