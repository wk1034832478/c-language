#include<stdio.h>
#include<stdlib.h>

/**
*
* ��������һ��������������ͣ�����������ͬ���ڴ�λ�ô洢��ͬ���������͡�
* �����Զ���һ�����ж��Ա�Ĺ����壬�����κ�ʱ��ֻ����һ����Ա����ֵ��
* �������ṩ��һ��ʹ����ͬ���ڴ�λ�õ���Ч��ʽ��
*
*union [union tag]
{
   member definition;
   member definition;
   ...
   member definition;
} [one or more union variables];

һ����������ͬ���ڴ�λ�ã����Դ洢����������͵����ݡ�
�����Ը�����Ҫ��һ����������ʹ���κ����õĻ����û��Զ�����������͡�
������ռ�õ��ڴ�Ӧ�㹻�洢�����������ĳ�Ա��
**/

union Data {
	int a;
	float b;
	char c[20];
} d1, d2;
int main() {
	// printf("������Data���ֽڳ���Ϊ��%d \n", sizeof( Data ) ); // ���ڹ�ͬ�嵱��ռ�����������Ǹ����͵ĳ���
	
	d1.a = 1;
	d1.b = 2.0f;
	// 0����Ϊ�������ǹ���һ���ڴ��ַ��ֻ��ͬʱ��һ����������ʹ��
	// ��;�е�����java�еķ���
	printf( "%f\n", d1.a );
	
	// Ϊ��������� gets() & puts() 
	typedef int MyInt;
	MyInt i = 11;
	printf( " %d \n", i );
	// char c = getchar();
	putchar('a');
	putchar('b');
	// putchar( c );

	perror("��׼����");

	putchar('\n');
	return 0;
}