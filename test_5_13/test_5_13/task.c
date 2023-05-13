#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<assert.h>
#include<math.h>

////字符串的逆序
//int  my_strlen(char* str) {
//	int count = 0;
//	while (*str) {
//		str++;
//		count++;
//	}
//	return count;
//}
//
//
//void reverse(char* str) { 
//	assert(str);
//	int len = my_strlen(str);
//	char* right = str + len -1;
//	char* left = str;
//	while (left < right) {
//		char temp = *left;
//		*left = *right;
//		*right = temp;
//		left++;
//		right--;
//	}
//}
//void reverse1(char arr[]) {
//	char temp = arr[0];
//	int len = strlen(arr);
//	arr[0] = arr[len - 1];
//	arr[len - 1] = '\0';
//	if (my_strlen >= 2) {
//		reverse1(arr + 1);
//	}
//	arr[len - 1] = temp;
//}
//
//int main() {
//	char arr[100] = { 0 };
//	scanf("%s", arr);
//	//gets(arr);
//	reverse(arr);
//	//reverse1(arr);
//	printf("%s\n", arr);
//	return 0;
//}


//计算由a组成的前n项所有之和

//int main() {
//	int a = 0;
//	int n = 0;
//	scanf("%d %d", &a, &n);
//	int sum = 0;
//	int i = 0;
//	int ret = 0;
//
//	for (i = 0; i < n; i++) {
//		ret = ret * 10 + a;
//		sum += ret;
//	}
//	printf("%d", sum);
//	return 0;
//}


////在统计位数时，不可直接将要判断的数放入统计中，会改变本身的值


//水仙花数
//int main() {
//	int i = 0;
//	for (i = 0; i <= 1000000; i++) {
//		int temp = i;
//		int  n = 1;
//		int  sum = 0;
//		while (temp /= 10) {
//			n++;
//		}
//		temp = i;
//		while (temp) {
//			sum += pow(temp % 10, n);
//			temp /= 10;
//		}
//		if (sum == i) {
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}


//int main() {
//	int a = 0;
//	scanf("%d", &a);
//	int temp = a;
//	int bit = 0;
//	int sum = 0;
//	while (temp) {
//		temp /= 10;
//		bit++;
//	}
//	temp = a;
//	while (temp) {
//		sum += pow(temp % 10, bit);
//		temp /= 10;
//	}
//	if (a == sum) {
//		printf("是水仙花数\n");
//	}
//	else {
//		printf("不是水仙花数\n");
//	}
//	return 0;
//}


//打印
/*
*			  *
*			 ***
*			*****
*		   *******
*		  *********
*		 ***********
*       *************
*		 ***********
*		  *********
* 		   *******
* 			*****
* 		     ***
*			  *
*/
//int main() {
//	int line = 0;
//	scanf("%d", &line);
//	//打印上半部分
//	int i = 0;
//	for (i = 0; i < line; i++) {
//		//打印空格
//		int j = 0;
//		for (j = 0; j < line - 1 - i; j++) {
//			printf(" ");
//		}
//		//打印*
//		for (j = 0; j < 2 * i + 1; j++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	//打印下半部分
//	for (i = 0; i < line - 1; i++) {
//		int j = 0;
//		for (j = 0; j <= i; j++) {
//			printf(" ");
//		}
//		for (j = 0; j < 2 * (line - 1 -i) - 1; j++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//}


//喝汽水，一瓶汽水1元，两个空瓶可以换一瓶汽水，给20元，可以多少汽水
//int  main() {
//	int money = 0;
//	int total = 0;
//	int empty = 0;
//	scanf("%d", &money);
//	//买回来的汽水
//	total = money;
//	empty = money;
//	//兑换
//	while (empty >= 2) {
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	printf("total = %d\n",total);
//	return 0;
//}
 

//将奇数放在最左边 偶数在后面
void print(int arr[], int sz) {
	int i = 0;
	for (i = 0; i < sz; i++) {
		printf("%d", arr[i]);
	}
	printf("\n");
}
void move(int arr[],int sz){
	int left = 0;
	int right = sz - 1;
	while (left < right) {
		//左找偶数 
		while ((left < right) && arr[left] % 2 == 1) {
			left++;
		}
		//从右边找奇数
		while ((left < right) && arr[right] % 2 == 0) {
			right--;
		}
		if (left < right) {
			int temp = arr[left];
			arr[left] = arr[right];
			arr[right] = temp;
		}
	}
}


int main() {
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]); 
	move(arr,sz);
	print(arr, sz);
	return 0;
}