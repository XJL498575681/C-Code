#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>


 //��������

//int main() {
//	char a[1000];
//	for (int  i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	printf("%d",strlen(a));
//
//	//������˵��a����Ӧ�ô�ŵ���-1��-1000������char����
//	//���Դ�����ݵķ�Χ��-128 - 127�����ŵ�-129��ת��Ϊ127
//	//�����������ĳ���Ϊ255
//}

//�޷������׵��³�����ѭ��
//unsigned char i = 0;
//int main() {
//	for ( i = 0; i <= 255; i++)
//	{
//		printf("hehhe ");
//	}
//	return 0;
//}
////��Ϊ�޷���char �ķ�Χ������0 - 255֮�䣬������Զ����


//unsigned int i;
//
//int main() {
//	for ( i = 9; i >= 0; i--)
//	{
//	printf("%u\n",i);
//	}
//	return 0;
//	//��Ϊ�޷��ŵ�i �����
//}







//������


//int main() {
//	float f = 5.5;
//  	return 0;
//	//5.5  ==  101.1   == (-1)^0 * 1.011*2^2
//	//S = 0; M= 1.011 E = 2
//	//0 10000001 0110000000000000000
//	//0x40b00000
//}  



//int main() {
//	int n = 9;
//
//	//���εĲ��� 0 0000000 00000000000000000001001
//	float* pFloat = (float*)&n;
//	printf("%d\n", n); //9
//	//ȡ���ľ�������
//	//0 0000000 00000000000000000001001  
//
//	printf("pFloat ��ֵΪ%f\n", *pFloat); // 0.000000
//	//���ȥ�������ε�9
//	//����ȡ�������Ǹ�����
//	//��-1)^0 * 0.00000000000000000001001 * 2^-126
//
//	*pFloat = 9.0;
//	//���������ȥ��
//	//1001.0   1.001*2^3
//	//(-1)^0 * 1.001 * 2^3
//	//0 10000010 00100000000000000000000
//
//	printf("%d\n", n); //10912525
//	//0 10000010 00100000000000000000000  ȡ���ľ�������ֵ
//
//
//	printf("pFloat ��ֵΪ%f\n", *pFloat); // 9.0
//}






//ָ����� 
 


//int main() {
//	char arr[] = "abcdf";
//	char* p = arr;
//	printf("%s\n", arr);
//	printf("%s", p);
//
//	//char* p = "abcdef";
//	//printf("%c", p); // a
//	//printf("%s", p); // abcdef
//	return 0; 
//}



//int main() {
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	//arr1 ��arr2 ���ٵĲ���ͬһ���ռ�
//
//	//����ָ��ָ��ͬһ���ַ������� �ַ��������ڿռ��ϾͿ�����һ���ռ�
//	// ��������ָ���ǲ�ͬ�Ŀռ�ָ���ַ������� ��p1 p2 ����Ӱ��
//	//����ָ��ָ��ͬһ���ռ䣬���p1 == p2
//
//	char* p1 = "abcdef";//�����ַ���
//	char* p2 = "abcdef";
//
//}


//ָ������  ������  �������ָ��
//int main() {
//	//int arr[10] = { 0 };//��������
//	//char srr[10] = { 0 };//�ַ�����
////	int* arr[10] = {};
//	int a = 10, b = 20, c = 30;
//	int* arr[3] = { &a,&b,&c };//ָ������
//	int i = 0;
//	for (i = 0; i < 3; i++) {
//		printf("%d\n", *(arr[i]));
//	}
//	return 0;
//}


//��ȷ�÷�
//int main() {
//	int arr1[] = { 1,2,3,4 };
//	int arr2[] = { 1,2,3,4 };
//	int arr3[] = { 1,2,3,4 };
//	int* prr[] = { arr1,arr2,arr3 };
//	for (int  i = 0; i < 3; i++)
//	{ 
//		for (int j = 0;j < 4;j++)
//		{
//			printf("%d ", *(prr[i] + j));
//		}
//		printf("\n");
//	}
//	return 0;
//}


//����ָ�� ��ָ�� ָ������

//int main() {
//	int* k = NULL;//����ָ�룬ָ�����ε�ָ��
//	char* p1 = NULL;
//	 
//
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	//�ر��μ�
//	// arr   ��Ԫ�صĵ�ַ
//	// &arr[0]   ��Ԫ�صĵ�ַ
//	// &arr  ����ĵ�ַ
//
//	int(*p)[10] = &arr; // ����ָ��
//	//��ָ��ָ��һ�����飬�����ÿ��Ԫ�ض�������
//
//	  
//	 return 0;
//}
//


//����ָ���ʹ��


//int main() {
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//
//	int i = 0;
//	for (i = 0; i < 10; i++) {
//		printf("%d ", *(p + i));
//		printf("%d ", *(arr + i));
//		printf("%d  ", arr[i]);
//		printf("%d  ", p[i]); 
//	}
//	return 0;
//}
//int main() {
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*p)[10] = &arr;
//
//
//	//for (int i = 0; i < 10; i++)
//	//{
//	//	printf("%d ", (*p)[i]);
//	//}
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", *(*p + i));  // *p == arr
//	}
//	return 0;     
//
//}

////��ά����Ĵ�ӡ
//void print(int arr[3][5], int i, int j) {
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 5; j++) {
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//
//}void print1(int(*p)[5], int x, int y) {
//	for (int i = 0; i < x; i++)
//	{
//		for (int j = 0; j < y; j++)
//		{
////˵�� arr[] = *(arr) 
//			printf("%d", *(*(p + i) + j));
//			printf("%d", *(p[i] + j));
//			printf("%d", p[i][j]);
//			printf("%d", (*(p + i))[j]);
//		}
//		printf("\n");
//	}
//}
//  
//int main() {
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{5,6,7,8,9}};
//	//print(arr, 3, 5); 
//	print1(arr, 3, 5);
//	return 0;
//}

//int arr[5];  arr��һ��y��5��int���͵���������
//int *parr1[10]  parr1 ��һ����10��int* ������ָ������
//int (*parr2)[10]  parr2��һ������ָ�룬ָ������10�����ε�����
//int��*parr3[10])[5]  parr3��һ�����飬��������ʮ��Ԫ��
//ÿ��Ԫ�ػ���ָ��5�����������ָ��




//�������  ָ�����
//void test(int(*P)[5]) {
//
//}
//
//int main() {
//	int arr[3][5] = { 0 };
//	test(arr);
//	return 0;
//}


//����ָ��   ��ź�����ַ��ָ��

int Add(int m, int n) {
	return m + n;
}

void print(char* str) {
	printf("%s\n", str);
}
int main() {
	int a = 10; 
	int b = 20;
	/*printf("%d\n", Add(a, b));
	printf("%p\n", &Add);   // ������ ��&������ һ��
	printf("%p\n",Add);*/

	/*int arr[10] = { 0 };
	int(*p)[10] = &arr;*/


	int (*pa)(int, int) = Add;
	printf("%d\n", (*pa)(a, b));

	void (*p)(char*) = print;
	(*p)("hello");

	return 0;
}