#include<windows.h>
#include<stdio.h>
#include<errno.h>

extern int errno;

int main(void) {
	printf( " ���Զ�̬���ӿ� \n" );
	// ��������ָ��
	typedef int (*pMax)(int a, int b);
	int a;
	pMax Max;
	HINSTANCE hDLL; // DLL���
	hDLL = LoadLibrary( "MyDll.dll" ); // ���ض�̬���ӿ�
	Max = (pMax) GetProcAddress(hDLL, "Max"); // ��ȡ����ָ��
	a = Max(5, 8);
	printf( "�ȽϽ����%d", a );
	FreeLibrary( hDLL ); // ж��MyDll.dll�ļ�
	char *errorStr = strerror( errno ); // ���ص�ǰ������Ϣ
	printf( "\n ������룺 %d, ������Ϣ: %s \n", errno, errorStr );
	/**
	* û�н�Maxд��ȷ
	**/
	hDLL = LoadLibrary( "MyDll.dll" ); // ���ض�̬���ӿ�
	Max = (pMax) GetProcAddress(hDLL, "Max2"); // ��ȡ����ָ��
	a = Max(5, 8);
	// printf( "�ȽϽ����%d", a );
	// FreeLibrary( hDLL ); // ж��MyDll.dll�ļ�
	errorStr = strerror( errno ); // ���ص�ǰ������Ϣ
	printf( "\n ������룺 %d, ������Ϣ: %s", errno, errorStr );
	getchar();
	return 0;
}