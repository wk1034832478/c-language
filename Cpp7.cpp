#include<stdio.h>
#include<string.h> // �ַ����������ļ�
/**
* ��c���Ե��У�һ���ַ�������\0��β��, �ַ��������ʽ�������ַ����ף����϶�ָ���ƶ���ֱ������\0�ַ�Ϊֹ
**/
int main() {
	// �ַ�����\0��β��\0���Բ���ʾд�����������������ȥ�ģ�����Ҫע�����鳤��
	// char cs[5] = {'a', 'b', 'c', 'd' }; // �Զ���\0
	// char cs[5] = {'a', 'b', 'c', 'd', 'e', '\0'}; // too many initializers
	// char cs[5] = {'a', 'b', 'c', 'd', 'e'}; // �������鳤������û��\0��β���ᵼ�²������������
	// printf( "%s \n", cs);

	// char cs2[5];
	// strcpy( cs2, cs); // strcpy�ڶ��������� const char *���ͣ�Ҳ���ǳ������ͣ����ɱ�
	// printf("���ƺ������ = %s \n", cs2 );

	// printf( "���鳤��= %d \n", strlen("��ð�") );
	
	// ʹ��ָ���������ַ���
	char *cs = "abcdasdlasd;m;la;lsdl";
	printf( " %s \n", cs+1 );
	printf( " %s \n", cs+2 );
	printf( " %s \n", cs+3 );
	printf( " %s \n", cs+4 );
	return 0;
} 