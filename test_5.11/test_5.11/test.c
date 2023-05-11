#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

//void print(char* str) {
//	printf("%s\n", str);
//}
//int main() {
//	int a;
//	int* pa;
//	void (*p)(char*) = print;
//	(*p)("hello unist");
//  p("hello unist");
//	return 0;
//}


//解释 (*(void (*)())0)();
// 函数指针类型void (*)()  （void (*)())0  将0 强制转换为void (*)() 类型
//  0 就是一个函数地址  *(void (*)()) 解引用 找到函数 
// 
//



//函数指针数组
//int add(int x, int y) {
//	return x + y;
//}
//int Sub(int x, int y) {
//	return x - y;
//}
//int Mul(int x, int y) {
//	return x * y;
//}
//int Div(int x, int y) {
//	return x / y;
//}
//
//int main() {
//	//指针数组
//	//int* arr[5];
//	//int(*pa)(int, int) = &add;
//	//printf("%d\n",(*pa)(2, 3));
//	//函数数组指针
//	int (*parr[4])(int, int) = {add,Sub,Mul,Div};//函数指针的数组
//	int i = 0;
//	for (i = 0; i < 4; i++) {
//		printf("%d\n", parr[i](2,3)); 
//	}
//}


//char* my_strcpy(char* dest, const char* src);
////写一个指针指向函数my_strcpy
//char* (*pf)(char*, const char*);
////写一个函数指针数组，存放四个my_strcpy函数的地址
//char* (*prArr[4])(char*, const char*);




//void print(char* str) {
//	printf("%s", str);
//}
//void test(void (*p)(char*)) {
//	printf("test\n");
//	p("nuist");  //另外一方实现
//}
//int main() {
//	test(print);
//	print("xixi\n");// 直接实现
//	return 0;
//}






////计算器
//int Add(int x, int y) {
//	return x + y;
//}
//int Sub(int x, int y) {
//	return x - y;
//}
//int Mul(int x, int y) {
//	return x * y;
//}
//int Div(int x, int y) {
//	return x / y;
//}
//
//void menu(){
//	printf("*********************\n" );
//	printf("***1.add   2.Sub   ***\n");
//	printf("***3.mul   4.div   ***\n");
//	printf("*****0. exit    ******\n");
//	printf("*********************\n");
//}
////回调函数
////通过函数指针调用函数
////将函数地址作为一个参数传递给另外一个函数，再由指针调用所指（自身）的函数
//void Calc(int (*pf)(int, int)) {
//	int x = 0;
//	int y = 0;
//	printf("请输入两个整数\n");
//	scanf("%d %d", &x, &y);
//	printf("%d\n", pf(x, y));
//}
//int main() {
//	int input = 0;
//	//int x = 0;
//	//int y = 0;
//	do {
//		menu();
//		printf("请选择 —>");
//		scanf("%d", &input);
//		/*printf("请输入两个整数\n");
//		scanf("%d %d", &x, &y);*/
//		switch (input) {
//		case 1:
//			Calc(Add);
//			//printf("%d\n", Add(x, y));
//			//break;
//		case 2:
//			Calc(Sub);
//			/*printf("%d\n", Sub(x, y));
//			break;*/
//		case 3:
//			Calc(Mul);
//			/*printf("%d\n", Mul(x, y));
//			break;*/
//		case 4:
//			Calc(Div);
//			/*printf("%d\n", Div(x, y));
//			break;*/
//		case 0:
//			printf("退出\n");
//			break;
//		default:
//			printf("选择错误 \n");
//		}
//	} while (input);
//	return 0;
//}


//方便进行函数的添加删除
//通过下标寻找元素，然后进行函数的操作   ----转移表

//int main() {
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int (*parr[])(int, int) = { 0,&Add,&Sub,&Mul,&Div };
//	do {
//		menu();
//		printf("请选择 —>");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 4) {
//			printf("请输入两个整数\n");
//			scanf("%d %d", &x, &y);
//			int ret = parr[input](x, y);
//			printf("%d\n", ret);
//		}
//		else if (input == 0) {
//			printf("退出\n");
//		}
//		else
//			printf("选择错误\n");
//	} while (input);
//	return 0;
//}




//指向函数指针数组的指针

//int main() {
//	int arr[10] = { 0 };
//	int(*p)[10] = &arr;
//
//	int (*pfArr[4])(int, int);   //函数指针数组
//	//每个数组类型是int （*）(int, int)
//	int (*(*ppfArr)[4])(int,int) = &pfArr;
//	 //数组指针 指向一个有四个元素 ，每个元素的类型是 int（*）（int，int）
//	return 0;
//} 

//int add(int x, int y) {
//	return x + y;
//}
// 
//int main() {
//	//指针数组
//	int* arr[10];
//	//数组指针
//	int* (*pa)[10] = &arr;
//	//函数指针 
//	int (*padd)(int, int) = add;
//	//int ret = padd(2, 3);
//	int ret = (*padd)(2, 3);
//	printf("%d", ret);
//
//	//函数指针的数组
//	int(*pArr[4])(int, int);    //转移表的使用，下标对应函数的使用
//
//	//指向函数指针数组的指针
//	int (*((*ppArr)[4]))(int, int) = &pArr;
//
//	return 0;
//}




//冒泡函数

//void bubble_sort(int arr[], int sz) {
//	int flag = 1;
//	for (int i = 0; i < sz -1; i++) {
//		int flag = 1;
//		for (int j = 0; j < sz - i -1; j++)
//		{
//			if (arr[j] > arr[j + 1]) {
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//				flag = 0;
//			}
//		}
//		if (flag == 1) {
//			break;
//		}
//	}
//}
//void print(int arr[], int sz) {
//	for (int  i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//int main() {
//	int arr[10] = { 1,2,3,4,5,7,6,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	print(arr, sz);
//	return 0;
//}




//qsort 库函数 -- 排序


//冒泡函数任意类型


