#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>


 //数据类型

//int main() {
//	char a[1000];
//	for (int  i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	printf("%d",strlen(a));
//
//	//按理来说，a数组应该存放的是-1到-1000，可是char类型
//	//可以存放数据的范围是-128 - 127，随着的-129会转换为127
//	//所以最后数组的长度为255
//}

//无符号数易导致程序死循环
//unsigned char i = 0;
//int main() {
//	for ( i = 0; i <= 255; i++)
//	{
//		printf("hehhe ");
//	}
//	return 0;
//}
////因为无符号char 的范围就是在0 - 255之间，条件永远成立


//unsigned int i;
//
//int main() {
//	for ( i = 9; i >= 0; i--)
//	{
//	printf("%u\n",i);
//	}
//	return 0;
//	//因为无符号的i 恒成立
//}







//浮点数


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
//	//整形的补码 0 0000000 00000000000000000001001
//	float* pFloat = (float*)&n;
//	printf("%d\n", n); //9
//	//取出的就是整形
//	//0 0000000 00000000000000000001001  
//
//	printf("pFloat 的值为%f\n", *pFloat); // 0.000000
//	//存进去的是整形的9
//	//但是取出来的是浮点数
//	//（-1)^0 * 0.00000000000000000001001 * 2^-126
//
//	*pFloat = 9.0;
//	//浮点数存进去的
//	//1001.0   1.001*2^3
//	//(-1)^0 * 1.001 * 2^3
//	//0 10000010 00100000000000000000000
//
//	printf("%d\n", n); //10912525
//	//0 10000010 00100000000000000000000  取出的就是整形值
//
//
//	printf("pFloat 的值为%f\n", *pFloat); // 9.0
//}






//指针详解 
 


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
//	//arr1 和arr2 开辟的不是同一个空间
//
//	//两个指针指向同一个字符串常量 字符串常量在空间上就开辟了一个空间
//	// 但是两个指针是不同的空间指向字符串常量 ，p1 p2 互不影响
//	//两个指针指向同一个空间，因此p1 == p2
//
//	char* p1 = "abcdef";//常量字符串
//	char* p2 = "abcdef";
//
//}


//指针数组  是数组  用来存放指针
//int main() {
//	//int arr[10] = { 0 };//整形数组
//	//char srr[10] = { 0 };//字符数组
////	int* arr[10] = {};
//	int a = 10, b = 20, c = 30;
//	int* arr[3] = { &a,&b,&c };//指针数组
//	int i = 0;
//	for (i = 0; i < 3; i++) {
//		printf("%d\n", *(arr[i]));
//	}
//	return 0;
//}


//正确用法
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


//数组指针 是指针 指向数组

//int main() {
//	int* k = NULL;//整形指针，指向整形的指针
//	char* p1 = NULL;
//	 
//
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	//特别牢记
//	// arr   首元素的地址
//	// &arr[0]   首元素的地址
//	// &arr  数组的地址
//
//	int(*p)[10] = &arr; // 数组指针
//	//用指针指向一个数组，数组的每个元素都是整形
//
//	  
//	 return 0;
//}
//


//数组指针的使用


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

////二维数组的打印
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
////说明 arr[] = *(arr) 
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

//int arr[5];  arr是一个y有5个int类型的整形数组
//int *parr1[10]  parr1 是一个有10个int* 的整形指针数组
//int (*parr2)[10]  parr2是一个数组指针，指向存放了10个整形的数组
//int（*parr3[10])[5]  parr3是一个数组，该数组有十个元素
//每个元素还是指向5个整形数组的指针




//数组参数  指针参数
//void test(int(*P)[5]) {
//
//}
//
//int main() {
//	int arr[3][5] = { 0 };
//	test(arr);
//	return 0;
//}


//函数指针   存放函数地址的指针

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
	printf("%p\n", &Add);   // 函数名 和&函数名 一样
	printf("%p\n",Add);*/

	/*int arr[10] = { 0 };
	int(*p)[10] = &arr;*/


	int (*pa)(int, int) = Add;
	printf("%d\n", (*pa)(a, b));

	void (*p)(char*) = print;
	(*p)("hello");

	return 0;
}