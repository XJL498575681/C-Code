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

//通讯录类型
typedef struct Contact {
	struct PeoInfo * data;
	int size ; //记录当前通讯录已有的名单个数
	int capacity;
}Contact;



//声明函数
//初始化
void InitContact(struct Contact *ps);

//添加函数
void AddContact(struct Contact* ps);

//打印函数
void ShowContact(const struct Contact* ps);


//删除函数
void DelContact(struct Contact* ps);

//查找函数
void SearchContact(const struct Contact *ps);

//修改函数
void ModifyContact(struct Contact* ps);

//排序函数
//void SortContact(struct Contact* ps);

//修改函数
void DestoryContact(struct Contact* ps);

