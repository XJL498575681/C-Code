#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include< string.h>
#include<errno.h>
#include<windows.h>


//��̬�ڴ����

/*
* malloc �� free    void * malloc(size_t size)
* ���ٳɹ�������һ��ָ�����ռ��ָ�� 
* ����ʧ�ܣ�����һ��NULL�����malloc �ķ���ֵһ��Ҫ�����
* ����ֵ��������void *  ����ʹ�����Լ�����
* 
* int *p = realloc(NULL,40)    ===  int* p = malloc(40)
* 
*/
//int main() {
//	 //���ڴ�����10 �����οռ�
//	int* p = (int*)malloc(40);
//	if (p == NULL) {
//		//��ӡ����ԭ���һ����ʽ
//		printf("%s\n", strerror(errno));
//	}
//	else {
//		//��ȷʹ�ÿռ�
//		int i = 0;
//		for (i = 0; i < 10; i++) {
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++) {
//			printf("%d ",*(p + i));
//		}
//	}
//	// ��̬����Ŀռ䲻��ʹ�ã���������ϵͳ
//	free(p);
//	p = NULL;
//	return 0;
//}






//calloc  ���� void *calloc(size_t num, size_t size)
//colloc ��ʼ������Ϊ0  malloc�����г�ʼ�� ��Ч�ʸ���

//int main() {
//	//
//	int * p = (int*)calloc(10, sizeof(int));
//	if (p == NULL) {
//		printf("%s\n", strerror(errno));
//	}
//	else {
//		int i = 0;
//		for (i = 0; i < 10; i++) {
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++) {
//			printf("%d  ", *(p + i));
//		}
//	}
//	free(p);
//	p = NULL;
//
//	return 0;
//}





//realloc ������̬�ڴ濪�ٵĴ�С 
/*
* ע������   
*1.���pָ��Ŀռ�֮�����㹻�Ŀռ����׷�ӣ���ֱ��׷�ӣ�����p
* ���û��realloc ���������¿���һ���ڴ�ռ䣬����ԭ���ڴ�����ݿ�������
* �ͷ�ԭ���Ŀռ�   ����һ���µ�ָ�����realloc �����ķ��ص�ַ	
*/ 
//int main() {
//	int* p = (int*)malloc(20);
//	if (p == NULL) {
//		printf("%s", strerror(errno));
//	}
//	else {
//		int i = 0;
//		for (i = 0; i < 5; i++) {
//			*(p + i) = i;
//		}
//	}
//
//	//���迪�ٵ��ڴ治�� ��Ҫ�ӵ�40�ֽ� 
//	int* p2 = realloc(p, 40);
//
//	if (p2 != NULL) {
//		p = p2;
//		int i = 0;
//		for (i = 0; i < 10; i++) {
//			*(p2 + i) = i;
//		}
//
//		for (i = 0; i < 10; i++) {
//			printf("%d ", *(p2 + i));
//		}
//	}
//
//	free(p);
//	p = NULL;
//	return 0;
//}






//�����ڴ濪�ٴ���
/*
* 1.��NULLָ������ò���
* 2.�Զ�̬���ٵ��ڴ�Խ�����
* 3.�ԷǶ�̬�����ڴ�ʹ��free����
* 4.ʹ��free�ͷŶ�̬���ٿռ��һ����
* 5.��ͬһ�鶯̬�ڴ�Ķ���ͷ�
*/
//int main01() {
//	//1.malloc ���ٿռ�ʧ�� ��NULLָ������ò���
//	//int* p = (int*)malloc(10 * sizeof(int));
//	////�����ж�
//	//if (p == NULL) {
//	//	printf("%s", strerror(errno));
//	//}
//	//// * p = 0;
//	////δ��malloc����ֵ���к�����ж� ���ܷ���ʧ��
//	////p = NULL;�����������Խ���
//	//int i = 0;
//	//for (i = 0; i < 10; i++) {
//	//	*(p + i) = i;
//	//}
//
//	// 2.�Զ�̬���ٵ��ڴ�Խ�����
//
//	//int* p = (int*)malloc(5 * sizeof(int));
//	//if (p == NULL) {
//	//	return 0;
//	//}
//	//else {
//	//	int i = 0;
//	//	for (i = 0; i < 10; i++) {
//	//		*(p + i) = i;
//	//	}
//	//}
//
//
//
//	//3.�ԷǶ�̬�����ڴ�ʹ��free����
//	//int a = 10;
//	//int* p = &a;
//	//*p = 20;
//	//free(p);
//	//p = NULL;
//
//
//	////4.ʹ��free�ͷŶ�̬���ٿռ��һ����
//	//int* p = (int*)malloc(40);
//	//if (p == NULL) {
//	//	return 0;
//	//}
//	////��ʱ��pָ���Ѿ������˱仯��Ҫ��freeԭ�����ٵĿռ�
//	////p ���뻹�ǵ�ָ��ԭ�ȿ��ٿռ����ʼ��ַ ��ʼ�ͷ�
//	//int i = 0;
//	//for (i = 0; i < 10; i++) {
//	//	*p++ = i;
//
//	//}
//	//free(p);
//	//p = NULL;
//
//
//
//
//
//	//5.��ͬһ�鶯̬�ڴ�Ķ���ͷ�
//	//int* p = (int*)malloc(40);
//	//if (p == NULL) {
//	//	return 0;
//	//}
//	//free(p);
//	// p == NULL  ���Ա��� 
//	//p = NULL;
//	//free(p);
//
//
//
//	//6.�Զ�̬�ڴ�ռ�Ĳ��ͷ�(�ڴ�й¶��
//	/*while (1) {
//		malloc(1);
//	}*/
//
//	return 0;
//}




/*��������
* 1.�ṹ�е����������Աǰ���������һ��������Ա��
  2.sizeof ���ص����ֽṹ��С����������������ڴ档
  3.�������������Ա�Ľṹ��malloc ()���������ڴ�Ķ�̬���䣬
  ���ҷ�����ڴ�Ӧ�ô��ڽṹ�Ĵ�С������Ӧ���������Ԥ�ڴ�С��
* 
*/


//struct S {
//	int n;
//	int arr[0]; //��������
// //int arr[];
// //};
//int main() {
//	printf("%d\n", sizeof(struct S));  // 4
//	return 0;
//}



////��������   �ռ�����   
//struct S {
//	int n;
//	int arr[]; //��������
//};
//
//int main() {
//	//									n�Ĵ�С 4           ��������ռ� 40
//	struct S *ps = (struct S *) malloc(sizeof(struct S) + 10* sizeof(int));
//	int i = 0;
//	ps->n = 100;
//	for (i = 0; i < 10; i++) {
//		ps->arr[i] = i;
//	}
//	for (i = 0; i < 10; i++) { 
//		printf("%d ", ps->arr[i]);
//	}
//	printf("\n");
//
//	struct S * ptr = realloc(ps,sizeof(struct S) + 15 * sizeof(int));
//	if (ptr != NULL) {
//		ps = ptr;
//	}
//	for (i = 0; i < 15; i++) {
//		ps->arr[i] = i;
//	}
//	for (i = 0; i < 15; i++) {
//		printf("%d ", ps->arr[i]);
//	}
//	free(ps);
//	ps = NULL;
//	return 0;
//}




//����������ʵ��   �ڴ���Ƭ  free �ͷ������Լ��Ⱥ��ͷ�����
 
 
struct S {
	int n;
	int* arr;
};

int main() {
	struct S* ps = (struct S*)malloc(sizeof(struct S));

	ps->n = 100;
	ps->arr = malloc(5 * sizeof(int));
	int i = 0;
	for (i = 0; i < 5; i++) {
		ps->arr[i] = i;
	}
	for (i = 0; i < 5; i++) {
		printf("%d", ps->arr[i]);
	}
	printf("\n");
	//������С
	int* ptr = realloc(ps->arr, 10 * sizeof(int));
	if (ptr != NULL) {
		ps->arr = ptr;
	}
	for (i = 5; i < 10; i++) {
		ps->arr[i] = i;
	}
	for (i = 0; i < 10; i++) {
		printf("%d", ps->arr[i]);
	}
	free(ps->arr);
	ps->arr == NULL;
	free(ps);
	ps = NULL;
	return 0;
}




//�ֲ���ԭ��		80%�Ŀ����Դ��ܱ߷���

