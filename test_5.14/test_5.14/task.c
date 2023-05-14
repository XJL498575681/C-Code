#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<stdlib.h>



//旋转字符串

////暴力求解法
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



////三步旋转法
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
//	reverse(arr,arr+ k -1);//左边
//	reverse(arr + k,arr + strlen(arr) - 1);//右边
//	reverse(arr,arr+ strlen(arr) - 1);//整体
//}
//
////int main() {
////	char arr[] = "abcdef";
////	left_move(arr,10);//考虑旋转次数必须小于字符串长度
////	printf("%s", arr);
////	return 0;
////}
//
//
// 
// //判断一个字符串是否可以由另一个字符串旋转得到  方法一
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

// //判断一个字符串是否可以由另一个字符串旋转得到   方法二

//int is_left_move(char* str1, char* str2) {
//	//在str1字符串后追加一个str1空间
//	//strcat(str1, str1);不能自己追加自己
//	int len1 = strlen(str1);
//	int len2 = strlen(str2);
//	if (len1 != len2) {
//		return 0;
//	}
//	strncat(str1, str1, len1);
//	//判断str2 的字符串是否是str1 的子串
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



//杨氏矩阵
/*
* 有一个数字矩阵，矩阵的每行从左到右是递增的，矩阵从上至下的递增的
 编写程序在矩阵查找是否有此数字
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
//		printf("找到了\n");
//	}
//	else {
//		printf("么有\n");
//	}
//}





//返回型参数

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
		printf("找到了\n");
		printf("坐标是%d %d \n", x, y);
	}
	else {
		printf("么有\n");
	}
}
