int year;
int class;
int number;
char name[64];
double stature;
double weight;

// 構造体
// 複数の異なる型をまとめられて作られた型

struct student
{
	int year;
	int class;
	int number;
	char name[64];
	double stature;
	double weight;
};

// 宣言 型名 変数名
struct student data;

// sample
// 関数よりも先に宣言する
struct student
{
	int year;
	int class;
	int number;
	char name[64];
	double stature;
	double weight;
};

int main(void)
{
	struct student data;
	return 0;
}

// sample
#include <stdio.h>
struct student
{
	int year;
	int class;
	int number;
	char name[64];
	double stature;
	double weight;
};

int main(void)
{
	struct student data;

	data.year = 10;
	printf("%d\n", data.year);

	return 0;
}

// sample
#include <stdio.h>
#include <string.h>
struct student
{
	int year;
	int class;
	int number;
	char name[64];
	double stature;
	double weight;
};

int main(void)
{
	struct student data;

	strcpy(data.name, "MARIO");
	printf("%s\n", data.name);

	return 0;
}

// typedef
// typedef 新しい型の型 新しい型名

struct student_tag
{
	int year;
	int class;
	int number;
	char name[64];
	double stature;
	double weight;
};

typedef struct student_tag student;

//
struct student_tag
{
	int year;
	int class;
	int number;
	char name[64];
	double stature;
	double weight;
} student;

// 構造体変数を引数として受け取る
void student_print(student data);

//
void student_print(student data)
{
	printf("[学年]:%d\n", data.year);
	printf("[クラス]:%d\n", data.class);
	printf("[出席番号]:%d\n", data.number);
	printf("[名前]:%d\n", data.name);
	printf("[身長]:%d\n", data.height);
	printf("[体重]:%d\n", data.weight);
	return 0;
}

// sample
#include <stdio.h>
#include <string.h>

typedef struct
{
	int year;
	int class;
	int number;
	char name[64];
	double stature;
	double weight;
} student;

void student_print(student data);

int main(void)
{
	student data;
	data.year = 3;
	data.class = 4;
	data.number = 18;
	strcpy(data.name, "MARIO");
	data.stature = 168.2;
	data.weight = 72.4;

	student_print(data);

	return 0;
}

void student_print(student data)
{
	printf("[学年]:%d\n", data.year);
	printf("[クラス]:%d\n", data.class);
	printf("[出席番号]:%d\n", data.number);
	printf("[名前]:%s\n", data.name);
	printf("[身長]:%f\n", data.stature);
	printf("[体重]:%f\n", data.weight);
	return;
}

//
#include <stdio.h>
#include <string.h>

typedef struct
{
	char name[256];
	int age;
	int sex;
} people;

void InputPeople(people *data);
void ShowPeople(people data);

int main(void)
{
	people data[3];
	int i;

	for (i = 0; i < 3; i++){
		InputPeople(&data[i]);
	}

	for (i = 0; i < 3; i++){
		ShowPeople(data[i]);
	}

	return 0;
}

void InputPeople(people *data)
{
	printf("name:");
	scanf("%s", data -> name);
	printf("age:");
	scanf("%d", &data -> age);
	printf("sex(1-man, 2-weman):");
	scanf("%d", &data -> sex);
	printf("\n");
}

void ShowPeople(people data)
{
	char sex[16];

	printf("name:%s\n", data.name);
	printf("age:%d\n", data.age);

	if (data.sex == 1){
		strcpy(sex, "男性");
	}

	else {
		strcpy(sex, "女性");
	}

	printf("sex:%s\n", sex);
	printf("\n");
}

