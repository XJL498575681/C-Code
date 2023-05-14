#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<stdlib.h>



//��ת�ַ���

////������ⷨ
//void left_move(char* str, int k) {
//	assert(str != NULL);
//	int i = 0;
//	int len = strlen(str);
//	for (i = 0; i < k; i++) {
//		char temp = *str ;
//		int j = 0;
//		for (j = 0; j < len - 1; j++) {
//			*(str + j) = *(str + j + 1);
//		}
//		*(str + len - 1) = temp;
//	}
//}
//
//int main() {
//	char arr[] = "abcdef";
//	left_move(arr, 2);
//	printf("%s", arr);
//	return 0;
//}



////������ת��
//void reverse(char* str1,char* str2) {
//	assert(str1);
//	assert(str2);
//	while (str1 < str2) {
//		char temp = *str1;
//		*str1 = *str2; 
//		*str2 = temp;
//		str1++;
//		str2--;
//	}
//}
//
//void left_move(char* arr, int k) {
//	int len = strlen(arr);
//	assert(k <= len);
//	assert(arr);
//	reverse(arr,arr+ k -1);//���
//	reverse(arr + k,arr + strlen(arr) - 1);//�ұ�
//	reverse(arr,arr+ strlen(arr) - 1);//����
//}
//
////int main() {
////	char arr[] = "abcdef";
////	left_move(arr,10);//������ת��������С���ַ�������
////	printf("%s", arr);
////	return 0;
////}
//
//
// 
// //�ж�һ���ַ����Ƿ��������һ���ַ�����ת�õ�  ����һ
//int check(char* arr1, char* arr2) {
//	assert(arr1);
//	assert(arr2);
//	int len = strlen(arr1);
//	int i = 0;
//	for (i = 0; i < len; i++) {
//		left_move(arr1,1);
//		if (strcmp(arr1, arr2) == 0) {
//			return 1;
//		}
//	}
//	return 0;
//}
//
//
//int main() {
//	char arr1[] = "AABCD";
//	char arr2[] = "BCDAA";
//	int ret = check(arr1, arr2);
//	if (ret == 1) {
//		printf("YES\n");
//	}
//	else {
//		printf("NO\n");
//	}
//	return 0;
//}

// //�ж�һ���ַ����Ƿ��������һ���ַ�����ת�õ�   ������

//int is_left_move(char* str1, char* str2) {
//	//��str1�ַ�����׷��һ��str1�ռ�
//	//strcat(str1, str1);�����Լ�׷���Լ�
//	int len1 = strlen(str1);
//	int len2 = strlen(str2);
//	if (len1 != len2) {
//		return 0;
//	}
//	strncat(str1, str1, len1);
//	//�ж�str2 ���ַ����Ƿ���str1 ���Ӵ�
//	char * ret = strstr(str1, str2);
//	if (ret == NULL) {
//		return 0;
//	}
//	else {
//		return 1;
//	}
//}
//
//int main() {
//	char arr1[] = "abcdef";
//	char arr2[] = "cdef";
//	int ret = is_left_move(arr1, arr2);
//	if (ret == 1) {
//		printf("YES\n");
//	}
//	else {
//		printf("NO\n");
//	}
//	return 0;
//}



//���Ͼ���
/*
* ��һ�����־��󣬾����ÿ�д������ǵ����ģ�����������µĵ�����
 ��д�����ھ�������Ƿ��д�����
  1 2 3
  4 5 6
  7 8 9
*/
//int FindNum(int arr[][3], int k, int row, int col) {
//	int x = 0;
//	int y = col - 1;
//
//	while (x <= row - 1 && y >= 0) {
//		if (arr[x][y] < k) {
//			x++;
//		}
//		if (arr[x][y] > k) {
//			y--;
//		}
//		else {
//			return 1;
//		}
//	}
//}
//
//
//
//int main() {
//	int arr[3][3] = { {1,2,3,},{4,5,6},{7,8,9} };
//	int k = 7;
//	int ret = FindNum(arr, k, 3, 3);
//	if (ret == 1) {
//		printf("�ҵ���\n");
//	}
//	else {
//		printf("ô��\n");
//	}
//}





//�����Ͳ���

int FindNum(int arr[3][3], int k, int *px, int *py) {
	int x = 0;
	int y = *py - 1;

	while (x <= *px - 1 && y >= 0) {
		if (arr[x][y] < k) {
			x++;
		}
		else if (arr[x][y] > k) {
			y--;
		}
		else {
			*px = x;
			*py = y;
			return 1;
		}
	}
	return 0;
}



int main() {
	int arr[3][3] = { {1,2,3,},{4,5,6},{7,8,9} };
	int k = 7;
	int x = 3;
	int y = 3;
	int ret = FindNum(arr, k, &x, &y);
	if (ret == 1) {
		printf("�ҵ���\n");
		printf("������%d %d \n", x, y);
	}
	else {
		printf("ô��\n");
	}
}
