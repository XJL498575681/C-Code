#define _CRT_SECURE_NO_WARNINGS 
#define MAX 1000
#define NAME_MAX 20
#define SEX_MAX 5
#define TELE_MAX 12
#define ADDR_MAX 30

#include <stdio.h>
#include<string.h>


enum Option {
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	SORT
};
struct PeoInfo {
	char name[NAME_MAX];
	int age;
	char sex[SEX_MAX];
	char tele[TELE_MAX];
	char addr[ADDR_MAX];
};

//ͨѶ¼����
struct Contact {
	struct PeoInfo data[MAX];
	int size ; //��¼��ǰͨѶ¼���е���������
};



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
void SortContact(struct Contact* ps);

