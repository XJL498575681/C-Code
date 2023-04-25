#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//取两个数的最大公约数
//void  GCD(int m,int n) {
//	int temp = 0;
//	while (m % n )
//	{
//		temp = m % n;
//		m = n;
//		n = temp;
//	}
//    printf("最大公约数%d", temp);
//	return 0;	
//}
//int main(){
//	int a, b;
//	scanf("%d %d", &a, &b);
//	GCD(a,b);	
//}




//判断范围内是不是闰年（1.能被4整除且不能被100整除 2.能被400整除）并计算闰年的个数

//int main(){
//	int year, count = 0;
//	for (year = 1000; year <= 2000; year++){
//		if ((year % 4 == 0 && year % 100 != 0)|| (year % 400 == 0) ){
//			printf("%d\n", year);			
//		}
//		count++;
//	}
//	printf("闰年的个数为%d",count);
//}


//判断一个数是不是素数
//int main(){
//	int  i = 0,count = 0;
//	for (i = 100; i <= 200; i++) {
//		int j = 0;
//		for (j = 2; j < i; j++) {
//			if (i % j == 0) {
//				break;
//			}
//		}
//		if (i == j) {
//			count++;
//			printf("%d  ", i);
//		}
//	}
//	printf("\n");
//	printf("素数的个数是%d\n",count);
//}


////改进
//#include <math.h>
//int main() {
//	int  i = 0, count = 0;
//	for (i = 100; i <= 200; i++) {
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++) {
//			if (i % j == 0) {
//				break;
//			}
//		}
//		if (j > sqrt(i)) {
//			count++;
//			printf("%d  ", i);
//		}
//	}
//	printf("\n");
//	printf("素数的个数是%d\n", count);
//}
////还可以改进，偶数不可能为素数，可从101开始












//分数求和

//int main() {
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++) {
//		sum += flag * (1.0 / i);
//		flag = - flag;
//	}
//	printf("%lf", sum);
//	return 0;
//}









//求10个整数的最大值

//int main() {
//	int arr[10] = { 1,2,-2,4,5,6,7,8,9,10 };
//	int max = arr[0];
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++) {
//		if (max < arr[i]) {
//			max = arr[i];
//		}
//	}
//	printf("%d", max);
//	return 0;
//}







////乘法口诀
//int main() {
//	int i = 0;
//	for (i = 1; i <= 9; i++) {
//		for (int  j = 1; j <= i; j++)
//		{
//			printf("%d * %d = %d\t", j, i, i * j);
//		}
//		printf("\n");
//	}
//}






//二分查找(有序)
//int main() {
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	int mid = 0;
//	int temp = 0;
//	scanf("%d", &temp);
//	while (left <= right ) {
//		mid = (left + right) / 2;
//		if (temp < arr[mid]) {
//			right = mid - 1;
//		}
//		else if (temp > arr[mid]) {
//			left = mid + 1;
//		}
//		else {
//			printf("找到了该元素,下标是%d", mid);
//		    break;
//		}
//			
//	} 
//	if (left > right) {
//		printf("没有该元素");
//	}
//	return 0;
//}
//函数实现
//int binary_search(int arr[],int sz,int k) {
//	    int left = 0;
//		int right = sz - 1;
//		int mid = 0;
//		while (left <= right ) {
//			mid = (left + right) / 2;
//			if (k < arr[mid]) {
//				right = mid - 1;
//			}
//			else if (k > arr[mid]) {
//				left = mid + 1;
//			}
//			else {
//				return mid;
//			    break;
//			}
//				
//		} 
//		if (left > right) {
//			return -1;
//		}
//}
//
//int main() {
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7, sz = 0;
//	sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr,sz,k);
//	if (ret == -1) {
//		printf("没有找到该元素\n");
//	}
//	else {
//		printf("找到了，下标是%d", ret);
//	}
//	return 0;
//}










//#include<time.h>
////猜数字游戏( )
//void game() {
//
//	int guess = 0;
//	//1. 生成随机数   
//	int ret = 0;
//	ret = rand()%100+1;//模上100范围在0-99之间
////	printf("%d\n",ret);
////	printf("猜数字游戏\n");
//
//
//	//2.猜数字
//	while (1) {
//		printf("请猜数字\n");
//		scanf("%d", &guess);
//		if (guess > ret) {
//			printf("猜大了\n");
//		} 
//		else if(guess < ret) {
//			printf("猜小了\n");
//		}
//		else {
//			printf("猜对了\n");
//			break;
//		}
//	}
//
//}
//
//void menu() {
//	printf("************************\n");
//	printf("****1.play   0.exit*****\n");
//	printf("************************\n");
//}
//int main() {
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	//拿时间戳来设置随机数的生成起始点
//	do {
//		menu();
//		printf("请选择 1 / 0继续\n");
//		scanf("%d", &input);
//		switch (input) {
//			case 1:
//				game();
//				break;
//			case 0:
//				printf("退出游戏\n");
//				break;
//			default:
//				printf("输入的数据有误，重新输入\n");
//				break;
//		}
//	}while(input);
//	return 0;
//}






////递归实现输出每一位数字
//void print(int temp) {
//	if (temp > 9) {
//		print(temp / 10);
//	}
//	printf("%d ", temp % 10);
//}
//
////按顺序打印整数的每一位数字
//int  main() {
//	unsigned int num = 0;
//	scanf("%d", &num);
//	print(num);
//	return 0;
// }







//编写函数，不允许创建临时变量，求字符串的长度
//
//int my_strlen(char* str  ) {
//	int count = 0;
//	while (*str != '\0') {
//		count++;
//		str++;
//
//		
//	}
//	return count ;
//}
//
////递归的方法
//int my_strlen(char* str) {
//	if (*str != '\0') {
//		return 1 + my_strlen(str +1);
//	}
//	else
//		return 0;
//}
//
//int main(){
//	char arr[] = "nuist";
//	int len = my_strlen(arr);
//	printf("长度是%d", len);
//
//	return 0;
//}


////求阶乘（递归）
//int jie(int num) {
//	if (num <= 1) {
//		return 1;
//	}
//	else
//		return num * jie(num - 1);
//}
//
//
//int main() {
//	int k=0;
//	scanf("%d", &k);
//	int temp = jie(k);
//	printf("%d", temp);
//}






