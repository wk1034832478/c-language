// 结构体
#include<stdio.h>
/**
* 定义格式, 结构体声明必须带分号！！！！！
* struct tag { 
*    member-list
*    member-list 
*    member-list  
*    ...
* } variable-list ;
*/

// 不完整声明, 意义当于函数的声明，常用于结构体的相互包含！
struct account;
struct account2;

// 账户结构体
struct account {
	int id;
	char *name;
	struct account2 *account2Var;
};

struct account2 {
	int id;
};

/**
* 接受结构体作为参数
**/
int acceptStruct( struct account a ) {
	printf( "%s \n", a.name );
	return 0;
}

/**
* 接受结构体指针作为参数, 指针来快捷方法成员
**/
int acceptStructPointer( struct account *a ) {
	printf( "%s \n", a -> name );
	return 0;
}

int main(void) {
	// 结构体的初始化
	// struct account2 a2 = { 110 };
	// struct account a1 = { 1, "王凯", &a2 }; // 注意：account2Var是一个指针变量，应当传递给地址！
	
	// printf( "name = %s \n", a1.name );
	// acceptStruct( a1 );
	// acceptStructPointer( &a1 );
	
	// 位域, 声明格式
	/**
	*struct 位域结构名 
	*	{
	*
	*	 位域列表
	*	};
	* 位域列表
	* 类型说明符 位域名: 位域长度 
	**/
	struct bitarea {
		unsigned int a: 4; // 占4位
		unsigned int b: 1; // 占1位, 如果是有符号的话，只能是作为符号位，也就是只能表示-1和0
	} bit1;
	
	bit1.b = 1;
	printf( " %d \n", bit1.b );
	return 0;
}