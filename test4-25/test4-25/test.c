#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//ȡ�����������Լ��
//void  GCD(int m,int n) {
//	int temp = 0;
//	while (m % n )
//	{
//		temp = m % n;
//		m = n;
//		n = temp;
//	}
//    printf("���Լ��%d", temp);
//	return 0;	
//}
//int main(){
//	int a, b;
//	scanf("%d %d", &a, &b);
//	GCD(a,b);	
//}




//�жϷ�Χ���ǲ������꣨1.�ܱ�4�����Ҳ��ܱ�100���� 2.�ܱ�400����������������ĸ���

//int main(){
//	int year, count = 0;
//	for (year = 1000; year <= 2000; year++){
//		if ((year % 4 == 0 && year % 100 != 0)|| (year % 400 == 0) ){
//			printf("%d\n", year);			
//		}
//		count++;
//	}
//	printf("����ĸ���Ϊ%d",count);
//}


//�ж�һ�����ǲ�������
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
//	printf("�����ĸ�����%d\n",count);
//}


////�Ľ�
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
//	printf("�����ĸ�����%d\n", count);
//}
////�����ԸĽ���ż��������Ϊ�������ɴ�101��ʼ












//�������

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









//��10�����������ֵ

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







////�˷��ھ�
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






//���ֲ���(����)
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
//			printf("�ҵ��˸�Ԫ��,�±���%d", mid);
//		    break;
//		}
//			
//	} 
//	if (left > right) {
//		printf("û�и�Ԫ��");
//	}
//	return 0;
//}
//����ʵ��
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
//		printf("û���ҵ���Ԫ��\n");
//	}
//	else {
//		printf("�ҵ��ˣ��±���%d", ret);
//	}
//	return 0;
//}










//#include<time.h>
////��������Ϸ( )
//void game() {
//
//	int guess = 0;
//	//1. ���������   
//	int ret = 0;
//	ret = rand()%100+1;//ģ��100��Χ��0-99֮��
////	printf("%d\n",ret);
////	printf("��������Ϸ\n");
//
//
//	//2.������
//	while (1) {
//		printf("�������\n");
//		scanf("%d", &guess);
//		if (guess > ret) {
//			printf("�´���\n");
//		} 
//		else if(guess < ret) {
//			printf("��С��\n");
//		}
//		else {
//			printf("�¶���\n");
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
//	//��ʱ����������������������ʼ��
//	do {
//		menu();
//		printf("��ѡ�� 1 / 0����\n");
//		scanf("%d", &input);
//		switch (input) {
//			case 1:
//				game();
//				break;
//			case 0:
//				printf("�˳���Ϸ\n");
//				break;
//			default:
//				printf("���������������������\n");
//				break;
//		}
//	}while(input);
//	return 0;
//}






////�ݹ�ʵ�����ÿһλ����
//void print(int temp) {
//	if (temp > 9) {
//		print(temp / 10);
//	}
//	printf("%d ", temp % 10);
//}
//
////��˳���ӡ������ÿһλ����
//int  main() {
//	unsigned int num = 0;
//	scanf("%d", &num);
//	print(num);
//	return 0;
// }







//��д����������������ʱ���������ַ����ĳ���
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
////�ݹ�ķ���
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
//	printf("������%d", len);
//
//	return 0;
//}


////��׳ˣ��ݹ飩
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






