#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<assert.h>



#include<ctype.h>


////�ַ�����
//int main() {
//
//
//	//char ch = tolower('Q');//תСд
//	char ch = toupper('q');//ת��д
//	putchar(ch);
//
//	printf("\n");
//
//	char arr[] = "I AM A Student";
//	int i = 0;
//	while (arr[i]) {
//		if (isupper(arr[i])) {
//			arr[i] = tolower(arr[i]);
//		}
//		i++;
//	}
//	printf("%s\n", arr);
//	return 0;
//}






//�ڴ溯��
/*
memcpy  ֻҪ���� ���ص����ڴ濽���Ϳ��� 
memmove   �����ص��ڴ�Ŀ��� 
*/



////memcpy  �ڴ濽��
//struct S {
//	char name[20];
//	int age;
//};
//
//void *my_memcpy(void* dest, const void* src, size_t num) {
//	void* ret = dest;
//	assert(dest && src);
//	while (num--) {
//		*(char*)dest = *(char*)src;
//		++(char*)dest;
//		++(char*)src;
//	}
//	return ret;
//}



//int main() {
//	int arr1[] = { 1, 2, 3, 4,5 };
//	int arr2[5] = { 0 };
//	struct S arr3[] = { {"����",20},{"����",19} };
//	struct S arr4[3] = { 0 };
//	memcpy(arr2, arr1, sizeof(arr1));
//	my_memcpy(arr4, arr3, sizeof(arr3));
//
//
//	return 0;
//}





 


//memmove   �����ص��ڴ�Ŀ���
//void* my_memmove(char* dest, char* src, size_t count) {
//	assert(dest && src);
//	void* ret = dest;
// 
// //����һ
	////������ ǰ->��
	//if (dest < src) {
	//	while (count--) {
	//		*(char*)dest = *(char*)src;
	//		++(char*)dest;
	//		++(char*)src;
	//	}
	//}
	//// �� ��> ǰ
	//else {
	//	while (count--) {
	//		*((char*)dest + count) = *((char*)src + count);
	//	}
	//}

////������
//	if (dest < src || dest > ((char*)src + count)) {
//		while (count--) {
//			*(char*)dest = *(char*)src;
//			++(char*)dest;
//			++(char*)src;
//		}
//	}
//	else {
//		while (count--) {
//			*((char*)dest + count) = *((char*)src + count);
//		}
//	}
//	return ret;
//}
//
//
//
//int main() {
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	my_memmove(arr , arr + 2, 20);
//	for (int i = 0; i < 10; i++) {
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}






////memcmp  �����ֽڱȽϴ�С
//int main() {
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 1,2,5,4,3 };
//	int ret = memcmp(arr1, arr2, 9);  
//	printf("%d\n", ret);
//	return 0;
//}






//memset

int main() {
	char arr[10] = "";
	memset(arr, '#', 10);

	//40���ֽ�
	//     10�ֽ�         10�ֽ�
	//01 01 01 01 01   01 01 01 01 01   00 00 00 00 
	int arr1[] = { 0 };
	memset(arr1, 1, 10);
	return 0;
} 