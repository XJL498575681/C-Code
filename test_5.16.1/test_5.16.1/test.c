#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//自定义类型  结构体 枚举 

//typedef struct Node {
//	int adta;
//	struct Node* next;
//}LNode;
//
//int main() {
//	struct Node n1;
//	LNode n2;
//	return 0;
//}

//struct T {
//	double weight;
//	short age;
//};
//
//struct stu{
//	char name[20];
//	struct T st;
//	char tele[12];
//	char sex[10];
//	int age;
//}s4,s5,s6;
//// s3,s4,s5,s6 都为全局变量
//struct stu s3;
//
//int main() {
//	struct stu s1 = { "wangsan",{87,47},"24545465","男",19 };  //局部变量
//	printf("%s %lf %d %s %s %d", s1.name, s1.st .weight ,s1.st.age,s1.tele, s1.sex, s1.age);
//	struct stu s2;
//	return 0;
//}




/*
* 1.结构体第一个变量放在与结构体起始位置
* 2.其余变量大小从 某个对齐数的整数倍 开始  
对齐数——— 结构体自身变量大小和默认对齐数（VS--8  gcc--无） 的最小值
3.结构体大小是最大对齐数的整数倍 
4.嵌套结构体 对齐 存放自身最大的整数倍位置
结构体整体大小是所有最大对齐数（包括所有嵌套结构体的对齐数)  的整数倍
* 
*/


////结构体内存对齐
//struct S1 {
//	char c1;
//	int a;
//	char c2;
//};
//struct S2 {
//	char c1;
//	char c2;
//	int a;
//};
//
//int main() {
//	struct S1 s1 = { 0 };
//	//char 1    中间3  int 4  char 1   结构体3 
//	printf("%d\n", sizeof(s1)); // 12
//	struct S2 s2 = { 0 };
//	//char 1  char 2 中间 1  int 4  
//	printf("%d\n", sizeof(s2));  //8
//	return 0;
//}



//设置默认对齐数 4     设置#pragma pack (4)     取消#pragma pack ()    2 4 8 16 
//#pragma pack (4)
//
//
//struct S {
//	char c1;
//	double d;
//
//}; 
//#pragma pack ()
//
//int main() {
//	struct S s;
//	printf("%d\n", sizeof(s)); //12
//	return 0;
//}



////宏   offsetof
//#include<stddef.h>
//struct S {
//	char c;
//	int i;
//	double d;
//};
//
//int main() {
//	printf("%d\n", offsetof(struct S, c));
//	printf("%d\n", offsetof(struct S, i));
//	printf("%d\n", offsetof(struct S, d));
//	return 0;
//}








//结构体传参 

//struct S {
//	int a;
//	char c;
//	double d;
//};
//
////赋值 将地址传过去进行改变
//void Init(struct S* str) {
//	str->a = 12;
//	str->c = 'a';
//	str->d = 3;
//}


// 打印 传值不修改其本身值 临时拷贝内容  浪费空间  参数需要压栈 容易造成开销
//void print(struct S temp) {
//	printf("%d %c %lf\n", temp.a, temp.c, temp.d);
//}

//  传址  传过去的只是一个指针 四个或者八个字节
//void print(const struct S* str) {
//	printf("%d %c %lf\n",str->a,str->c,str->d);
//}
//
//int main() {
//	struct S s = { 0 };
//	Init(&s);
//	print(&s);
//	return 0;
//}







//位段  -- -  二进制位   --- 节省空间
/*		

*/

//struct T {
//	char a : 3;
//	char b : 4;  //3+ 4 一个字节  5 一个字节  4 一个字节
//	char c : 5;
//	char d : 4;
//
//};
//struct S {
//	int a : 2; // 后面的数字代表需要的比特位   原本需要4个字节 32个比特位 
//	int b : 5;
//	int c : 10;
//	int d : 30;
//};
////47 bit - 6字节 * 8 = 48bit
//// 2+5+10 = 17比特位 剩下15 浪费     30 比特重新开辟一个字节  相当于占用两个字节 
//
//int main() {
//	struct S s;
//	printf("%d\n", sizeof(s));
//	struct T t = { 0 };
//	t.a = 10;//a 只能放3个比特位 1010-> 010 = 2
//	t.b = 20;//b 只能放4个比特位 10100-> 0100 =4
//	t.c = 3;//a 只能放5个比特位 011-> 00011 = 3
//	t.d = 4;//a 只能放4个比特位100-> 0100 = 4
//	printf("%d\n", sizeof(t));
//	return 0;
//}









//// #define 定义常量
////枚举  -- enum  创建变量 变量的可能取值按照已经规定的取值
// //枚举大小就是int值 一个字节大小4 
//enum Sex {
//	MALE, FEMALE, SECRET
//};
//enum Color {
//	//枚举可能的常量 （依次加一）
//	//此处并非常来那个赋值  常量不可赋值 这只是进行 初始化值
//	RED = 2,//0
//	GREEN = 4,//1
//	BLUE = 8//2
//};
//
//int main() {
//	enum Sex s = MALE;
//	// s = 3;不可以  此时的s 是一个enum 类型  2 是一个int类型 
//	//enum Color c = 2;  // 不可以  此时的C 是一个enum 类型  2 是一个int类型 
//	printf("%d %d %d", RED, GREEN, BLUE); //  0  1 2 
//	return 0;
//}






////联合 - 联合体 - 共用体    union
////共用同一块空间   联合体变量大小至少是最大成员变量大小   不可同时使用
// //联合体大小 最大对齐数的整数倍
//union un {
//	char c;  
//	int i;
//};
//
//int main() {
//	union un u;
//	printf("%d\n", sizeof(u)); // 4
//	printf("%p\n", &u);  //004FFB04
//	printf("%p\n", &(u.c));//004FFB04
//	printf("%p\n", &(u.c) );//004FFB04
//	return 0;
//}

////联合体大小


union un {
	int a;  //自身4  对齐数 8   4 
	char arr[5];//自身5  对齐数 8  8 
};
int main() {
	union un u;
	printf("%d\n", sizeof(u)); // 8 
	return 0;
}




//////判断大小端
////int check_sys() {
////	int a = 1;
////	return *(char*)&a;
////
////}
//int check_sys() {
//	union un {
//		char c;
//		int i;
//	};
//	union un u;
//	u.i = 1;
//	//返回1 表示小端
//	//返回2 表示大端
//	return u.c;
//}
//
//int main() {
//	/*int a = 0x11223344;*/
//	int a = 1;
//	//char* p = (char*)&a;
//
//	int ret = check_sys();
//
//	if (ret == 1) {
//		printf("小端\n");
//	}
//	else {
//		printf("大端\n");
//	}
//	return 0;
//}