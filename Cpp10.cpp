#include<stdio.h>
#include "my.h"

/***
include ���÷�ʽ
1. #include <file>  ����ϵͳͷ�ļ� ����ϵͳĿ¼�ı�׼�б���������Ϊ file ���ļ����ڱ���Դ����ʱ��������ͨ�� -I ѡ���Ŀ¼ǰ���ڸ��б�ǰ��
2. #include "file"  �����û�ͷ�ļ� ���ڰ�����ǰ�ļ���Ŀ¼��������Ϊ file ���ļ����ڱ���Դ����ʱ��������ͨ�� -I ѡ���Ŀ¼ǰ���ڸ��б�ǰ
**/

/**
* �ļ��Ķ�д
**/

int main( void ) {
	FILE *f1;
	f1 = fopen("test.txt", "w");
	fputs("��ã�����c���ԣ���", f1);
	fclose( f1 );

	printf("��ǰ����: %s", __DATE__ );
	printf("��ǰʱ��: %s\n", __TIME__ );
	printf("��ǰ�ļ��� %s\n", __FILE__ ); // ����������·��
	return 0;
}