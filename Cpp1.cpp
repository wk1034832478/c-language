#include<stdio.h>
#include<float.h>

// ���峣���ķ�ʽ
#define True 1
const int LOVE = 520;

/**
* auto �ֲ���Ĭ�ϣ�
*
* register �Ĵ�������һ���Ĵ������У��������ٶ�ʮ�ֿ�
*
* static ��������λ��ʼ�ձ����Ŵ��ڣ����ᱻ���� 
* 
* extern �ṩ��һ��ȫ�ֱ��������ã�ȫ�ֱ��������еĳ����ļ����ǿɼ��ģ�
* �����ж���ļ��Ҷ�����һ�������������ļ���ʹ�õ�ȫ�ֱ�������ʱ��
* �����������ļ���ʹ�� extern ���õ��Ѷ���ı������������á�
* ������ô��⣬extern ����������һ���ļ�������һ��ȫ�ֱ���������
**/

// ���ʲô�� ��ֵ����ֵ
// ���abc���������������ļ�����������Ҫ������ط���������
// extern int abc 
int abc = 111444;

bool test( int target, int expect ) {
	return target == expect;
}

int test1(int* i) {
	*i = 100;
	return 0;
}

/**
* ���Ծ�̬����
**/
int test2() {
	static int a = 0;
	a++;
	printf("���Ǿ�̬���� a = %d \n", a);
	return 0;
}

/**
* �����߼��������
**/
int test3() {
	int a = 2;
	a <<= 1; // �����ƶ�һ��λ��
	printf("2����1λ = %d \n", a);
	return 0;
}

int main() {
	printf("���ǳ���%d", LOVE);
	test2();
	test2();
	test2();
	test2();

	test3();

	// printf("����" + "����");
	// printf("��ã�c���ԣ����ֻ����ˣ����Ѽ��\n");
	// printf("����True��ֵ��%d\mn", True);
	// double f = 0.1 + 0.2;
	// printf("%.20f\n", f);
	
	// ���Ե�ַ���ݣ��޸��ڴ��ַָ���ֵ
	/*
	int i = 200;
	test1( &i );
	printf("%d\n", i);
	printf("int �洢��С��%lu \n", sizeof(int));
	*/

	/**
	* float ��2��Ϊ�ݵ���
	**/
	/*
	printf("float �洢����ֽ�����%d \n", sizeof(float) );
	printf("float �洢���ֵ��%E \n", FLT_MIN ); // %E ��ָ����ʽ���������
	printf("float �洢��Сֵ��%E \n", FLT_MAX );
	printf("float ����ֵ�����ɱ�������λ����%d \n", FLT_DIG );
	*/

	/*
	printf("�˽��Ƶ�9��%o���޷��ţ�\n", 9);
	int ch = 0;
	for ( ch = 65; ch < 91; ch++ ) {
		printf("ASCIIֵ = %d, �ַ�Ϊ = %c\n", ch, ch );
	}	
	printf( "ָ���ֵ��%p", ch );
	*/
	extern int abc; //  �������ⲿ�ı�����ֻ�趨��˵������
	printf("abc = %d \n", abc);
	return 0;
}