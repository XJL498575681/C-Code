#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//�Զ�������  �ṹ�� ö�� 

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
//// s3,s4,s5,s6 ��Ϊȫ�ֱ���
//struct stu s3;
//
//int main() {
//	struct stu s1 = { "wangsan",{87,47},"24545465","��",19 };  //�ֲ�����
//	printf("%s %lf %d %s %s %d", s1.name, s1.st .weight ,s1.st.age,s1.tele, s1.sex, s1.age);
//	struct stu s2;
//	return 0;
//}




/*
* 1.�ṹ���һ������������ṹ����ʼλ��
* 2.���������С�� ĳ���������������� ��ʼ  
������������ �ṹ�����������С��Ĭ�϶�������VS--8  gcc--�ޣ� ����Сֵ
3.�ṹ���С������������������ 
4.Ƕ�׽ṹ�� ���� �����������������λ��
�ṹ�������С������������������������Ƕ�׽ṹ��Ķ�����)  ��������
* 
*/


////�ṹ���ڴ����
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
//	//char 1    �м�3  int 4  char 1   �ṹ��3 
//	printf("%d\n", sizeof(s1)); // 12
//	struct S2 s2 = { 0 };
//	//char 1  char 2 �м� 1  int 4  
//	printf("%d\n", sizeof(s2));  //8
//	return 0;
//}



//����Ĭ�϶����� 4     ����#pragma pack (4)     ȡ��#pragma pack ()    2 4 8 16 
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



////��   offsetof
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








//�ṹ�崫�� 

//struct S {
//	int a;
//	char c;
//	double d;
//};
//
////��ֵ ����ַ����ȥ���иı�
//void Init(struct S* str) {
//	str->a = 12;
//	str->c = 'a';
//	str->d = 3;
//}


// ��ӡ ��ֵ���޸��䱾��ֵ ��ʱ��������  �˷ѿռ�  ������Ҫѹջ ������ɿ���
//void print(struct S temp) {
//	printf("%d %c %lf\n", temp.a, temp.c, temp.d);
//}

//  ��ַ  ����ȥ��ֻ��һ��ָ�� �ĸ����߰˸��ֽ�
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







//λ��  -- -  ������λ   --- ��ʡ�ռ�
/*		

*/

//struct T {
//	char a : 3;
//	char b : 4;  //3+ 4 һ���ֽ�  5 һ���ֽ�  4 һ���ֽ�
//	char c : 5;
//	char d : 4;
//
//};
//struct S {
//	int a : 2; // ��������ִ�����Ҫ�ı���λ   ԭ����Ҫ4���ֽ� 32������λ 
//	int b : 5;
//	int c : 10;
//	int d : 30;
//};
////47 bit - 6�ֽ� * 8 = 48bit
//// 2+5+10 = 17����λ ʣ��15 �˷�     30 �������¿���һ���ֽ�  �൱��ռ�������ֽ� 
//
//int main() {
//	struct S s;
//	printf("%d\n", sizeof(s));
//	struct T t = { 0 };
//	t.a = 10;//a ֻ�ܷ�3������λ 1010-> 010 = 2
//	t.b = 20;//b ֻ�ܷ�4������λ 10100-> 0100 =4
//	t.c = 3;//a ֻ�ܷ�5������λ 011-> 00011 = 3
//	t.d = 4;//a ֻ�ܷ�4������λ100-> 0100 = 4
//	printf("%d\n", sizeof(t));
//	return 0;
//}









//// #define ���峣��
////ö��  -- enum  �������� �����Ŀ���ȡֵ�����Ѿ��涨��ȡֵ
// //ö�ٴ�С����intֵ һ���ֽڴ�С4 
//enum Sex {
//	MALE, FEMALE, SECRET
//};
//enum Color {
//	//ö�ٿ��ܵĳ��� �����μ�һ��
//	//�˴����ǳ����Ǹ���ֵ  �������ɸ�ֵ ��ֻ�ǽ��� ��ʼ��ֵ
//	RED = 2,//0
//	GREEN = 4,//1
//	BLUE = 8//2
//};
//
//int main() {
//	enum Sex s = MALE;
//	// s = 3;������  ��ʱ��s ��һ��enum ����  2 ��һ��int���� 
//	//enum Color c = 2;  // ������  ��ʱ��C ��һ��enum ����  2 ��һ��int���� 
//	printf("%d %d %d", RED, GREEN, BLUE); //  0  1 2 
//	return 0;
//}






////���� - ������ - ������    union
////����ͬһ��ռ�   �����������С����������Ա������С   ����ͬʱʹ��
// //�������С ����������������
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

////�������С


union un {
	int a;  //����4  ������ 8   4 
	char arr[5];//����5  ������ 8  8 
};
int main() {
	union un u;
	printf("%d\n", sizeof(u)); // 8 
	return 0;
}




//////�жϴ�С��
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
//	//����1 ��ʾС��
//	//����2 ��ʾ���
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
//		printf("С��\n");
//	}
//	else {
//		printf("���\n");
//	}
//	return 0;
//}