#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

////实现字符串的逆序
//int  my_strlen(char* str) {
//	int count = 0;
//	while (*str != '\0') {
//		str++;
//		count++;
//	}
//	return count;
//}
//void converse_string(char arr[]) {
//	char temp = arr[0];
//	int len = my_strlen(arr);
//	arr[0] = arr[len - 1];
//	arr[len - 1] = '\0';
//	if (my_strlen(arr) >= 2) {
//		converse_string(arr + 1);
//	}
//	arr[len - 1] = temp; 
//}
//
//int main() {
//	char arr[] = "abcdef";
//	converse_string(arr);
//	printf("%s", arr);
//	return 0;
//}


//计算一个数的每位之和（写一个非负数的各数字之和的递归函数）

//int  reDigitSum(unsigned int num) {
//	if (num > 9) {
//		return reDigitSum(num / 10) + num % 10;
//	}
//	else {
//		return num;
//	}
//}
//int main() {
//	unsigned int num = 0;
//	scanf("%d", &num);
//	int sum = reDigitSum(num);
//	printf("%d", sum);
//	return 0;
//}

////递归实现n的k次方,注意负数的情况 
////n*n*n*n(k个）   =  n*n^(k-1)，递归条件为K= 0时
//double pow(int n, int k) {
//	if (k < 0) {
//		return 1.0 / (pow(n,-k));
//	}
//	else if (k == 0) {
//		return 1;
//	}
//	else {
//		return n * pow(n, k - 1);
//	}
//}
//int main() {
//	int n = 0 ,k = 0;
//	printf("请输入n 和 k 的值\n");
//	scanf("%d %d", &n, &k);
//	double ret = pow(n, k);
//	printf("%lf", ret);
//	return 0;
//}







/*
调试技巧
调试  窗口    内存   

*/
/*
* 栈区中的地址  优先使用高地址的空间    在使用地地址的空间
* 随着下标的增长地址由低到高的变化
* 
* i 的局部变量创建在数组的空间之前
* 局部变量i的栈区地址正好在数组十个元素上多出来两个的地址，
* 按照循环i的值 i = 12 , 但for循环 强制改成了0 
  此时i的地址和arr[12]的地址是 一样的  因此形成了死循环
* 
* 调试解释以下死循环
*/
//#include<stdlib.h>
//int main() {
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,20 };
//	
//	for (  i = 0; i <= 12; i++)
//	{
//		printf("hehe\n");
//		arr[i] = 0;
//	}
//	//system("pause");
//	return 0;
//}

//字符串的拷贝

//void my_strcopy(char* dest, char* str) {
//	while (*str != '\0') {
//		*dest = *str;
//		dest++;
//		str++;
//	}
//	*dest = *str;
//}

//#include<assert.h>
////断言的作用 指出错误所在的位置
////const的作用 
//void my_strcopy(char* dest, const  char* str) {
//	assert(dest != NULL);//断言
//	assert(str != NULL);//断言
//	while (*dest ++= *str++) {
//		;
//		}
//}
//
//int main() {
//	char arr1[] = "###############";
//	char arr2[] = "nuist";
//	my_strcopy(arr1, NULL);
//	printf("%s", arr1);
//	return 0;
//
//}



/*
//详解const
int main() {
	const int num = 10;
	int n = 100;
	//const放在指针变量* 的左边时，
	//修饰的是 *p ,不能再通过p来改变*p(num)的值
 //   const int* p = &num;

	//p = &n;
	//*p = 0;//不可以实现



	//const放在指针变量* 的右边
	//修饰的是指针变量p 本身，p不能再被改变
	//int* const p = &num;
	//p = &n;   //不可以实现
	//*p = 0;
	printf("%d", num);

}
*/




//结构体
//struct stu {
//	char name[20];
//	short age;
//	char tele[11];
//	char sex[5];
//}s1, s2, s3;//这三个是全局的结构体变量;

//typedef struct stu {
//	char name[20];
//	int age;
//	char tele[11];
//	char sex[5];
//}Stu;//此处的stu为类型;
///*
//* 
//栈区    局部变量，函数的形式参数， 函数对的调用     main 
//堆区     动态内存分配 malloc 
//静态区   全局变量，静态变量
//
//*/
//
////传递结构体对象时，需要压栈 ，如果结构体过大，性能降低
//void print1(stu tmp) {
//	printf("name:%s\n", tmp.name);
//	printf("sge:%d\n", tmp.age);
//	printf("tele:%s\n", tmp.tele);
//	printf("sex:%s\n", tmp.sex);
//}
///*
//*  结构体的两种访问方式
//* 1.结构体对象.成员变量
//* 2.结构体指针->成员变量
//*/
////传递过去的结构体只是一个指针大小，
//void print2(stu* tmp) {
//	printf("name:%s\n", tmp->name);
//	printf("sge:%d\n", tmp->age);
//	printf("tele:%s\n", tmp->tele);
//	printf("sex:%s\n", tmp->sex);
//}
//int main() { 
//	struct stu s1 = { "lisan",20,"1842362671","男"};//局部变量（标识符 变量
//	Stu s2 = {"zhangsan",18,"44353033","女"};//相当于给struct stu 这个类型重命名一个别名为stu
//	print1(s1);
//	print2(&s2);//传递的是地址
//	return 0;
//}

 












