#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main01() {
	//����������Ԫ�صĵ�ַ
	/*
	1.sizeof(�������� -------��������������
	2.&������ �������������������� ��������
	3.����֮�ⶼ����Ԫ�صĵ�ַ
	*/


	int a[] = { 1,2,3,4 };
	printf("%d \n", sizeof(a)); //16
	printf("%d \n", sizeof(a + 0));  // ��������ʾ��Ԫ�ص�ַ a + 0������Ԫ�ص�ַ  4
	printf("%d \n", sizeof(*a));//4
	printf("%d \n", sizeof(a + 1));//4
	printf("%d \n", sizeof(a[1]));//4
	printf("%d \n", sizeof(&a));  //ȡ�����������ַ  �����ַҲ���ֽ� 4
	printf("%d \n", sizeof(*&a));//16
	printf("%d \n", sizeof(&a + 1));//4  ȡ���Ļ��ǵ�ַ��С����������һ�����飬 
	//Ȼ���ټ����ַ�Ĵ�С ,�����ֽ� 4
	printf("%d \n", sizeof(&a[0]));// ��һ��Ԫ�صĵ�ַ 4
	printf("%d \n", sizeof(&a [0] + 1));// �ڶ���Ԫ�صĵ�ַ 4


	printf("\n");

	//�ַ�����
	char arr[] = { 'a','b','f','g','k','u' };
	printf("%d \n", sizeof(arr));//6
	printf("%d \n", sizeof(arr + 0));//4  ��Ԫ�ص�ַ��С 
	printf("%d \n", sizeof(*arr));//1  ��һ��Ԫ�ش�С
	printf("%d \n", sizeof(arr[1]));//1
	printf("%d \n", sizeof(&arr));//4  ��Ԫ���ֽڴ�С
	printf("%d \n", sizeof(&arr + 1));//4   ��Ԫ���������һ����ĵ�ַ ��ַ��С 4
	printf("%d \n", sizeof(&arr[0] + 1));//4 �ڶ���Ԫ�صĵ�ַ

	printf("\n");


	printf("%d \n", strlen(arr));//���
	printf("%d \n", strlen(arr + 0));//���
	//printf("%d \n", strlen(*arr));// err  a = 97 ��ַ 
	//printf("%d \n", strlen(arr[1]));;// err  b = 98 ��ַ 
	printf("%d \n", strlen(&arr));  //���
	printf("%d \n", strlen(&arr + 1));//���  ����һ���� 6
	printf("%d \n", strlen(&arr[0]  +1 )); //suijizhi -1

	printf("\n");




	char arr1[] = { "abcdef" };
	printf("%d \n", sizeof(arr1));//7  �����һ���ַ������� \0
	printf("%d \n", sizeof(arr1 + 0));//4  ��Ԫ�ص�ַ��С 
	printf("%d \n", sizeof(*arr1));//1 �ҵ���Ԫ�صĴ�С
	printf("%d \n", sizeof(arr1[1]));//1 �ڶ���Ԫ�صĴ�С
	printf("%d \n", sizeof(&arr1));//4  ��Ԫ�ص�ַ�ֽڴ�С
	printf("%d \n", sizeof(&arr1 + 1));//4   ��Ԫ���������һ����ĵ�ַ ��ַ��С 4
	printf("%d \n", sizeof(&arr1[0] + 1));//4 �ڶ���Ԫ�صĵ�ַ

	printf("\n");

	printf("%d \n", strlen(arr1));//6
	printf("%d \n", strlen(arr1 + 0));//6
	//printf("%d \n", strlen(*arr));// err  a = 97 ��ַ 
	//printf("%d \n", strlen(arr[1]));;// err  b = 98 ��ַ 
	printf("%d \n", strlen(&arr1));  //6
	printf("%d \n", strlen(&arr1 + 1));//���ֵ   
	printf("%d \n", strlen(&arr1[0] + 1)); //5

	printf("\n");


	char* p = "abcdef";
	//char* p �ǽ�a�ĵ�ַ�Ž�p����
	printf("%d \n", sizeof(p));//4   ����ָ������Ĵ�С 
	printf("%d \n", sizeof(p + 0));//4
	printf("%d \n", sizeof(*p));//1 ��һ���ַ�'a'  
	printf("%d \n", sizeof(p[0]));//1 ��1��Ԫ�صĴ�С    *(p + 0) = p[0] = 'a'
	printf("%d \n", sizeof(&p));//4  ��Ԫ�ص�ַ�ֽڴ�С
	printf("%d \n", sizeof(&p + 1));//4   ��Ԫ���������һ����ĵ�ַ ��ַ��С 4
	printf("%d \n", sizeof(&p[0] + 1));//4 �ڶ���Ԫ�صĵ�ַ


	printf("\n");

	printf("%d \n", strlen(p));//6
	printf("%d \n", strlen(p + 1));//5
	//printf("%d \n", strlen(*p));// err  a = 97 ��ַ 
	//printf("%d \n", strlen(p[0]));;// err  b = 98 ��ַ 
	printf("%d \n", strlen(&p));  //���ֵ *********   ȡ������p�ĵ�ַ����abcdf�ĵ�ַ
	//a�ĵ�ַ
	printf("%d \n", strlen(&p + 1));//���ֵ   
	printf("%d \n", strlen(&p[0] + 1)); //5  �ڶ���Ԫ�ؿ�ʼ




	printf("\n");


	//��ά����

	int ar[3][4] = { 0 };
	printf("%d\n", sizeof(ar));  //48
	printf("%d\n", sizeof(ar[0][0]));//4
	printf("%d\n", sizeof(ar[0]));//16

	printf("%d\n", sizeof(ar[0] + 1));//4   ��һ�еڶ����ĵ�ַ

	printf("%d\n", sizeof(*(ar[0] + 1)));//4
	printf("%d\n", sizeof(ar + 1));//4   �����ǵڶ��еĵ�ַ ��ַ��С4�ֽ�

	printf("%d\n", sizeof(*(ar +1)));	//16
	printf("%d\n", sizeof(&ar[0] + 1));// 4  �����ǵڶ��еĵ�ַ ��ַ��С4�ֽ�
	printf("%d\n", sizeof(*(&ar[0] + 1)));// 16 
	printf("%d\n", sizeof(*ar));//16
	printf("%d\n", sizeof(ar[3]));//16




	return 0;
}