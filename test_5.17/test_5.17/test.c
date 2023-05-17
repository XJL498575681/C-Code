#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include< string.h>
#include<errno.h>
#include<windows.h>


//动态内存管理

/*
* malloc 和 free    void * malloc(size_t size)
* 开辟成功，返回一个指向这块空间的指针 
* 开辟失败，返回一个NULL，因此malloc 的返回值一定要做检查
* 返回值的类型是void *  具体使用由自己决定
* 
* int *p = realloc(NULL,40)    ===  int* p = malloc(40)
* 
*/
//int main() {
//	 //向内存申请10 个整形空间
//	int* p = (int*)malloc(40);
//	if (p == NULL) {
//		//打印错误原因的一个方式
//		printf("%s\n", strerror(errno));
//	}
//	else {
//		//正确使用空间
//		int i = 0;
//		for (i = 0; i < 10; i++) {
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++) {
//			printf("%d ",*(p + i));
//		}
//	}
//	// 动态申请的空间不再使用，还给操作系统
//	free(p);
//	p = NULL;
//	return 0;
//}






//calloc  函数 void *calloc(size_t num, size_t size)
//colloc 初始化参数为0  malloc不进行初始化 ，效率更高

//int main() {
//	//
//	int * p = (int*)calloc(10, sizeof(int));
//	if (p == NULL) {
//		printf("%s\n", strerror(errno));
//	}
//	else {
//		int i = 0;
//		for (i = 0; i < 10; i++) {
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++) {
//			printf("%d  ", *(p + i));
//		}
//	}
//	free(p);
//	p = NULL;
//
//	return 0;
//}





//realloc 调整动态内存开辟的大小 
/*
* 注意事项   
*1.如果p指向的空间之后有足够的空间可以追加，则直接追加，返回p
* 如果没有realloc 函数会重新开辟一个内存空间，并将原来内存的数据拷贝过来
* 释放原来的空间   得用一个新的指针接收realloc 函数的返回地址	
*/ 
//int main() {
//	int* p = (int*)malloc(20);
//	if (p == NULL) {
//		printf("%s", strerror(errno));
//	}
//	else {
//		int i = 0;
//		for (i = 0; i < 5; i++) {
//			*(p + i) = i;
//		}
//	}
//
//	//假设开辟的内存不够 需要加到40字节 
//	int* p2 = realloc(p, 40);
//
//	if (p2 != NULL) {
//		p = p2;
//		int i = 0;
//		for (i = 0; i < 10; i++) {
//			*(p2 + i) = i;
//		}
//
//		for (i = 0; i < 10; i++) {
//			printf("%d ", *(p2 + i));
//		}
//	}
//
//	free(p);
//	p = NULL;
//	return 0;
//}






//常见内存开辟错误
/*
* 1.对NULL指针解引用操作
* 2.对动态开辟的内存越界访问
* 3.对非动态开辟内存使用free函数
* 4.使用free释放动态开辟空间的一部分
* 5.对同一块动态内存的多次释放
*/
//int main01() {
//	//1.malloc 开辟空间失败 对NULL指针解引用操作
//	//int* p = (int*)malloc(10 * sizeof(int));
//	////必须判断
//	//if (p == NULL) {
//	//	printf("%s", strerror(errno));
//	//}
//	//// * p = 0;
//	////未对malloc返回值进行合理的判断 可能返回失败
//	////p = NULL;函数照样可以进行
//	//int i = 0;
//	//for (i = 0; i < 10; i++) {
//	//	*(p + i) = i;
//	//}
//
//	// 2.对动态开辟的内存越界访问
//
//	//int* p = (int*)malloc(5 * sizeof(int));
//	//if (p == NULL) {
//	//	return 0;
//	//}
//	//else {
//	//	int i = 0;
//	//	for (i = 0; i < 10; i++) {
//	//		*(p + i) = i;
//	//	}
//	//}
//
//
//
//	//3.对非动态开辟内存使用free函数
//	//int a = 10;
//	//int* p = &a;
//	//*p = 20;
//	//free(p);
//	//p = NULL;
//
//
//	////4.使用free释放动态开辟空间的一部分
//	//int* p = (int*)malloc(40);
//	//if (p == NULL) {
//	//	return 0;
//	//}
//	////此时的p指针已经发生了变化，要想free原来开辟的空间
//	////p 必须还是得指向原先开辟空间的起始地址 开始释放
//	//int i = 0;
//	//for (i = 0; i < 10; i++) {
//	//	*p++ = i;
//
//	//}
//	//free(p);
//	//p = NULL;
//
//
//
//
//
//	//5.对同一块动态内存的多次释放
//	//int* p = (int*)malloc(40);
//	//if (p == NULL) {
//	//	return 0;
//	//}
//	//free(p);
//	// p == NULL  可以避免 
//	//p = NULL;
//	//free(p);
//
//
//
//	//6.对动态内存空间的不释放(内存泄露）
//	/*while (1) {
//		malloc(1);
//	}*/
//
//	return 0;
//}




/*柔性数组
* 1.结构中的柔性数组成员前面必须至少一个其他成员。
  2.sizeof 返回的这种结构大小不包括柔性数组的内存。
  3.包含柔性数组成员的结构用malloc ()函数进行内存的动态分配，
  并且分配的内存应该大于结构的大小，以适应柔性数组的预期大小。
* 
*/


//struct S {
//	int n;
//	int arr[0]; //柔性数组
// //int arr[];
// //};
//int main() {
//	printf("%d\n", sizeof(struct S));  // 4
//	return 0;
//}



////柔性数组   空间连续   
//struct S {
//	int n;
//	int arr[]; //柔性数组
//};
//
//int main() {
//	//									n的大小 4           柔性数组空间 40
//	struct S *ps = (struct S *) malloc(sizeof(struct S) + 10* sizeof(int));
//	int i = 0;
//	ps->n = 100;
//	for (i = 0; i < 10; i++) {
//		ps->arr[i] = i;
//	}
//	for (i = 0; i < 10; i++) { 
//		printf("%d ", ps->arr[i]);
//	}
//	printf("\n");
//
//	struct S * ptr = realloc(ps,sizeof(struct S) + 15 * sizeof(int));
//	if (ptr != NULL) {
//		ps = ptr;
//	}
//	for (i = 0; i < 15; i++) {
//		ps->arr[i] = i;
//	}
//	for (i = 0; i < 15; i++) {
//		printf("%d ", ps->arr[i]);
//	}
//	free(ps);
//	ps = NULL;
//	return 0;
//}




//非柔性数组实现   内存碎片  free 释放两次以及先后释放问题
 
 
struct S {
	int n;
	int* arr;
};

int main() {
	struct S* ps = (struct S*)malloc(sizeof(struct S));

	ps->n = 100;
	ps->arr = malloc(5 * sizeof(int));
	int i = 0;
	for (i = 0; i < 5; i++) {
		ps->arr[i] = i;
	}
	for (i = 0; i < 5; i++) {
		printf("%d", ps->arr[i]);
	}
	printf("\n");
	//调整大小
	int* ptr = realloc(ps->arr, 10 * sizeof(int));
	if (ptr != NULL) {
		ps->arr = ptr;
	}
	for (i = 5; i < 10; i++) {
		ps->arr[i] = i;
	}
	for (i = 0; i < 10; i++) {
		printf("%d", ps->arr[i]);
	}
	free(ps->arr);
	ps->arr == NULL;
	free(ps);
	ps = NULL;
	return 0;
}




//局部性原理		80%的可能性从周边访问

