#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//int main() {
//	//int a[5] = { 1,2,3,4,5 };
//	//int* ptr = (int*)(&a + 1);
//	//printf("%d %d", *(a + 1), *(ptr - 1));   //  2 5 
//	return 0;
//}






////结构体Test类型20个字节
//struct Test {
//	int num;
//	char* name;
//	char ah[2];
//	short ba[4];
//} *p;
//
//int main() {
//	p = (struct Test*)0x100000;
//	printf("%p\n", p + 0x1);   //  0x100000  + 20(10) = 14(16)   ------  0x100014
//	printf("%p\n", (unsigned long)p + 0x1);   // 0x100001
//	printf("%p\n", (unsigned int*)p + 0x1);// 0x100000  + 四字节  ----0x10004
//	return 0;
//}






//int main() {
//	int a[4] = { 1, 2, 3, 4 };
//	int* ptr1 = (int*)(&a + 1);
//	int* ptr2 = (int*)((int)a + 1);
//	printf("%x,%x", ptr1[-1], *ptr2);   //  4 20000000  ptr1 取a的下一个数组的地址 ptr[-1] = 
//	// *(ptr + (-1)) = *(ptr -1)  
//	//ptr2  01 00 00 00  02 00 00 00 03 00 00 00 04 00 00 00
//	//强制转换成整数(int)  例如地址0x00 00 00 05 强制（int）--- 5  + 1 = 6
//	// 6 ----0x00 00 00 06 加1 相当于加一个字节 
//	//此时的ptr2 加一个字节变成 00 00 00 02 地址小端取出 20 00 00 00 
//	return 0; 
//}




//int main() {
//	int a[3][2] = { (0,1),(2,3),(4,5)};
//	int* p;
//	p = a[0];
//	printf("%d", p[0]);  //  1 逗号表达式 1，3, 5, 0, 0, 0
//	return 0;
//}


//int main() {
//	int a[5][5];
//	int(*p)[4];
//	p = a;   // int(*) [4] ------int (*)[5]
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//	/*
//	* 据内存解析  数组a五个元素一行 求出a[4][2]
//	* p 是四个元素为一行  求出p[4][2] 在同内存a数组中的位置  
//	* 相差为 -4   %d打印就是-4    %p 打印的是地址值
//	* -4 的原码 10000000000000000000000000000100
//	*      补码 11111111111111111111111111111100
//	* 直接按照补码的地址打印 ----   0xFFFFFFFC
//	*/
// 	return 0;
//
//}




//int main() {
//	int aa[2][5] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* ptr1 = (int*)(&aa + 1); 
//	int* ptr2 = (int*)(*(aa + 1));
//	printf("%d %d ", *(ptr1 - 1), *(ptr2 - 1));   // 10 5
//	/* 
//	*	ptr1 &aa  加一跳数组 指向下一个aa数组所指的地址 减一指向 10
//	*   ptr2 aa 加一跳数组行 指向第二行数组 减一直系那个 5
//	*/
//	return 0; 
//}




//int main() {
//	char* a[] = { "work","at", "alibaba" };
//	char** pa = a;
//	pa++;
//	printf("%s\n", *pa);  // at
//	/*  
//	*   pa    ---		 char*     work
//	*	pa++   ----  char*		at 
//	*	  char*     alibaba
//	*/
//	return 0;
//}

/*
* char***   cp  c+ 3         c    "ENTER"
*				c + 2	          "NEW"
*				c + 1			  "POINT"
*				c				  "FIRST"
* 
* 
*/
int main01() {
	char* c[] = { "ENTER","NEW","POINT","FIRST" };
	char** cp[] = { c + 3,c + 2,c + 1, c };
	char*** cpp = cp;

	printf("%s\n", **++cpp);
	printf("%s\n", *--*++cpp + 3);
	printf("%s\n", *cpp[-2] + 3);
	printf("%s\n", cpp[-1][-1] + 1);
	return 0;
}






