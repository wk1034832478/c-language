#include<windows.h>
#include<stdio.h>
#include<errno.h>

extern int errno;

int main(void) {
	printf( " ���Զ�̬���ӿ� \n" );
	// ��������ָ��
	typedef int (*pMax)(int a, int b);
	pMax Max;
	HINSTANCE hDLL; // DLL���
	hDLL = LoadLibrary( "MyDll.dll" ); // ���ض�̬���ӿ�
	Max = (pMax) GetProcAddress(hDLL, "Max"); // ��ȡ����ָ��
	int a = Max(5, 8);
	printf( "�ȽϽ����%d", a );
	FreeLibrary( hDLL ); // ж��MyDll.dll�ļ�
	char *errorStr = strerror( errno ); // ���ص�ǰ������Ϣ
	printf( "������Ϣ: %s", errorStr );
	getchar();
	return 0;
}