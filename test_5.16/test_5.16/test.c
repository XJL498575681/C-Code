#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<string.h>
#include<errno.h>

////字符函数和字符串函数
/*
* strlen 求字符串长度函数  库函数中返回类型是 size_t === unsigned int  
* strcpy 字符串拷贝函数   源目的必须包括\0 并且拷贝时要将\0带过去 目标空间也必须足够大
* 目标空间必须可变（char *arr  = "acrgag"  指向的是常量字符串 空间不可改） 
* strncpy  指定字节数拷贝 不带\0   当要拷贝的字节数大于要拷贝的字符串时，自动补\0
* strcat 字符串连接函数 不可以进行自连接 比如"bit\0" 连接"bit\0" 此时自己追加自己  \0被覆盖了
* 无结束的\0
* strcat 
* strcmp  字符串比较函数     第一个字符串大于第二个字符串 返回大于0 
*（按照单个字符ASCII比较）		 第一个字符串等于第二个字符串 返回==0 
*							 第一个字符串小于第二个字符串 返回小于0 
* strstr   字符串查找函数     不能用原指针进行查询操作，会更改其值 ， 需要进行指针的回溯  
另外创建临时指针进行查询操作，  当有字符相同时，然而下一个字符不相同时，
母串我要回到当前相同的下一个字符，重新一一比对
重新比对查找时子串要回归到第一个字符



* 
*/



////strlen 函数
////计数器
//int my_strlen(char* str) {
//	assert(str);
//	int count = 0;
//	while (*str) {
//		count++;
//		str++;
//	}
//	return count;
//}

////指针差
//int my_strlen1(char* str) {
//	char* start = str;
//	char* end = str;
//	while (*end) {
//		end++;
//	}
//	return end - start;
//}

////递归
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
//	//因为
//	if (strlen("abc") - strlen("acxce") > 0) {
//		printf("hehe\n");
//	}
//	else {
//		printf("haha\n");
//	}
//	//printf("%d", len);
//	return 0;
//}





////strcpy函数
//char * my_strcpy(char* dest, const char* src) {
//
//	assert(dest);
//	assert(src);
//	//拷贝src指向的字符串到dest所指的空间，包含'\0'
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
//	//返回目的地空间的起始空间
//	return ret;
//}
//
//int main() {
//	char arr1[] = "acdegggh";
//	//char* app = "cnduvbu";   错误示范
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









//strcat  字符追加函数

//char* my_strcat(char* dest, const char* src) {
//	char* ret = dest;
//	assert(dest);
//	assert(src);
//	//1.找到目的地字符串的\0
//	while (*dest != '\0'); {
//		dest++;
//	}
//	//2.追加
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





////strncat  指定字节数 字符追加
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








////strcmp函数
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

   


////strncmp函数  
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







/////strstr查找字符串    
/*
* 不能用原指针进行查询操作，会更改其值 ， 需要进行指针的回溯  
另外创建临时指针进行查询操作
*/
//char* my_strstr(const char* str1, const char* str2) {
//	assert(str1 && str2);
// 
// //写法一
//	char* s1 = str1;
//	char* s2 = str2;
//	char* cur = (char *)str1;  // 当前指针所指所在的位置
//	if (*str2 == '\0') {
//		return str1;
//	}
//	while (*cur) {
//		s1 = cur; //当有字符相同时，然而下一个字符不相同时，
//		//我要回到当前相同的下一个字符，重新一一比对
//		s2 = str2;  //重新比对查找时子串要回归到第一个字符
//		while ((*s1 != '\0') && (*s2 != '\0') && (*s1 == *s2)) {
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0') {
//			return cur;//找到子串
//		}
//		cur++;  //进行下一次的比对
//	}
//
//
//
// // 写法二
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
//	return NULL;// 没有子串
//}
//
//
//int main() {
//	char* p1 = "abbbcedf";
//	char* p2 = "bbc";
//	char* ret = my_strstr(p1, p2);
//	if (ret == NULL) {
//		printf("没有\n");
//	}
//	else {
//		printf("%s", ret);
//	}
//	return 0;
//}







//strtok分割函数

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


	//打开文件
	FILE* pf = fopen("test.txt", "r");
	if (pf == NULL) {
		printf("%s\n", strerror(errno));
	}
	else {
		printf("oped file success\n");
	}
	return 0;
}