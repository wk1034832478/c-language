// �ṹ��
#include<stdio.h>
/**
* �����ʽ, �ṹ������������ֺţ���������
* struct tag { 
*    member-list
*    member-list 
*    member-list  
*    ...
* } variable-list ;
*/

// ����������, ���嵱�ں����������������ڽṹ����໥������
struct account;
struct account2;

// �˻��ṹ��
struct account {
	int id;
	char *name;
	struct account2 *account2Var;
};

struct account2 {
	int id;
};

/**
* ���ܽṹ����Ϊ����
**/
int acceptStruct( struct account a ) {
	printf( "%s \n", a.name );
	return 0;
}

/**
* ���ܽṹ��ָ����Ϊ����, ָ������ݷ�����Ա
**/
int acceptStructPointer( struct account *a ) {
	printf( "%s \n", a -> name );
	return 0;
}

int main(void) {
	// �ṹ��ĳ�ʼ��
	// struct account2 a2 = { 110 };
	// struct account a1 = { 1, "����", &a2 }; // ע�⣺account2Var��һ��ָ�������Ӧ�����ݸ���ַ��
	
	// printf( "name = %s \n", a1.name );
	// acceptStruct( a1 );
	// acceptStructPointer( &a1 );
	
	// λ��, ������ʽ
	/**
	*struct λ��ṹ�� 
	*	{
	*
	*	 λ���б�
	*	};
	* λ���б�
	* ����˵���� λ����: λ�򳤶� 
	**/
	struct bitarea {
		unsigned int a: 4; // ռ4λ
		unsigned int b: 1; // ռ1λ, ������з��ŵĻ���ֻ������Ϊ����λ��Ҳ����ֻ�ܱ�ʾ-1��0
	} bit1;
	
	bit1.b = 1;
	printf( " %d \n", bit1.b );
	return 0;
}