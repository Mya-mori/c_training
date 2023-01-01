// 整数の入力
#include <stdio.h>

int main(void)
{
	int data;
    //input
	scanf("%d", &data); // scanf("入力変換指定子", &変数名)
	printf("%d\n", data);
	return 0;
}

// 実数入力
#include <stdio.h>

int main(void)
{
	double data;
	// input
	scanf("%lf", &data); //実数入力時のみ%lfが必要
	printf("%f\n", data);
	return 0;
}

// 複数入力
#include <stdio.h>

int main(void)
{
	int data1, data2;
	scanf("%d%d", &data1, &data2);
	printf("%d, %d\n", data1, data2);
	return 0;
}

// min, max の各要素の合計を算出する
#include <stdio.h>

int main(void)
{
	// わかりやすい変数名
	int min, max, sum;

	/* input*/
	printf("最小値と最大値を , で区切って入力してください. : ");
	scanf("%d, %d", &min, &max);

	/* calculation */
	sum = (min + max) * (max - min + 1) / 2;

	/* output */
	printf("%d~%d の合計は%d です. \n", min, max, sum);
	return 0;
}

// 料金の割引一覧
#include <stdio.h>

int main(void)
{
	int price;

	/* input*/
	printf("input price in number: ");
	scanf("%d", &price);

	/* output */
	printf("%d の1割引は%dです。\n", price, (int)(price * 0.9));
	printf("%d の3割引は%dです。\n", price, (int)(price * 0.3));
	printf("%d の5割引は%dです。\n", price, (int)(price * 0.5));
	printf("%d の8割引は%dです。\n", price, (int)(price * 0.2));
	return 0;
}
