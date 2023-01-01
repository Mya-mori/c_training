// sample
#include <stdio.h>

// プロトタイプ宣言
// 先に関数を宣言する
int sum(void);

int main(void)
{
    sum();
    return 0;
}

int sum(void)
{
    printf("%d\n", (1 + 100) * 100 /2);
    return 0;
}

// 実行順番
// 1. main関数が呼び出される
// 2. main関数のsumが呼び出される
// 3. sumのprintfを実行する
// 4. sumのreturnが実行され、元のmain関数に戻る
// 5. mainのreturnが実行されて終了

// 引数の指定
#include <stdio.h>

// プロトタイプ宣言
int sum(int);

int main(void)
{
    sum(50); //50 を引数に渡す
    return 0;
}

int sum(int max)
{
    printf("%d\n", (1 + max) * max /2);
    return 0;
}

// 複数の引数
#include <stdio.h>

// プロトタイプ宣言
int sum(int, int);

int main(void)
{
    sum(50, 100); //50 を引数に渡す
    return 0;
}

int sum(int min, int max)
{
    printf("%d\n", (min + max) * (max - min + 1) / 2);
    return 0;
}

// 戻り値
# include <stdio.h>

// プロトタイプ宣言
int sum(int, int);

int main(void)
{
    int value;
    value = sum(50, 100);
    printf("%d\n", value);
    return 0;
}

int sum(int min, int max)
{
    int num;
    num = (min + max) * (max - min) / 2;
    return num;
}

// sample
// 0 開かれない
// 1 夏が開かれる
// 2 冬が開かれる
#include <stdio.h>

int calc_year(int year);

int main(void)
{
    int year, olym;

    printf("enter a year: ");
    scanf("%d", &year);
    // 計算の関数を入れる
    olym = calc_year(year);
    // 開催の有無を確認
    switch (olym) {
        case 0:
            printf("開かれない\n");
            break;
        case 1:
            printf("夏季五輪\n");
            break;
        case 2:
            printf("冬季五輪\n");
            break;
    }
    return 0;
}

int calc_year(int year)
{
    //オリンピックが開かれた年を特定
	if (year % 2 == 0){
        // 夏に開かれている五輪
		if (year % 4 == 0){
			return 1;
		} else {
        // 冬に開かれている五輪
			return 2;
		}
	} else {
    // 開かれていない年
		return 0;
	}
}


// sample
#include <stdio.h>

int countfunc(void);

int main(void)
{
    countfunc();
    countfunc();
    countfunc();
    return 0;
}

int countfunc(void)
{
    int count = 0;
    count ++;
    printf("%d\n", count);
    return count;
}

// block
#include <stdio.h>

int main(void)
{
    int value1 = 10;
    int value2 = 20;

    printf("1:value1 %d\n", value1);
    printf("1:value2 %d\n", value2);

    {
        int value1;
        value1 = 30;
        value2 = 40;
        printf("2:value1 %d\n", value1);
        printf("2:value2 %d\n", value2);
    }

    printf("3:value1 %d\n", value1);
    printf("3:value2 %d\n", value2);

    return 0;
}

/*
出力:
1:value1 10
1:value2 20
2:value1 30
2:value2 40
3:value1 10
3:value2 40
*/

//global変数
//global変数は初期化せずにとも0から始まる
#include <stdio.h>

int count; // グローバル変数

int countfunc(void); //プロトタイプ宣言

int main(void)
{
    countfunc();
    countfunc();
    countfunc();
    return 0;
}

int countfunc(void)
{
    count++;
    print("%d\n", count);
    return count;
}

//
#include <stdio.h>

int count; // グローバル変数

int countfunc(void); //プロトタイプ宣言

int main(void)
{
    countfunc();
    count = 10; //修正を行う
    countfunc();
    countfunc();
    return 0;
}

int countfunc(void)
{
    count++;
    printf("%d\n", count);
    return count;
}

// グローバル関数とローカル関数で同名宣言できる
// グローバル関数よりもローカル関数を優先する
#include <stdio.h>

int count; // グローバル変数

int countfunc(void); //プロトタイプ宣言

int main(void)
{
    int count; //変数を定義

    countfunc();
    count = 10; //修正を行う
    countfunc();
    countfunc();
    printf("main : count = %d\n", count);
    return 0;
}

int countfunc(void)
{
    count++;
    printf("%d\n", count);
    return count;
}

//static variables
//static プログラムが終了するまでの残る
//       自動的に0に初期化される
#include <stdio.h>

int countfunc(void);

int main (void)
{
    countfunc();
    countfunc();
    countfunc();
    return 0;
}

int countfunc(void)
{
    static int count; //静的なローカル変数

    count++;
    printf("%d\n", count);

    return count;
}