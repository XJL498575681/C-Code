#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

////ʵ���ַ���������
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


//����һ������ÿλ֮�ͣ�дһ���Ǹ����ĸ�����֮�͵ĵݹ麯����

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

////�ݹ�ʵ��n��k�η�,ע�⸺������� 
////n*n*n*n(k����   =  n*n^(k-1)���ݹ�����ΪK= 0ʱ
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
//	printf("������n �� k ��ֵ\n");
//	scanf("%d %d", &n, &k);
//	double ret = pow(n, k);
//	printf("%lf", ret);
//	return 0;
//}







/*
���Լ���
����  ����    �ڴ�   

*/
/*
* ջ���еĵ�ַ  ����ʹ�øߵ�ַ�Ŀռ�    ��ʹ�õص�ַ�Ŀռ�
* �����±��������ַ�ɵ͵��ߵı仯
* 
* i �ľֲ���������������Ŀռ�֮ǰ
* �ֲ�����i��ջ����ַ����������ʮ��Ԫ���϶���������ĵ�ַ��
* ����ѭ��i��ֵ i = 12 , ��forѭ�� ǿ�Ƹĳ���0 
  ��ʱi�ĵ�ַ��arr[12]�ĵ�ַ�� һ����  ����γ�����ѭ��
* 
* ���Խ���������ѭ��
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

//�ַ����Ŀ���

//void my_strcopy(char* dest, char* str) {
//	while (*str != '\0') {
//		*dest = *str;
//		dest++;
//		str++;
//	}
//	*dest = *str;
//}

//#include<assert.h>
////���Ե����� ָ���������ڵ�λ��
////const������ 
//void my_strcopy(char* dest, const  char* str) {
//	assert(dest != NULL);//����
//	assert(str != NULL);//����
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
//���const
int main() {
	const int num = 10;
	int n = 100;
	//const����ָ�����* �����ʱ��
	//���ε��� *p ,������ͨ��p���ı�*p(num)��ֵ
 //   const int* p = &num;

	//p = &n;
	//*p = 0;//������ʵ��



	//const����ָ�����* ���ұ�
	//���ε���ָ�����p ����p�����ٱ��ı�
	//int* const p = &num;
	//p = &n;   //������ʵ��
	//*p = 0;
	printf("%d", num);

}
*/




//�ṹ��
//struct stu {
//	char name[20];
//	short age;
//	char tele[11];
//	char sex[5];
//}s1, s2, s3;//��������ȫ�ֵĽṹ�����;

//typedef struct stu {
//	char name[20];
//	int age;
//	char tele[11];
//	char sex[5];
//}Stu;//�˴���stuΪ����;
///*
//* 
//ջ��    �ֲ���������������ʽ������ �����Եĵ���     main 
//����     ��̬�ڴ���� malloc 
//��̬��   ȫ�ֱ�������̬����
//
//*/
//
////���ݽṹ�����ʱ����Ҫѹջ ������ṹ��������ܽ���
//void print1(stu tmp) {
//	printf("name:%s\n", tmp.name);
//	printf("sge:%d\n", tmp.age);
//	printf("tele:%s\n", tmp.tele);
//	printf("sex:%s\n", tmp.sex);
//}
///*
//*  �ṹ������ַ��ʷ�ʽ
//* 1.�ṹ�����.��Ա����
//* 2.�ṹ��ָ��->��Ա����
//*/
////���ݹ�ȥ�Ľṹ��ֻ��һ��ָ���С��
//void print2(stu* tmp) {
//	printf("name:%s\n", tmp->name);
//	printf("sge:%d\n", tmp->age);
//	printf("tele:%s\n", tmp->tele);
//	printf("sex:%s\n", tmp->sex);
//}
//int main() { 
//	struct stu s1 = { "lisan",20,"1842362671","��"};//�ֲ���������ʶ�� ����
//	Stu s2 = {"zhangsan",18,"44353033","Ů"};//�൱�ڸ�struct stu �������������һ������Ϊstu
//	print1(s1);
//	print2(&s2);//���ݵ��ǵ�ַ
//	return 0;
//}

 












