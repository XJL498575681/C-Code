#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<assert.h>
#include<math.h>

////�ַ���������
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


//������a��ɵ�ǰn������֮��

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


////��ͳ��λ��ʱ������ֱ�ӽ�Ҫ�жϵ�������ͳ���У���ı䱾���ֵ


//ˮ�ɻ���
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
//		printf("��ˮ�ɻ���\n");
//	}
//	else {
//		printf("����ˮ�ɻ���\n");
//	}
//	return 0;
//}


//��ӡ
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
//	//��ӡ�ϰ벿��
//	int i = 0;
//	for (i = 0; i < line; i++) {
//		//��ӡ�ո�
//		int j = 0;
//		for (j = 0; j < line - 1 - i; j++) {
//			printf(" ");
//		}
//		//��ӡ*
//		for (j = 0; j < 2 * i + 1; j++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	//��ӡ�°벿��
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


//����ˮ��һƿ��ˮ1Ԫ��������ƿ���Ի�һƿ��ˮ����20Ԫ�����Զ�����ˮ
//int  main() {
//	int money = 0;
//	int total = 0;
//	int empty = 0;
//	scanf("%d", &money);
//	//���������ˮ
//	total = money;
//	empty = money;
//	//�һ�
//	while (empty >= 2) {
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	printf("total = %d\n",total);
//	return 0;
//}
 

//��������������� ż���ں���
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
		//����ż�� 
		while ((left < right) && arr[left] % 2 == 1) {
			left++;
		}
		//���ұ�������
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