#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>


////冒泡函数的实现(falg判定是否已经排序好）
//void bubble_sort(int arr[],int sz) {
//	int i = 0;
//	for ( i = 0; i < sz -1; i++){
//		int j = 0;
//		int flag = 1;//假设已经有序
//		for ( j = 0; j < sz - i - 1; j++){
//			if (arr[j] > arr[j + 1]) {
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//				flag = 0;//此时已经有数字进行了前后的比较，表示已经不是有序的数组
//			}	
//		}
//		if (flag == 1) {
//			break;
//		}
//
//	}
//}
//
//void print(int arr[],int sz) {
//	int i = 0;
//	for (i = 0; i < sz; i++) {
//		printf("%d ", arr[i]);
//	}
//}
//
//int main() {
//	int arr[] = { 01,2,3,4,6,5,7,8,9};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr,sz);
//	print(arr,sz);
//	return 0;
//}



//操作符


//不能创建临时变量，实现两个数的交换
//int main() {
//	int a = 10;
//	int b = 20;
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("a = %d, b = %d", a, b);
//	return 0;
//}



//统计一个整数在内存中二进制中1的个数

//int main() {
//	int num = 0;
//	scanf("%d", &num);
//	int count = 0;
//	while (num) {
//		if (num % 2 == 1) {
//			count++;
//			num = num / 2;
//		}
//	}
//	printf("二进制的个数为 %d\n", count);
//	return 0;
//	//但是此时只能进行正整数
//}


//int main() { 
//	int num = 0;
//	int count = 0;
//	scanf("%d" ,& num);
//	for (int i = 0; i < 32; i++){
//		if (1 == ((num >> i) & 1))
//			count++;
//	}
//	//实现的思路 num & 1 == 1;则知道为1 
//	//000000000000000000000000011
//	//000000000000000000000000001
//	//000000000000000000000000000
//	printf("二进制的个数为 %d\n", count);
//}

//int count_bit(int n) {
//	int count = 0;
//	while (n) {
//		n = n & (n - 1);
//		count++;
//	}
//	return count;
//}
//int main() {
//	int a = 0;
//	scanf("%d", &a);
//	int len = count_bit(a);
//	printf("%d", len);
//}









//指针即地址

//int main() {
//	//int a = 0x11223344;
//	//int* pa = &a;
//    //*pa = 0;
//
//	 /* 
//	 * 44 33 22 11 
//	 * 00 00 00 00
//	 */
//
//
//
//	//char* pc = &a;
//	//*pc = 0;
//
//	/*
//	* 44 33 22 11
//	* 00 33 22 11
//	* 只进行了一个字节的更改
//	*/
//	//指针类型决定了接引用操作的空间大小 int*p 访问四个字节  char*p 访问一个字节
//	return 0;
//}


////模拟实现strlen求字符串的长度
//int my_strlen(char* p) {
//	char* start = p;
//	char* end = p;
//	while (*end != '\0') {
//		end++;
//	}
//	return end - start;
//
//}
//int main() {
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("%d", len);
//	return 0;
//}

////交换两数组
//void print(int arr[],int sz) {
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//int main() {
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 6,7,8,9,10};
//
//	int sz = sizeof(arr1)/sizeof(arr1[0]);
//	for (int i = 0; i < sz; i++)
//	{
//		int temp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = temp;
//	}
//	print(arr1,sz);
//	printf("\n");
//	print(arr2, sz);
//	return 0;
//}
//  

//求二进制中不同位数的个数

//int get_diff_bit(int m, int n) {
//	int temp = m ^ n;
//	int count = 0;
//	while(temp) {
//		temp = temp & (temp - 1);
//		count++;
//	}
//	return count;
//}
//
//int main() {
//	int a = 0, b = 0;
//	scanf("%d %d", &a, &b);
//	int count = get_diff_bit(a, b);
//	printf("%d", count);
//}

////分别获取二进制中的奇数和偶数
//void print(int m) {
//	int i = 0;
//	printf("奇数位");
//	for (i = 30; i >= 0; i -= 2) {
//		printf("%d ", (m >> i) & 1);
//	}
//	printf("\n");
//	printf("偶数位");
//	for (i = 31 ; i >= 1; i -= 2) {
//		printf("%d ", (m >> i) & 1);
//	}
//	printf("\n");
//}
//
//int main() {
//	int m = 0;
//	scanf("%d", &m);
//	print(m);
//	return 0;
//}



////指针打印数组
//void print(int* str,int sz) {
//	for (size_t i = 0; i < sz; i++){
//		printf("%d ", *(str + i));
//	}
//}
//
//int main() {
//	int arr[] = { 1,2,3,4,5,6,7,8};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr,sz);
//	return 0;
//}


//
//void print(int n) {
//	if (n > 9) {
//		print(n / 10);		
//	}
//	printf("%d", n % 10);
//}
//
//
//int main() {
//	int num = 123;
//	print(num);
//	return 0;
//}







#include<string.h>
//将字符串逆序(不得使用c语言函数库）
int my_strlen(char* str) {
	int count = 0;
	while (*str != '\0') {
		str++;
		count++;
	}
	return count;
}

////循环
//void reverse_string(char arr[]) {
//	int left = 0;
//	int right = my_strlen(arr) - 1;
//	while (left < right) {
//		int temp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = temp;
//		left++;
//		right--;
//	}
//}

//递归
void reverse_string(char arr[]) {
	char temp = arr[0];
	int len = my_strlen(arr);
	arr[0] = arr[len - 1];
	arr[len - 1] = '\0';
	if (my_strlen(arr) >= 2) {
		reverse_string(arr + 1);
	}
	arr[len - 1] = temp;
 }
/*
* abcdef 转变为fedcba
* 1.先将a放在临时变量中temp中
* 2.将字符最后一个字符放在第一个字符位置
* 3.将字符结束标志放在最后一个字符结束
* 4,将temp放在原先最后一个字符中
* 注意递归的结束标志：逆序的条件是字符串的长度必须大于等于2才可以进行逆序
*/

int main() {
	char arr[] = "abcdef";
	reverse_string(arr);
	printf("%s\n", arr);
}
