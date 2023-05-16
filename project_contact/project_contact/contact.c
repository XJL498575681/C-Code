#define _CRT_SECURE_NO_WARNINGS 
#include "contact.h"
#include<string.h>
#include<stdio.h>

//初始化通讯录 全部置为0
void InitContact(struct Contact* ps) {
	memset(ps->data, 0, sizeof(ps->data));
	ps->size = 0;
}


//添加通讯录成员
void AddContact(struct Contact* ps) {
	if (ps->size == MAX) {
		printf("通讯录已满\n");
	}
	else {
		printf("请输入名字:");
		scanf("%s", ps->data[ps->size].name);
		printf("请输入年龄:");
		scanf("%d",&(ps->data[ps->size].age));
		printf("请输入性别:");
		scanf("%s", ps->data[ps->size].sex);
		printf("请输入电话:");
		scanf("%s", ps->data[ps->size].tele);
		printf("请输入地址:");
		scanf("%s", ps->data[ps->size].addr);

		ps->size++;
		printf("添加成功\n");
	}
}


//打印通讯录
void ShowContact(const struct Contact* ps) {
	if (ps->size == 0) {
		printf("通讯录为空\n");
	}
	else {
		int i = 0;
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n", "姓名", "年龄", "性别", "电话", "地址");

		for (i = 0; i < ps->size; i++) {
			printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20s\n", 
				ps->data[i].name,
				ps->data[i].age,
				ps->data[i].sex,
				ps->data[i].tele,
				ps->data[i].addr);
		}
	}
}

//查找指定人函数

static int FindByname(const struct Contact *ps,char name[NAME_MAX]) {
	int i = 0;
	for (i = 0; i < ps->size; i++) {
		if (0 == strcmp(ps->data[i].name, name)) {
			return i;  //找到
		}
	}
	return -1;
}





//删除指定人员

void DelContact(struct Contact* ps) {
	char name[NAME_MAX];
	printf("请输入要删除人的名字\n");
	scanf("%s", name);
	//1.查找要删除的人位置

	//找到返回下标，找不到返回-1
	int pos = FindByname(ps, name);

	/*int i = 0;
	for (i = 0; i < ps->size; i++) {
		if (0 == strcmp(ps->data[i].name, name)) {
			break;
		}
	}*/

	//2.删除
	if (pos == -1) {
		printf("没有该人\n");
	}
	else {
		int j = 0;
		for (j = pos; j < ps->size - 1; j++) {
			ps->data[j] = ps->data[j + 1];
		}
		ps->size--;
		printf("删除成功\n");
	}
}




//查找函数
void SearchContact(const struct Contact* ps) {
	printf("请输入要查找的名字\n");
	char name[NAME_MAX];
	scanf("%s", name);
	int i = 0;
	int  pos = FindByname(ps, name);
	if (pos == -1) {
		printf("找不到\n");
	}
	else {
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n",
			"姓名", "年龄", "性别", "电话", "地址");
		printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20s\n",
				ps->data[pos].name,
				ps->data[pos].age,
				ps->data[pos].sex,
				ps->data[pos].tele,
				ps->data[pos].addr);
	}
}



//修改函数
void ModifyContact(struct Contact* ps) {
	printf("请输入要修改人的姓名\n");
	char name[NAME_MAX];
	scanf("%s", name);
	int pos = FindByname(ps, name);
	if (pos == -1) {
		printf("要修改人的信息不存在\n");
	}
	else {
		printf("请输入名字:");
		scanf("%s", ps->data[pos].name);
		printf("请输入年龄:");
		scanf("%d", &(ps->data[pos].age));
		printf("请输入性别:");
		scanf("%s", ps->data[pos].sex);
		printf("请输入电话:");
		scanf("%s", ps->data[pos].tele);
		printf("请输入地址:");
		scanf("%s", ps->data[pos].addr);
		printf("修改成功\n");
	}
}



//排序函数
//void SortContact(struct Contact* ps) {
//	int i = 0;
//	for (i = 0; i < ps->size; i++) {
//		int j = 0;
//		for (j = 0; j < ps->size - 1 - i; j++) {
//			if (ps->data[j].age > ps->data[j + 1].age) {
//
//			} 
//		}
//	}
//}