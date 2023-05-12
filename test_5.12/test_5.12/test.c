#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//int main() {
//	int a = 10;
//	//int* pa = &a;
//
//	//char ch = 'w';
//	void* p = &a;
//	//*p = 0;
//	// 
//	//void* 类型的指针可以接受任意
//	//void* 类型的指针 不能进行解引用操作   也不能进行加减整数的操作
//	return 0;
//}
//


//冒泡函数针对全部类型的使用
//qsort 库函数 排序


// qsort()  
//第一个参数 :待排序的数组首元素地址
//第二个参数 ：数组的元素个数
//第三个参数： 数组元素大小   --- 字节
//第四个参数  函数指针 ----比较两个函数的地址 （方法）  自己实现 函数指针待比较的两个元素地址

struct stu {
	char name[20];
	int age;
};


void Swap(char* buf1, char* buf2, int width) {
	int i = 0;
	for (i = 0; i < width; i++) {
		char temp = *buf1;
		*buf1 = *buf2;
		*buf2 = temp;
		buf1++;
		buf2--;
	}
}

//第一个参数 因为不定向类型 所以用void* 
//第二个参数 大小
//第三个参数 字节大小 因为首元素地址类型为void 无法进行指针的移动 确定了字节大小后
//即可进行元素的移动 
//第四个参数 因为要进行两个元素的比较  在不确定参数类型的情况下可能是int ,struct 
//所以第四个参数用指针接收要比较的地址，调用其比较方法 ， 自己编写相应的函数比较

void bubble_sort(void* base, int sz, int width, int (*cmp)(void* e1, void* e2)) {
	int i = 0;
	for (i = 0; i < sz - 1; i++) {
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++) {
//开始进行两两比较，由base地址进行第一二个元素的比较，因为为void,无法进行后元素的比较
//所以将base进行强制类型转换char* 按照字节可以进行加减 
			//两个元素的比较
			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0) {
				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
			}
		}
	}
}



//void* 可以接受任意类型的地址
int cmp_int(const void* e1, const void* e2) {
	 //比较两个整形值
	return (int )(*(int*)e1 - *(int*)e2);
}

int cmp_float(const void* e1, const void* e2) {
	//比较两个float值
	return *(float*)e1 - *(float*)e2;
}

//结构体年龄比较
cmp_stu_age(const void * e1, const void* e2) {
	return	((struct stu*)e1)->age - ((struct stu*)e2)->age;
}

//结构体名字比较 字符串的比较用函数 strcmp 
cmp_stu_name(const void* e1, const void* e2) {
	return strcmp(((struct stu*)e1)->name , ((struct stu*)e2)->name);
}
void test1() {
	int arr[10] = { 1,2,3,4,5,6,7,9,8,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp_int);
	int i = 0;
	for (i = 0; i < sz; i++) {
		printf("%d ", arr[i]);
	}
}
void test2() {
	float f[] = { 1.3, 3.5, 6.5, 4.5, 5.7 };
	int sz = sizeof(f) / sizeof(f[0]);
	qsort(f, sz, sizeof(f[0]), cmp_float);
	int i = 0;
	for (i = 0; i < sz; i++) {
		printf("%lf  ", f[i]);
	}
}
void test3() {
	struct stu s[3] = { {"zhangsan",20},{"lisi",28},{"wangwu",10} };
	int sz = sizeof(s) / sizeof(s[0]);
	qsort(s, sz, sizeof(s[0]), cmp_stu_name);
 }

void test4() {
	int arr[10] = { 1,2,3,4,5,6,7,9,8,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
	int i = 0;
	for (i = 0; i < sz; i++) {
		printf("%d ", arr[i]);
	}
}


int main0() {
	//test1();
	//printf("\n");
	//test2();
	//test3();
	test4();
	return 0;
}
 




