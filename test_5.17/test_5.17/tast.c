#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>



/*
* 1.���ֱ��� 
* 2.�ڴ�й¶
* 
* str��ֵ���� p��GetMeory�������β� ֻ���ں����ڲ���Ч 
* GetMeory �������غ� ��̬���ٵ��ڴ���δ�ͷ� �����޷��ҵ� �ڴ�й¶
*/
//void GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);
//}
//int main() {
//	Test();
//	return 0;
//}

//����
//void GetMemory(char** p)
//{
//	*p = (char*)malloc(100);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str);
//	strcpy(str, "hello world");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//int main() {
//	Test();
//	return 0;
//}



////���Ķ�
//char* GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//	return  p;
//}
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);
//}
//int main() {
//	Test();
//	return 0;
//}







/*
2  GetMeory �е�p ���� �Ǿֲ�����  �ڸú�������ʱ �ռ�����ȫ�ͷ�
�ٴ���strʱ ����������Ѿ�����ȷ��  ���ص���ջ�Ŀռ��ַ �Ƿ����� 
*/

//char* GetMemory(void)
//{
//	char p[] = "hello world";
//	return p;
//}
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();
//	printf(str);
//}
//int main() {
//	Test();
//	return 0;
//}

////���ƷǷ����� 


//int* dui() {
//	int* str = malloc(100);  //����  strָ������ᱻ���٣�
//	//�������������free �����ռ���Ȼ���� �ռ�ͨ��str���ظ�p
//	return str;
//}
//int* test() {
//	//static int a =10; ��̬���ռ��� ���������ӳ�
//	int a = 10;//ջ��  ������
//	return &a;
//}
//int  main() {
//	int* p = test();
//	*p = 20;
//
//	int* p = test();
//
//	return 0;
//}





/*
3  ��̬���ٿռ�δ�ͷ� 
*/

//void GetMemory(char** p, int num)
//{
//	*p = (char*)malloc(num);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//
//
//int main() {
//	Test();
//	return 0;
//}




/*
* 4.�Ƿ����ʿռ�
*/


//void Test(void)
//{
//	char* str = (char*)malloc(100);
//	strcpy(str, "hello");
//	free(str);  //free�ͷſռ�󣬲����Ὣstr��ΪNULL
//	//str �Ѿ�����Ұָ��
//	str == NULL;
//
//	if (str != NULL){
//		strcpy(str, "world");
//		printf(str);
//	}
//}
// 
//int main() {
//	Test();
//	return 0;
//}




