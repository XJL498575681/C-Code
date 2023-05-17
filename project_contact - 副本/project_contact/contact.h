#define _CRT_SECURE_NO_WARNINGS 
//#define MAX 1000

#define DEFAULT_SZ 3
#define NAME_MAX 20
#define SEX_MAX 5
#define TELE_MAX 12
#define ADDR_MAX 30

#include <stdio.h>
#include<string.h>
#include<stdlib.h>

enum Option {
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	SORT
};
typedef struct PeoInfo {
	char name[NAME_MAX];
	int age;
	char sex[SEX_MAX];
	char tele[TELE_MAX];
	char addr[ADDR_MAX];
}PeoInfo;

//ͨѶ¼����
typedef struct Contact {
	struct PeoInfo * data;
	int size ; //��¼��ǰͨѶ¼���е���������
	int capacity;
}Contact;



//��������
//��ʼ��
void InitContact(struct Contact *ps);

//��Ӻ���
void AddContact(struct Contact* ps);

//��ӡ����
void ShowContact(const struct Contact* ps);


//ɾ������
void DelContact(struct Contact* ps);

//���Һ���
void SearchContact(const struct Contact *ps);

//�޸ĺ���
void ModifyContact(struct Contact* ps);

//������
//void SortContact(struct Contact* ps);

//�޸ĺ���
void DestoryContact(struct Contact* ps);

