#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>



/*
* 1.出现崩溃 
* 2.内存泄露
* 
* str是值传递 p是GetMeory函数的形参 只能在函数内部有效 
* GetMeory 函数返回后 动态开辟的内存尚未释放 并且无法找到 内存泄露
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

//改正
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



////更改二
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
2  GetMeory 中的p 数组 是局部变量  在该函数结束时 空间已完全释放
再传给str时 里面的内容已经不再确定  返回的是栈的空间地址 非法访问 
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

////类似非法访问 


//int* dui() {
//	int* str = malloc(100);  //堆区  str指针变量会被销毁，
//	//但是如果不进行free 堆区空间依然存在 空间通过str返回给p
//	return str;
//}
//int* test() {
//	//static int a =10; 静态区空间中 生命周期延长
//	int a = 10;//栈区  不可以
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
3  动态开辟空间未释放 
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
* 4.非法访问空间
*/


//void Test(void)
//{
//	char* str = (char*)malloc(100);
//	strcpy(str, "hello");
//	free(str);  //free释放空间后，并不会将str置为NULL
//	//str 已经成了野指针
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




