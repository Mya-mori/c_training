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

