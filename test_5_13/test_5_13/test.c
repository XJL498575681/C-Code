#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//int main() {
//	//int a[5] = { 1,2,3,4,5 };
//	//int* ptr = (int*)(&a + 1);
//	//printf("%d %d", *(a + 1), *(ptr - 1));   //  2 5 
//	return 0;
//}






////�ṹ��Test����20���ֽ�
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
//	printf("%p\n", (unsigned int*)p + 0x1);// 0x100000  + ���ֽ�  ----0x10004
//	return 0;
//}






//int main() {
//	int a[4] = { 1, 2, 3, 4 };
//	int* ptr1 = (int*)(&a + 1);
//	int* ptr2 = (int*)((int)a + 1);
//	printf("%x,%x", ptr1[-1], *ptr2);   //  4 20000000  ptr1 ȡa����һ������ĵ�ַ ptr[-1] = 
//	// *(ptr + (-1)) = *(ptr -1)  
//	//ptr2  01 00 00 00  02 00 00 00 03 00 00 00 04 00 00 00
//	//ǿ��ת��������(int)  �����ַ0x00 00 00 05 ǿ�ƣ�int��--- 5  + 1 = 6
//	// 6 ----0x00 00 00 06 ��1 �൱�ڼ�һ���ֽ� 
//	//��ʱ��ptr2 ��һ���ֽڱ�� 00 00 00 02 ��ַС��ȡ�� 20 00 00 00 
//	return 0; 
//}




//int main() {
//	int a[3][2] = { (0,1),(2,3),(4,5)};
//	int* p;
//	p = a[0];
//	printf("%d", p[0]);  //  1 ���ű��ʽ 1��3, 5, 0, 0, 0
//	return 0;
//}


//int main() {
//	int a[5][5];
//	int(*p)[4];
//	p = a;   // int(*) [4] ------int (*)[5]
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//	/*
//	* ���ڴ����  ����a���Ԫ��һ�� ���a[4][2]
//	* p ���ĸ�Ԫ��Ϊһ��  ���p[4][2] ��ͬ�ڴ�a�����е�λ��  
//	* ���Ϊ -4   %d��ӡ����-4    %p ��ӡ���ǵ�ֵַ
//	* -4 ��ԭ�� 10000000000000000000000000000100
//	*      ���� 11111111111111111111111111111100
//	* ֱ�Ӱ��ղ���ĵ�ַ��ӡ ----   0xFFFFFFFC
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
//	*	ptr1 &aa  ��һ������ ָ����һ��aa������ָ�ĵ�ַ ��һָ�� 10
//	*   ptr2 aa ��һ�������� ָ��ڶ������� ��һֱϵ�Ǹ� 5
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






