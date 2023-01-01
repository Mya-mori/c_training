// 初期化
#include <stdio.h>

int main(void)
{
	int suuti = 10;
	if (suuti) // if (condition):
		printf("%d\n", suuti);
	return 0;
}

// input scanf
#include <stdio.h>

int main(void)
{
	int suuti;
	scanf("%d", &suuti);
	if (suuti - 10)
		printf("入力値は10ではありません。\n");
	return 0;
}

// 比較演算子
#include <stdio.h>

int main(void)
{
	// 定義
	int suuti;

	//入力
	scanf("%d", &suuti);

	//処理
	if (suuti == 10)
		printf("input is 10\n");

	if (suuti > 10)
		printf("input is bigger than 10\n");

	if (suuti < 10)
		printf("input is smaller than 10\n");

	return 0;
}

// 論理演算子
#include <stdio.h>

int main(void)
{
	// 定義
	int suuti;

	//入力
	scanf("%d", &suuti);

	//処理
	if (suuti >= 0 && suuti <= 12)
		printf("input is between 0 and 12\n");

	if (!(suuti >= 0 && suuti <= 12))
		printf("input is not between 0 and 12\n");

	return 0;
}

// 100点以上を100点に修正する
#include <stdio.h>

int main(void)
{
	// 定義
	int score;

	//入力
	printf("input a number\n");
	scanf("%d", &score);

	//処理
	if (score >= 100) score = 100;
	printf("input is bigger than 100 so modefy the number\n");
	printf("input is %d\n", score);

	return 0;
}

// ブロック文を使用する
#include <stdio.h>

int main(void)
{
	// 定義
	int score;

	//入力
	printf("input a number: ");
	scanf("%d", &score);

	//処理
	if (score >= 100)
	{
		printf("input is bigger than 100 so modefy the number\n");
		score = 100;
	}

	printf("input is %d\n", score);
	return 0;
}

// 練習問題
#include <stdio.h>

int main(void)
{
	// 定義
	int year;

	//入力
	printf("input a year: ");
	scanf("%d", &year);

	//処理
	if (year % 4 == 0)
	{
		printf("夏季五輪\n");
	}
	if (year % 2 == 0 && year % 4 != 0)
	{
		printf("冬季五輪\n");
	}
	if (year % 2 != 0)
	{
		printf("五輪なし\n");
	}

	return 0;
}

// if else
#include <stdio.h>

int main(void)
{
	// 定義
	int suuti;

	//入力
	printf("input a number: ");
	scanf("%d", &suuti);

	//処理
	if (suuti == 10)
	{
		printf("input is 10\n");
	}
	else
	{
		printf("input is not 10\n");
	}
	return 0;
}

// 3つ以上の場合分け
#include <stdio.h>

int main(void)
{
	//input
	int age;
	printf("age: ");
	scanf("%d", &age);

	if (age <= 3)
	{
		printf("free \n");
	}
	else if (age >= 4 && age <= 12)
	{
		printf("250 yen \n");
	}
	else
	{
		printf("500 yen \n");
	}
	return 0;
}

// 番号によ場合分け if~else
#include <stdio.h>

int main(void)
{
	int no;
	printf("input no: ");
	scanf("%d", &no);

	if (no == 1)
	{
		printf("nobita\n");
	}
	else if (no == 2)
	{
		printf("shizuka\n");
	}
	else if (no == 3)
	{
		printf("takeshi\n");
	}
	else if (no == 4)
	{
		printf("suneo\n");
	}
	else
	{
		printf("Who Am I ?\n");
	}

	return 0;
}


// 番号によ場合分け switch~case
#include <stdio.h>

int main(void)
{
	int no;
	printf("input no: ");
	scanf("%d", &no);

	switch (no)
	{
		case 1:
			printf("nobita\n");
			break;
		case 2:
			printf("shizuka\n");
			break;
		case 3:
			printf("zyaian\n");
			break;
		case 4:
			printf("suneo\n");
			break;
		default:
			printf("Who Am I ??\n");
			break;
	}

	return 0;
}

// 処理結果をまとめる switch~case
#include <stdio.h>

int main(void)
{
	int no;
	printf("input number: ");
	scanf("%d", &no);

	switch (no)
	{
		case 1:
		case 3:
		case 4:
			printf("man \n");
			break;
		case 2:
			printf("women \n");
			break;
		default:
			printf("Who Am I? \n");
			break;
	}

	return 0;
}

