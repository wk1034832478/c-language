#include<stdio.h>
 
enum DAY
{
      MON=1, TUE, WED, THU, FRI, SAT, SUN
} day;
int main()
{
    // 遍历枚举元素, 由于编译器的不同。这段代码未必能够执行！
    // for (day = MON; day <= SUN; day++) {
    //   printf("枚举元素：%d \n", day);
    //}

	// enum 可用于switch语句当中
	day = MON;
	switch( day ) {
	case MON:
		printf( "就这一句！\n");
		break;
	}

	// 可以将整数转化为枚举(类似于强制转换)
	int i = 1;
	enum DAY day2 = (enum DAY)i;
	printf(" %d ", i );  

	return 0;
}