#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>


////ð�ݺ�����ʵ��(falg�ж��Ƿ��Ѿ�����ã�
//void bubble_sort(int arr[],int sz) {
//	int i = 0;
//	for ( i = 0; i < sz -1; i++){
//		int j = 0;
//		int flag = 1;//�����Ѿ�����
//		for ( j = 0; j < sz - i - 1; j++){
//			if (arr[j] > arr[j + 1]) {
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//				flag = 0;//��ʱ�Ѿ������ֽ�����ǰ��ıȽϣ���ʾ�Ѿ��������������
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



//������


//���ܴ�����ʱ������ʵ���������Ľ���
//int main() {
//	int a = 10;
//	int b = 20;
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("a = %d, b = %d", a, b);
//	return 0;
//}



//ͳ��һ���������ڴ��ж�������1�ĸ���

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
//	printf("�����Ƶĸ���Ϊ %d\n", count);
//	return 0;
//	//���Ǵ�ʱֻ�ܽ���������
//}


//int main() { 
//	int num = 0;
//	int count = 0;
//	scanf("%d" ,& num);
//	for (int i = 0; i < 32; i++){
//		if (1 == ((num >> i) & 1))
//			count++;
//	}
//	//ʵ�ֵ�˼· num & 1 == 1;��֪��Ϊ1 
//	//000000000000000000000000011
//	//000000000000000000000000001
//	//000000000000000000000000000
//	printf("�����Ƶĸ���Ϊ %d\n", count);
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









//ָ�뼴��ַ

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
//	* ֻ������һ���ֽڵĸ���
//	*/
//	//ָ�����;����˽����ò����Ŀռ��С int*p �����ĸ��ֽ�  char*p ����һ���ֽ�
//	return 0;
//}


////ģ��ʵ��strlen���ַ����ĳ���
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

////����������
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

//��������в�ͬλ���ĸ���

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

////�ֱ��ȡ�������е�������ż��
//void print(int m) {
//	int i = 0;
//	printf("����λ");
//	for (i = 30; i >= 0; i -= 2) {
//		printf("%d ", (m >> i) & 1);
//	}
//	printf("\n");
//	printf("ż��λ");
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



////ָ���ӡ����
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
//���ַ�������(����ʹ��c���Ժ����⣩
int my_strlen(char* str) {
	int count = 0;
	while (*str != '\0') {
		str++;
		count++;
	}
	return count;
}

////ѭ��
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

//�ݹ�
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
* abcdef ת��Ϊfedcba
* 1.�Ƚ�a������ʱ������temp��
* 2.���ַ����һ���ַ����ڵ�һ���ַ�λ��
* 3.���ַ�������־�������һ���ַ�����
* 4,��temp����ԭ�����һ���ַ���
* ע��ݹ�Ľ�����־��������������ַ����ĳ��ȱ�����ڵ���2�ſ��Խ�������
*/

int main() {
	char arr[] = "abcdef";
	reverse_string(arr);
	printf("%s\n", arr);
}
