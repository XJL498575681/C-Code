#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<string.h>
#include<errno.h>

////�ַ��������ַ�������
/*
* strlen ���ַ������Ⱥ���  �⺯���з��������� size_t === unsigned int  
* strcpy �ַ�����������   ԴĿ�ı������\0 ���ҿ���ʱҪ��\0����ȥ Ŀ��ռ�Ҳ�����㹻��
* Ŀ��ռ����ɱ䣨char *arr  = "acrgag"  ָ����ǳ����ַ��� �ռ䲻�ɸģ� 
* strncpy  ָ���ֽ������� ����\0   ��Ҫ�������ֽ�������Ҫ�������ַ���ʱ���Զ���\0
* strcat �ַ������Ӻ��� �����Խ��������� ����"bit\0" ����"bit\0" ��ʱ�Լ�׷���Լ�  \0��������
* �޽�����\0
* strcat 
* strcmp  �ַ����ȽϺ���     ��һ���ַ������ڵڶ����ַ��� ���ش���0 
*�����յ����ַ�ASCII�Ƚϣ�		 ��һ���ַ������ڵڶ����ַ��� ����==0 
*							 ��һ���ַ���С�ڵڶ����ַ��� ����С��0 
* strstr   �ַ������Һ���     ������ԭָ����в�ѯ�������������ֵ �� ��Ҫ����ָ��Ļ���  
���ⴴ����ʱָ����в�ѯ������  �����ַ���ͬʱ��Ȼ����һ���ַ�����ͬʱ��
ĸ����Ҫ�ص���ǰ��ͬ����һ���ַ�������һһ�ȶ�
���±ȶԲ���ʱ�Ӵ�Ҫ�ع鵽��һ���ַ�



* 
*/



////strlen ����
////������
//int my_strlen(char* str) {
//	assert(str);
//	int count = 0;
//	while (*str) {
//		count++;
//		str++;
//	}
//	return count;
//}

////ָ���
//int my_strlen1(char* str) {
//	char* start = str;
//	char* end = str;
//	while (*end) {
//		end++;
//	}
//	return end - start;
//}

////�ݹ�
//int my_strlen2(char* str) {
//	if (*str) {
//		return 1 + my_strlen2(str + 1);
//	}
//	else {
//		return 0;
//	}
//}

//int main() {
//	int len = strlen("abcdef");
//	//��Ϊ
//	if (strlen("abc") - strlen("acxce") > 0) {
//		printf("hehe\n");
//	}
//	else {
//		printf("haha\n");
//	}
//	//printf("%d", len);
//	return 0;
//}





////strcpy����
//char * my_strcpy(char* dest, const char* src) {
//
//	assert(dest);
//	assert(src);
//	//����srcָ����ַ�����dest��ָ�Ŀռ䣬����'\0'
//	char* ret = dest;
//	//while (*src) {
//	//	*dest = *src;
//	//	dest++;
//	//	src++;
//	//}
//	//*dest = *src;
//
//	while (*dest++ = *src++) {
//		;
//	}
//	//����Ŀ�ĵؿռ����ʼ�ռ�
//	return ret;
//}
//
//int main() {
//	char arr1[] = "acdegggh";
//	//char* app = "cnduvbu";   ����ʾ��
//	char arr2[] = "abcd";
//	strcpy(arr1, arr2);
//	printf("%s", arr1);
//	return 0;
//}



////////strncpy
//char* my_strncpy(char* str1, const char* str2,int count) {
//	char* ret = str1;
//	//while (count && *str2) {
//	//	*str1 = *str2;
//	//	str1++;
//	//	str2++;
//	//	count--;
//	//}
//	//if (count) {
//	//	while (count) {
//	//		*str1 = '\0';
//	//		count--;
//	//	}
//	//}
//	while (count && (*str1++ = *str2++)) {
//		count--;
//	}
//	if (count) {
//		while (--count) {
//			*str1++ = '\0';
//		}
//	}
//	return str1;
//}
//
//
//int main() {
//	char arr1[10] = "abcdefvr";
//	char arr2[] = "bit";
//	my_strncpy(arr1, arr2, 2);
//	printf("%s", arr1);
//	return 0;
//}









//strcat  �ַ�׷�Ӻ���

//char* my_strcat(char* dest, const char* src) {
//	char* ret = dest;
//	assert(dest);
//	assert(src);
//	//1.�ҵ�Ŀ�ĵ��ַ�����\0
//	while (*dest != '\0'); {
//		dest++;
//	}
//	//2.׷��
//	while (*dest++ = *src++) {
//		;
//	}
//	return ret;
//}
//int main() {
//	char arr1[30] = "hello";
//	char arr2[] = "world";
//	strcat(arr1, arr1);
//	printf("%s", arr1);
//	return 0;
//}





////strncat  ָ���ֽ��� �ַ�׷��
//char* my_strncat(char* dest, const char* src, int count) {
//	assert(dest && src);
//	char* ret = dest;
//	while ((*dest != '\0')) {
//		dest++;
//	}
//	//dest--;
//	while (count--) {
//		if (!(*dest++ = *src++)) {
//			return ret;
//		}
//	}
//	*dest = '\0';
//	return dest;
//}
//
//
//
//int main() {
//	char arr1[30] = "hello";
//	char arr2[] = "world";
//	my_strncat(arr1, arr2, 3);
//	printf("%s", arr1);
//	return 0;
//}








////strcmp����
//int my_strcmp(const char* str1,const char* str2) {
//	assert(str1);
//	assert(str2);
//	while (*str1 == *str2) {
//		if (*str1 == '\0') {
//			return 0;
//		}
//		str1++;
//		str2++;
//	}
//	return *str1 - *str2;
////	if (*str1 > *str2) {
////		return 1;
////	}
////	else {
////		return -1;
////	}
//}
//
//int main() {
//	char* p1 = "abc";
//	char* p2 = "abcd";
//	 
//	int ret = my_strcmp(p1, p2);
//	printf("%d\n", ret);
//	return 0;
//}

   


////strncmp����  
//int my_strncmp(const char* str1, const char* str2, int count) {
//	while (count && *str1 == *str2) {
//		if (*str1 == '\0') {
//			return 0;
//		}
//		str1++;
//		str2++;
//		count--;
//	}
//	return *str1 - *str2;
//}
//
//
//int main() {
//	char arr1[] = "abcdef";
//	char arr2[] = "abcwwer";
//	int ret = my_strncmp(arr1, arr2, 3);
//	printf("%d", ret);
//	return 0;
//}







/////strstr�����ַ���    
/*
* ������ԭָ����в�ѯ�������������ֵ �� ��Ҫ����ָ��Ļ���  
���ⴴ����ʱָ����в�ѯ����
*/
//char* my_strstr(const char* str1, const char* str2) {
//	assert(str1 && str2);
// 
// //д��һ
//	char* s1 = str1;
//	char* s2 = str2;
//	char* cur = (char *)str1;  // ��ǰָ����ָ���ڵ�λ��
//	if (*str2 == '\0') {
//		return str1;
//	}
//	while (*cur) {
//		s1 = cur; //�����ַ���ͬʱ��Ȼ����һ���ַ�����ͬʱ��
//		//��Ҫ�ص���ǰ��ͬ����һ���ַ�������һһ�ȶ�
//		s2 = str2;  //���±ȶԲ���ʱ�Ӵ�Ҫ�ع鵽��һ���ַ�
//		while ((*s1 != '\0') && (*s2 != '\0') && (*s1 == *s2)) {
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0') {
//			return cur;//�ҵ��Ӵ�
//		}
//		cur++;  //������һ�εıȶ�
//	}
//
//
//
// // д����
//	//char *cp = (char*)str1;
//	//char *s1, *s2;
//	//
//	//if (!*str2) {
//	//	return ((char*)str1);
//	//}
//	//while (*cp) {
//	//	s1 = cp;
//	//	s2 = str2;
//	//	while (*s1 && *s2 && (*s1 - *s2)) {
//	//		s1++;
//	//		s2++;
//	//	}
//	//	if (!*s2) {
//	//		return cp;
//	//	}
//	//	cp++;
//	//}
// 
// 
// 
// 
//	return NULL;// û���Ӵ�
//}
//
//
//int main() {
//	char* p1 = "abbbcedf";
//	char* p2 = "bbc";
//	char* ret = my_strstr(p1, p2);
//	if (ret == NULL) {
//		printf("û��\n");
//	}
//	else {
//		printf("%s", ret);
//	}
//	return 0;
//}







//strtok�ָ��

//int main() {
//	char arr[] = "chdyhg@hucdj.ydhy";
//	char* p = "@.";
//
//	char buf[1024] = { 0 };
//	strcpy(buf, p);
//
//	char* ret = NULL;
//	for (ret = strtok(arr, p); ret != NULL; ret = strtok(NULL, p)) {
//		printf("%s\n", ret);
//	}
//	//char* ret = strtok(arr, p);
//	//printf("%s\n", ret);
//
//	//ret = strtok(NULL, p);
//	//printf("%s\n", ret);
//
//	//ret = strtok(NULL, p);
//	//printf("%s\n", ret);
//	return 0;
//}





//strerror
int main01() {

	//char* str = strerror(errno);	
	//printf("%s\n", str);


	//���ļ�
	FILE* pf = fopen("test.txt", "r");
	if (pf == NULL) {
		printf("%s\n", strerror(errno));
	}
	else {
		printf("oped file success\n");
	}
	return 0;
}