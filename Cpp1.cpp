#include<stdio.h>
#define True 1

int test1(int* i) {
	*i = 100;
	return 0;
}

int main() {
	// printf("����" + "����");
	// printf("��ã�c���ԣ����ֻ����ˣ����Ѽ��\n");
	// printf("����True��ֵ��%d\mn", True);
	// double f = 0.1 + 0.2;
	// printf("%.20f\n", f);
	
	// ���Ե�ַ���ݣ��޸��ڴ��ַָ���ֵ
	int i = 200;
	test1( &i );
	printf("%d\n", i);
	
	

	return 0;
}