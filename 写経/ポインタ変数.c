//変数の番号を調べる
#include <stdio.h>

int main(void)
{
    int i;
    printf("%p\n", &i);
    return 0;
}


// 000000000014FEBC
// 16進法
// アドレス 変数になずけられたメモリ上の番号

//
#include <stdio.h>

int main(void)
{
    int i1, i2, i3;
    printf("i1(%p)\n", &i1);
    printf("i2(%p)\n", &i2);
    printf("i3(%p)\n", &i3);
    return 0;
}

/*
i1(000000000014FEBC)
i2(000000000014FEB8)
i3(000000000014FEB4)
*/


#include <stdio.h>

int main(void)
{
    int array[10];
    printf("array___(%p)\n", array);
    printf("array[0](%p)\n", &array[0]);
    printf("array[1](%p)\n", &array[1]);
    printf("array[2](%p)\n", &array[2]);
    return 0;
}

//
#include <stdio.h>

int main(void)
{
    int *p; //ポイント変数
    int i;  //変数
    p = &i; //&で変数iのアドレスを求める
    printf("p = %p\n", p);
    printf("&i = %p\n", &i);
    return 0;
}

//
#include <stdio.h>

int main(void)
{
    int *p;
    int i;
    p = &i;
    *p = 10; // 通常変数に切り替えたポイント変数
    printf("*p = %p\n", *p);
    printf("i = %p\n", i);
    return 0;
}

//
#include <stdio.h>

//プロトタイプ宣言
void func(int* pvalue);

int main(void)
{
    int value = 10;
    printf("&value = %p\n", &value);
    func(&value); //アドレスを引き渡す
    printf("value = %d\n", value);
    return 0;
}

void func(int* pvalue)
{
    printf("pvalue = %p\n", pvalue);
    *pvalue = 100; // 通常モードに切り替える
    return;
}

//
#include <stdio.h>

int gataverage(int data[10]);

int main(void)
{
    int average, array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    average = gataverage(array);
    printf("%d\n", average);
    return 0;
}

int gataverage(int data[10])
{
    int i, average = 0;
    for (i = 0; i < 10; i++){
        average += data[i];
    }

    return average/10;
}

//
#include <stdio.h>

int gataverage(int data[10]);

int main(void)
{
    int average, array[5] = {1, 2, 3, 4, 5};
    average = gataverage(array);
    printf("%d\n", average);
    return 0;
}

int gataverage(int data[10])
{
    int i, average = 0;
    for (i = 0; i < 10; i++){
        average += data[i];
    }

    return average/10;
}

//
#include <stdio.h>

int gataverage(int *data);

int main(void)
{
    int *data;
    int average, array[5] = {1, 2, 3, 4, 5};
    int average = 0;

    data = array; //ポインタ変数に配列のアドレスを代入

    for (i = 0; i < 10; i++){
        average += data[i]; //配列のように使える
    }

    printf("%d\n", average);
    return 0;
}

//
#include <stdio.h>

int gataverage(int *data);

int main(void)
{
    int *data;
    int average, array[5] = {1, 2, 3, 4, 5};

    data = array; //ポインタ変数に配列のアドレスを代入

    for (i = 0; i < 10; i++){
        average += *(data + i); //配列のように使える
    }

    printf("%d\n", average);
    return 0;
}