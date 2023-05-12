#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main01() {
	//数组名是首元素的地址
	/*
	1.sizeof(数组名） -------数组名整个数组
	2.&数组名 ———————数组名 整个数组
	3.除此之外都是首元素的地址
	*/


	int a[] = { 1,2,3,4 };
	printf("%d \n", sizeof(a)); //16
	printf("%d \n", sizeof(a + 0));  // 数组名表示首元素地址 a + 0还是首元素地址  4
	printf("%d \n", sizeof(*a));//4
	printf("%d \n", sizeof(a + 1));//4
	printf("%d \n", sizeof(a[1]));//4
	printf("%d \n", sizeof(&a));  //取出的是数组地址  数组地址也是字节 4
	printf("%d \n", sizeof(*&a));//16
	printf("%d \n", sizeof(&a + 1));//4  取出的还是地址大小，跳过的是一个数组， 
	//然后再计算地址的大小 ,还是字节 4
	printf("%d \n", sizeof(&a[0]));// 第一个元素的地址 4
	printf("%d \n", sizeof(&a [0] + 1));// 第二个元素的地址 4


	printf("\n");

	//字符数组
	char arr[] = { 'a','b','f','g','k','u' };
	printf("%d \n", sizeof(arr));//6
	printf("%d \n", sizeof(arr + 0));//4  首元素地址大小 
	printf("%d \n", sizeof(*arr));//1  第一个元素大小
	printf("%d \n", sizeof(arr[1]));//1
	printf("%d \n", sizeof(&arr));//4  首元素字节大小
	printf("%d \n", sizeof(&arr + 1));//4   首元素数组的下一数组的地址 地址大小 4
	printf("%d \n", sizeof(&arr[0] + 1));//4 第二个元素的地址

	printf("\n");


	printf("%d \n", strlen(arr));//随机
	printf("%d \n", strlen(arr + 0));//随机
	//printf("%d \n", strlen(*arr));// err  a = 97 地址 
	//printf("%d \n", strlen(arr[1]));;// err  b = 98 地址 
	printf("%d \n", strlen(&arr));  //随机
	printf("%d \n", strlen(&arr + 1));//随机  与上一个差 6
	printf("%d \n", strlen(&arr[0]  +1 )); //suijizhi -1

	printf("\n");




	char arr1[] = { "abcdef" };
	printf("%d \n", sizeof(arr1));//7  最后有一个字符串结束 \0
	printf("%d \n", sizeof(arr1 + 0));//4  首元素地址大小 
	printf("%d \n", sizeof(*arr1));//1 找到首元素的大小
	printf("%d \n", sizeof(arr1[1]));//1 第二个元素的大小
	printf("%d \n", sizeof(&arr1));//4  首元素地址字节大小
	printf("%d \n", sizeof(&arr1 + 1));//4   首元素数组的下一数组的地址 地址大小 4
	printf("%d \n", sizeof(&arr1[0] + 1));//4 第二个元素的地址

	printf("\n");

	printf("%d \n", strlen(arr1));//6
	printf("%d \n", strlen(arr1 + 0));//6
	//printf("%d \n", strlen(*arr));// err  a = 97 地址 
	//printf("%d \n", strlen(arr[1]));;// err  b = 98 地址 
	printf("%d \n", strlen(&arr1));  //6
	printf("%d \n", strlen(&arr1 + 1));//随机值   
	printf("%d \n", strlen(&arr1[0] + 1)); //5

	printf("\n");


	char* p = "abcdef";
	//char* p 是将a的地址放进p里面
	printf("%d \n", sizeof(p));//4   计算指针变量的大小 
	printf("%d \n", sizeof(p + 0));//4
	printf("%d \n", sizeof(*p));//1 第一个字符'a'  
	printf("%d \n", sizeof(p[0]));//1 第1个元素的大小    *(p + 0) = p[0] = 'a'
	printf("%d \n", sizeof(&p));//4  首元素地址字节大小
	printf("%d \n", sizeof(&p + 1));//4   首元素数组的下一数组的地址 地址大小 4
	printf("%d \n", sizeof(&p[0] + 1));//4 第二个元素的地址


	printf("\n");

	printf("%d \n", strlen(p));//6
	printf("%d \n", strlen(p + 1));//5
	//printf("%d \n", strlen(*p));// err  a = 97 地址 
	//printf("%d \n", strlen(p[0]));;// err  b = 98 地址 
	printf("%d \n", strlen(&p));  //随机值 *********   取出的是p的地址连带abcdf的地址
	//a的地址
	printf("%d \n", strlen(&p + 1));//随机值   
	printf("%d \n", strlen(&p[0] + 1)); //5  第二个元素开始




	printf("\n");


	//二维数组

	int ar[3][4] = { 0 };
	printf("%d\n", sizeof(ar));  //48
	printf("%d\n", sizeof(ar[0][0]));//4
	printf("%d\n", sizeof(ar[0]));//16

	printf("%d\n", sizeof(ar[0] + 1));//4   第一行第二个的地址

	printf("%d\n", sizeof(*(ar[0] + 1)));//4
	printf("%d\n", sizeof(ar + 1));//4   传的是第二行的地址 地址大小4字节

	printf("%d\n", sizeof(*(ar +1)));	//16
	printf("%d\n", sizeof(&ar[0] + 1));// 4  传的是第二行的地址 地址大小4字节
	printf("%d\n", sizeof(*(&ar[0] + 1)));// 16 
	printf("%d\n", sizeof(*ar));//16
	printf("%d\n", sizeof(ar[3]));//16




	return 0;
}