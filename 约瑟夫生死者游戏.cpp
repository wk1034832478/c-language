/**
*30 ������һ�����ϣ����أ���Ҫ 15 ���´���

���������ų�һ�ӣ��Ŷӵ�λ�ü�Ϊ���ǵı�š�

�������� 1 ��ʼ������ 9 �����´���

���ѭ����ֱ�����Ͻ�ʣ 15 ��Ϊֹ���ʶ�����Щ��ŵ����´����أ�
**/

#include<stdio.h>

int main() {
	int peoples[30] = {0};
	int count = 0; // ����������Ѿ��´�
	int index = 0;
	while ( true ) {
		for ( int i = 0; i < 30; i++) {
			if ( peoples[i] == 1 ) {
				continue;
			}
			index++;
			if ( index == 9 ) {
				printf( " %d �´�", i + 1 );
				peoples[i] = 1;
				index = 0;
				count++;
			}
		}
		if ( count == 15 ) {
				break;
		}
	}
	/*
	for ( int i = 0; i < 30; i++) {
			if ( peoples[i] == 1 ) {
				printf( " %d ", i + 1 );
			}
	}
	*/
	return 0;
}