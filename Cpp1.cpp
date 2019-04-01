#include<stdio.h>
#define True 1

int test1(int* i) {
	*i = 100;
	return 0;
}

int main() {
	// printf("出错" + "出错");
	// printf("你好，c语言，我又回来了，你好鸭！\n");
	// printf("这是True的值：%d\mn", True);
	// double f = 0.1 + 0.2;
	// printf("%.20f\n", f);
	
	// 测试地址传递，修改内存地址指向的值
	int i = 200;
	test1( &i );
	printf("%d\n", i);
	
	

	return 0;
}