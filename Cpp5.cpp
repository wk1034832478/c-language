#include<stdio.h>
 
enum DAY
{
      MON=1, TUE, WED, THU, FRI, SAT, SUN
} day;
int main()
{
    // ����ö��Ԫ��, ���ڱ������Ĳ�ͬ����δ���δ���ܹ�ִ�У�
    // for (day = MON; day <= SUN; day++) {
    //   printf("ö��Ԫ�أ�%d \n", day);
    //}

	// enum ������switch��䵱��
	day = MON;
	switch( day ) {
	case MON:
		printf( "����һ�䣡\n");
		break;
	}

	// ���Խ�����ת��Ϊö��(������ǿ��ת��)
	int i = 1;
	enum DAY day2 = (enum DAY)i;
	printf(" %d ", i );  

	return 0;
}