#define _CRT_SECURE_NO_WARNINGS 1

//c�������ݵĴ洢
#include<stdio.h>

//���ģʽ���ݵĵ�λ�������ڴ�ĸߵ�ַ�У����ݵĸ�λ�������ڴ�ĵ͵�ַ��
//С��ģʽ���ݵĵ�λ�������ڴ�ĵ͵�ַ�У����ݵĸ�λ�������ڴ�ĸ�λ��
//int main() {
//	int a = 20;
//	int b = -10;
//
//	int y = 0x11223344;
//	return 0;
//
//}




//����жϴ�С�˺���
//int check_key() {
//	int a = 1;
//	char* p = (char*)&a;
//	if (*p == 1) {
//		return 1;
//	}
//	return 0;
//}
//
//
//int main() {
//	int ret = check_key();
//	if (ret == 1) {
//		printf("С��\n");
//	}
//	else
//		printf("���\n");
//	return 0;
// }


//�ж��������

//int main() {
//	char a = -1;
//	// ԭ��1000000000000000000000000000000000000001
//	//����
//	//���� 1111111111111111111111111111111111111111
//
//	//char ȡ��λ��8λ 11111111
//	//���Ҫ32λ���󲹷���λ
//	//1111111111111111111111111111111111111111
//	signed char b = -1;
//
//	unsigned char c = -1;
//	//�޷���λ����0
//	//0000000000000000000000000000000011111111
//	printf("a= %d,b = %d,c = %d",a,b,c);//-1��-1,255
// 
// 
// 
// char a = -128;
// char a = 128;
// //char���͵�128 ��-128 ���죬��Ϊ�з���char��Χ-128---127
// //��ʱ��128����127+1 �ص�-128
// 10000000000000000000000010000000
// 11111111111111111111111110000000   //����
// 
// char����10000000
// ���ӡ�޷��ŵ�ʮ������
// 
// 11111111111111111111111110000000  ��ӡʱ�޷������ͣ���Ϊ��������
// printf("%u",a);
//	return 0;
//}