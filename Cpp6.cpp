#include<stdio.h>
#include<stdlib.h>

/**
* ѧϰָ��ǰ������Ҫ�˽�ʲô���ڴ棡�����������ȥ���
* void��˼�Ǻ�������Ҫ����
**/

int test(void);

int test(void) {
	printf( "����ִ�к���" );
	return 0;
}
int test1( int a, char b ) {
	printf( "����ִ�к���(int a, char b)" );
	return 0;
}
/**
* ʹ��ָ�뺯��
*/

int execute(int (*test)(void)) {
	(*test)();
	return 0;
}
int main() {
	printf("������ָ��");

	// int i = 1;
	// printf("ָ�������%p\n", &i );

	// ����ָ�����
	int *a; // ����ָ��
	double *d; // ����ָ��
	float *f; // ��������ָ��
	char *ch; // �ַ��͵�ָ��

	// ��ָ��
	// int *nullPointer = NULL;
	// printf("��ָ�� = %p \n", nullPointer); // 00000000, Ҳ����0�� ������if�����ָ���Ƿ�Ϊ��
	// if ( !nullPointer ) {
	//	printf("nullPointer �ǿ�ָ�� \n");
	// }

	// ָ�����
	// 1. ָ����������� ++��--��+��-
	// ���ָ��p���������͵�ʱ��32λ��������ǰָ��10000�� p++,��ʱ��ָ����ƶ�4���ֽڣ���ʱ��ָ��1004
	/**
	int is[4] = {1, 2, 3, 4};
	int *iptr = is;
	for (int i = 0; i < 4; i++) {
		printf(  " is = %d ", *(iptr));
		iptr += 1;
	}
	*/

	// ����ָ�룬�������ݻ���ָ��ڼ�������ж��Ƕ�������ʽ���ڵģ�����Ҳ����ˣ�����Ҳ���к���ָ��

	// printf("test ����ָ���ַΪ��%x", & test );
	// printf("����� = %d", rand() );

	// int (*testP)(void) = & test; // ����һ��ָ�뺯�� (*test) ������  (void)ָ����������
	// (*testP)();
	// printf("\n");

	int (*testP)(int, char) = & test1; // ����һ��ָ�뺯��, int�Ƿ���ֵ (*test) ������  (int)ָ����������
	(*testP)(1,2);
	printf("\n");
	return 0;
}