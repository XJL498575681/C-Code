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
//	//void* ���͵�ָ����Խ�������
//	//void* ���͵�ָ�� ���ܽ��н����ò���   Ҳ���ܽ��мӼ������Ĳ���
//	return 0;
//}
//


//ð�ݺ������ȫ�����͵�ʹ��
//qsort �⺯�� ����


// qsort()  
//��һ������ :�������������Ԫ�ص�ַ
//�ڶ������� �������Ԫ�ظ���
//������������ ����Ԫ�ش�С   --- �ֽ�
//���ĸ�����  ����ָ�� ----�Ƚ����������ĵ�ַ ��������  �Լ�ʵ�� ����ָ����Ƚϵ�����Ԫ�ص�ַ

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

//��һ������ ��Ϊ���������� ������void* 
//�ڶ������� ��С
//���������� �ֽڴ�С ��Ϊ��Ԫ�ص�ַ����Ϊvoid �޷�����ָ����ƶ� ȷ�����ֽڴ�С��
//���ɽ���Ԫ�ص��ƶ� 
//���ĸ����� ��ΪҪ��������Ԫ�صıȽ�  �ڲ�ȷ���������͵�����¿�����int ,struct 
//���Ե��ĸ�������ָ�����Ҫ�Ƚϵĵ�ַ��������ȽϷ��� �� �Լ���д��Ӧ�ĺ����Ƚ�

void bubble_sort(void* base, int sz, int width, int (*cmp)(void* e1, void* e2)) {
	int i = 0;
	for (i = 0; i < sz - 1; i++) {
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++) {
//��ʼ���������Ƚϣ���base��ַ���е�һ����Ԫ�صıȽϣ���ΪΪvoid,�޷����к�Ԫ�صıȽ�
//���Խ�base����ǿ������ת��char* �����ֽڿ��Խ��мӼ� 
			//����Ԫ�صıȽ�
			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0) {
				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
			}
		}
	}
}



//void* ���Խ����������͵ĵ�ַ
int cmp_int(const void* e1, const void* e2) {
	 //�Ƚ���������ֵ
	return (int )(*(int*)e1 - *(int*)e2);
}

int cmp_float(const void* e1, const void* e2) {
	//�Ƚ�����floatֵ
	return *(float*)e1 - *(float*)e2;
}

//�ṹ������Ƚ�
cmp_stu_age(const void * e1, const void* e2) {
	return	((struct stu*)e1)->age - ((struct stu*)e2)->age;
}

//�ṹ�����ֱȽ� �ַ����ıȽ��ú��� strcmp 
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
 




