#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void) {
	char *c;// 10��4�ֽڵĿռ�
	// c = (char*)calloc(10,4); // �������� 	void *calloc(int num, int size); ����ǿ��ת�����κ�ָ��
	// ��Ч c = (char*)malloc( 40 );
	c = (char*)malloc( 40 );
	strcpy( c, "sadas");
	printf( "��ַ �� %d\n", c );
	// c = "aass"; // ���������cָ��ĵ�ַ, Ҳ�ͽ�����Ϊʲôchar���鲻������������ָ��������ֵ
	printf( "��ַ �� %d\n", c );
	printf( "%s\n",c );
	strcpy( c, "adakjsdkasdhsahdkjsahdkjsahdhkasdhkdjhasdkj");
	printf( "%s\n", c );
	// free( c ); // �ͷ��ڴ�
 	return 0;
}