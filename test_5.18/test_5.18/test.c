#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<errno.h>

//�ļ�����
/*
�����ļ���Դ�����ļ���.C)  Ŀ���ļ���.obj)   ��ִ���ļ���.exe)  
�����ļ� : �ӳ����ȡ������ļ�

�ļ����� �� �������ļ�  �ı��ļ�


*/

//int main() {
//	//���ļ�
//	//���·��
//	// ..��ʾ��һ��·��
//	//. ��ʾ��ǰ·��
//	//fopen("test.txt", "r");
//
//
//	//����·��
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


//�ַ����� ������
//int main() {
//	//д
//	//FILE* ps = fopen("TEST.txt", "w");
//	//��
//	FILE* ps = fopen("test.txt", "r");
//	if (ps == NULL) {
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//д
//	//fputc('c', ps);
//	//��
//
//	printf("%c", fgetc(ps));
//
//
//	fclose(ps);
//	ps = NULL;
//	return 0;
//}


//����������  stdin
//��Ļ�����  stdout


//int main() {
//	int ch = fgetc(stdin);
//	fputc(ch,stdout);
//	return 0;
//}



//�ж��� ������
//int main() {
//	char buf[1024] = { 0 };
//
//
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL) {
//		return 0;
//	}
//	//���ļ� ÿ�ζ�һ��   fgets �����Դ�����
//	/*fgets(buf , 1024 ,pf);
//	printf("%s", buf);
//	fgets(buf, 1024, pf);
//	printf("%s", buf);*/
//
//	//д�ļ� ÿ��дһ��
//	fputs("hello", pf);   //���Դ�����
//	fputs("world", pf);
//
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main() {
//	//���̶�ȡһ���ı���Ϣ
//	char arr[1024] = { 0 };
//
//	//fgets(arr,1024,stdin);
//
//	////��Ļ���
//	//fputs(arr, stdout);
//
//	//�ȼ���
//	gets(arr);
//	puts(arr);
//
//	return 0;
//}




//��ʽ�����������

//typedef struct S {
//	int n;
//	float f;
//	char arr[20];
//}S;
//int main() {
//
//	//д��
//	//S s = { 100,30,"vjirjv" };
//	//FILE* pf = fopen("test.txt", "w");
//	//if (pf == NULL) {
//	//	return 0;
//	//}
//	//fprintf(pf, "%d %lf %s", s.n, s.f, s.arr);
//
//	//����
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
scanf printf ��Ա�׼����������ĸ�ʽ������������
fscanf fprintf ������� 
sscnaf   ���ַ�����ȡ��ʽ��������
sprintf   �Ѹ�ʽ������ ��� ���洢�� �ַ���
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
//	//�Ѹ�ʽ��������ת�����ַ����洢��buf
//	//printf(" %s", buf);
//
//
//	//��buf�ж�ȡ��ʽ�������ݵ�temp 
//	sscanf(buf, "%d %lf %s", &(temp.n), &(temp.f), &(temp.arr));
//	printf(stdout, "%d %lf %s", s.n, s.f, s.arr);
//	return 0;
//}






////�����ƶ�д
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
//	////�Զ�����д�ļ�
//	//fwrite(&s, sizeof(S), 1, pf);
//
//	fread(&temp, sizeof(S), 1, pf);
//	printf("%s %d %lf", temp.age, temp.age, temp.score);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}







//�����ȡ   fseek   
/*
* SEEK_CUR  �ļ�ָ�뵱ǰλ��   END ĩβλ��  SET ��ʼλ��
*/

//int main() {
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL) {
//		return 0;
//
//	}
//	//1.��λ�ļ�ָ��
//	//fseek(pf, -2, SEEK_END);
//	//2. ��ȡ�ļ�
//	//int ch = fgetc(pf);
//	//printf("%c", ch);
//
//
//	//ftell �����ļ�ָ���������ʼλ�õ�ƫ����
//	//int pos = ftell(pf);
//	//printf("%d\n", pos);   // 
//
//
//
//
//	//rewind �ļ�ָ�뷵����ʼλ��
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





//�ļ������ж�
// ���ļ���ȡ������ ������feof��������ֱֵ�������ж��ļ��Ƿ����
// �ж��ļ���ȡ����ʱ   �Ƕ�ȡʧ�� ���� �����ļ���β
//EOF  end - of - file  �ļ�������־

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
	//���ļ�
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




