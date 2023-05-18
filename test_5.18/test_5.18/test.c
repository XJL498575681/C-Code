#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<errno.h>

//文件操作
/*
程序文件：源程序文件（.C)  目标文件（.obj)   可执行文件（.exe)  
数据文件 : 从程序读取、输出文件

文件类型 ： 二进制文件  文本文件


*/

//int main() {
//	//打开文件
//	//相对路径
//	// ..表示上一级路径
//	//. 表示当前路径
//	//fopen("test.txt", "r");
//
//
//	//绝对路径
//	//fopen("E:\\Code-C\\C-Code\\test_5.18\\test_5.18\\test.txt", "r");
//
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL) {
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//字符读入 读出流
//int main() {
//	//写
//	//FILE* ps = fopen("TEST.txt", "w");
//	//读
//	FILE* ps = fopen("test.txt", "r");
//	if (ps == NULL) {
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//写
//	//fputc('c', ps);
//	//读
//
//	printf("%c", fgetc(ps));
//
//
//	fclose(ps);
//	ps = NULL;
//	return 0;
//}


//键盘输入流  stdin
//屏幕输出流  stdout


//int main() {
//	int ch = fgetc(stdin);
//	fputc(ch,stdout);
//	return 0;
//}



//行读入 读出流
//int main() {
//	char buf[1024] = { 0 };
//
//
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL) {
//		return 0;
//	}
//	//读文件 每次读一行   fgets 函数自带换行
//	/*fgets(buf , 1024 ,pf);
//	printf("%s", buf);
//	fgets(buf, 1024, pf);
//	printf("%s", buf);*/
//
//	//写文件 每次写一行
//	fputs("hello", pf);   //不自带换行
//	fputs("world", pf);
//
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main() {
//	//键盘读取一行文本信息
//	char arr[1024] = { 0 };
//
//	//fgets(arr,1024,stdin);
//
//	////屏幕输出
//	//fputs(arr, stdout);
//
//	//等价于
//	gets(arr);
//	puts(arr);
//
//	return 0;
//}




//格式化输入输出流

//typedef struct S {
//	int n;
//	float f;
//	char arr[20];
//}S;
//int main() {
//
//	//写入
//	//S s = { 100,30,"vjirjv" };
//	//FILE* pf = fopen("test.txt", "w");
//	//if (pf == NULL) {
//	//	return 0;
//	//}
//	//fprintf(pf, "%d %lf %s", s.n, s.f, s.arr);
//
//	//读出
//	S s = {0 };
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL) {
//		return 0;
//	}
//	fscanf(pf, "%d %lf %s", &(s.n), &(s.f), &(s.arr));
//
//	printf( "%d %lf %s", s.n, s.f, s.arr);
//
//
//	//fscanf(stdin, "%d %lf %s", &(s.n), &(s.f), &(s.arr));
//
//	//printf( stdout,"%d %lf %s", s.n, s.f, s.arr);
//
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


/*
scanf printf 针对标准输入输出流的格式化输入输出语句
fscanf fprintf 针对所有 
sscnaf   从字符串读取格式化的数据
sprintf   把格式化数据 输出 （存储） 字符串
*/




//typedef struct S {
//	int n;
//	float f;
//	char arr[20];
//}S;
//int main() {
//	S s = { 100,30,"vjirjv" };
//	S temp = { 0 };
//
//	char buf[1024] = { 0 };
//	sprintf(buf, "%d %lf %s", s.n, s.f, s.arr);
//
//	//把格式化的数据转换成字符串存储到buf
//	//printf(" %s", buf);
//
//
//	//从buf中读取格式化的数据到temp 
//	sscanf(buf, "%d %lf %s", &(temp.n), &(temp.f), &(temp.arr));
//	printf(stdout, "%d %lf %s", s.n, s.f, s.arr);
//	return 0;
//}






////二进制读写
//typedef struct S {
//	char name[20];
//	int age;
//	double score;
//}S;
//int main() {
//
//	S s = { "cfev",10,45 };
//	S temp = { 0 };
//	FILE * pf = fopen("test.txt", "wb");
//	if (pf == NULL) {
//		return 0;
//	}
//	////以二进制写文件
//	//fwrite(&s, sizeof(S), 1, pf);
//
//	fread(&temp, sizeof(S), 1, pf);
//	printf("%s %d %lf", temp.age, temp.age, temp.score);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}







//随机读取   fseek   
/*
* SEEK_CUR  文件指针当前位置   END 末尾位置  SET 起始位置
*/

//int main() {
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL) {
//		return 0;
//
//	}
//	//1.定位文件指针
//	//fseek(pf, -2, SEEK_END);
//	//2. 读取文件
//	//int ch = fgetc(pf);
//	//printf("%c", ch);
//
//
//	//ftell 返回文件指针相对于起始位置的偏移量
//	//int pos = ftell(pf);
//	//printf("%d\n", pos);   // 
//
//
//
//
//	//rewind 文件指针返回起始位置
//	int ch = fgetc(pf);
//	printf("%c\n", ch);
//
//
//
//	rewind(pf);
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//
//
//
//	fclose(pf);
//	pf = NULL;
//	return 0; 
//}





//文件结束判定
// 在文件读取过程中 不能用feof函数返回值直接用来判断文件是否结束
// 判断文件读取结束时   是读取失败 还是 遇到文件结尾
//EOF  end - of - file  文件结束标志

//int main() {
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL) {
//		return 0;
//	}
//	int ch = fgetc(pf);
//	printf("%d\n", ch);   // -1
//
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}





int main() {
	FILE* pf = fopen("test.txt", "r");
	if (pf == NULL) {
		perror("open test.txt file");
		return 0;
	}
	//读文件
	int ch = 0;
	while ((ch = fgetc(pf)) != EOF) {
		putchar(ch);
	}
	if (ferror(pf)) {
		printf("error");
	}
	else if (feof(pf)) {
		printf("end of file");
	}

	fclose(pf);
	pf = NULL;
	return 0;
}




