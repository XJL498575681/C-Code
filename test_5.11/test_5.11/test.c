#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

//void print(char* str) {
//	printf("%s\n", str);
//}
//int main() {
//	int a;
//	int* pa;
//	void (*p)(char*) = print;
//	(*p)("hello unist");
//  p("hello unist");
//	return 0;
//}


//���� (*(void (*)())0)();
// ����ָ������void (*)()  ��void (*)())0  ��0 ǿ��ת��Ϊvoid (*)() ����
//  0 ����һ��������ַ  *(void (*)()) ������ �ҵ����� 
// 
//



//����ָ������
//int add(int x, int y) {
//	return x + y;
//}
//int Sub(int x, int y) {
//	return x - y;
//}
//int Mul(int x, int y) {
//	return x * y;
//}
//int Div(int x, int y) {
//	return x / y;
//}
//
//int main() {
//	//ָ������
//	//int* arr[5];
//	//int(*pa)(int, int) = &add;
//	//printf("%d\n",(*pa)(2, 3));
//	//��������ָ��
//	int (*parr[4])(int, int) = {add,Sub,Mul,Div};//����ָ�������
//	int i = 0;
//	for (i = 0; i < 4; i++) {
//		printf("%d\n", parr[i](2,3)); 
//	}
//}


//char* my_strcpy(char* dest, const char* src);
////дһ��ָ��ָ����my_strcpy
//char* (*pf)(char*, const char*);
////дһ������ָ�����飬����ĸ�my_strcpy�����ĵ�ַ
//char* (*prArr[4])(char*, const char*);




//void print(char* str) {
//	printf("%s", str);
//}
//void test(void (*p)(char*)) {
//	printf("test\n");
//	p("nuist");  //����һ��ʵ��
//}
//int main() {
//	test(print);
//	print("xixi\n");// ֱ��ʵ��
//	return 0;
//}






////������
//int Add(int x, int y) {
//	return x + y;
//}
//int Sub(int x, int y) {
//	return x - y;
//}
//int Mul(int x, int y) {
//	return x * y;
//}
//int Div(int x, int y) {
//	return x / y;
//}
//
//void menu(){
//	printf("*********************\n" );
//	printf("***1.add   2.Sub   ***\n");
//	printf("***3.mul   4.div   ***\n");
//	printf("*****0. exit    ******\n");
//	printf("*********************\n");
//}
////�ص�����
////ͨ������ָ����ú���
////��������ַ��Ϊһ���������ݸ�����һ������������ָ�������ָ�������ĺ���
//void Calc(int (*pf)(int, int)) {
//	int x = 0;
//	int y = 0;
//	printf("��������������\n");
//	scanf("%d %d", &x, &y);
//	printf("%d\n", pf(x, y));
//}
//int main() {
//	int input = 0;
//	//int x = 0;
//	//int y = 0;
//	do {
//		menu();
//		printf("��ѡ�� ��>");
//		scanf("%d", &input);
//		/*printf("��������������\n");
//		scanf("%d %d", &x, &y);*/
//		switch (input) {
//		case 1:
//			Calc(Add);
//			//printf("%d\n", Add(x, y));
//			//break;
//		case 2:
//			Calc(Sub);
//			/*printf("%d\n", Sub(x, y));
//			break;*/
//		case 3:
//			Calc(Mul);
//			/*printf("%d\n", Mul(x, y));
//			break;*/
//		case 4:
//			Calc(Div);
//			/*printf("%d\n", Div(x, y));
//			break;*/
//		case 0:
//			printf("�˳�\n");
//			break;
//		default:
//			printf("ѡ����� \n");
//		}
//	} while (input);
//	return 0;
//}


//������к��������ɾ��
//ͨ���±�Ѱ��Ԫ�أ�Ȼ����к����Ĳ���   ----ת�Ʊ�

//int main() {
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int (*parr[])(int, int) = { 0,&Add,&Sub,&Mul,&Div };
//	do {
//		menu();
//		printf("��ѡ�� ��>");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 4) {
//			printf("��������������\n");
//			scanf("%d %d", &x, &y);
//			int ret = parr[input](x, y);
//			printf("%d\n", ret);
//		}
//		else if (input == 0) {
//			printf("�˳�\n");
//		}
//		else
//			printf("ѡ�����\n");
//	} while (input);
//	return 0;
//}




//ָ����ָ�������ָ��

//int main() {
//	int arr[10] = { 0 };
//	int(*p)[10] = &arr;
//
//	int (*pfArr[4])(int, int);   //����ָ������
//	//ÿ������������int ��*��(int, int)
//	int (*(*ppfArr)[4])(int,int) = &pfArr;
//	 //����ָ�� ָ��һ�����ĸ�Ԫ�� ��ÿ��Ԫ�ص������� int��*����int��int��
//	return 0;
//} 

//int add(int x, int y) {
//	return x + y;
//}
// 
//int main() {
//	//ָ������
//	int* arr[10];
//	//����ָ��
//	int* (*pa)[10] = &arr;
//	//����ָ�� 
//	int (*padd)(int, int) = add;
//	//int ret = padd(2, 3);
//	int ret = (*padd)(2, 3);
//	printf("%d", ret);
//
//	//����ָ�������
//	int(*pArr[4])(int, int);    //ת�Ʊ��ʹ�ã��±��Ӧ������ʹ��
//
//	//ָ����ָ�������ָ��
//	int (*((*ppArr)[4]))(int, int) = &pArr;
//
//	return 0;
//}




//ð�ݺ���

//void bubble_sort(int arr[], int sz) {
//	int flag = 1;
//	for (int i = 0; i < sz -1; i++) {
//		int flag = 1;
//		for (int j = 0; j < sz - i -1; j++)
//		{
//			if (arr[j] > arr[j + 1]) {
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//				flag = 0;
//			}
//		}
//		if (flag == 1) {
//			break;
//		}
//	}
//}
//void print(int arr[], int sz) {
//	for (int  i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//int main() {
//	int arr[10] = { 1,2,3,4,5,7,6,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	print(arr, sz);
//	return 0;
//}




//qsort �⺯�� -- ����


//ð�ݺ�����������


