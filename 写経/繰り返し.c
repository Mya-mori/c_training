/* 繰り返し
int i;
for (i = 1; i <= n; i++)
    繰り返し文
*/

// sample
#include <stdio.h>

int main(void)
{
    int i;

    for (i = 1; i <= 10; i++)
    {
        printf("Message\n");
    }

    return 0;
}

// sample2
#include <stdio.h>

int main(void)
{
    int i;

    for (i = 1; i <= 10; i++)
    {
        printf("%02d times\n", i);
    }

    return 0;

}

// sample3 たくさん回す
#include <stdio.h>

int main(void)
{
    int i;
    for (i = 1; i <= 9999; i++)
    {
        printf("%04d times\n", i);
    }

    return 0;
}

/*
for (初期化; 条件文; 更新)
{
    繰り返し文
}
*/

// ループの終了
#include <stdio.h>

int main(void)
{
    int i;

    for (i = i; i <= 10; i++)
    {
        printf("%d\n", i);
        if (i == 3)
        {
            break; /* ループの終了 */
        }
    }

    return 0;
}

// 9*9
#include <stdio.h>

int main(void)
{
    int a, b;

    for (a = 1; a <= 9; a++)
    {
        for (b = 1; b <= 9; b++)
        {
            printf("%2d", a * b);
        }
        printf("\n");
    }

    return 0;
}

// while
#include <stdio.h>

int main(void)
{
    double money = 1;
    int month = 1;

    while (money < 1000000) //10まんより少ない場合
    {
        printf("%02d month: %7.0f yen\n", month, money); //2桁 0を右に詰める
        money *= 2;
        month ++;
    }
    printf("%02d month %7.0f yen. it's over 1 million\n", month, money); //2桁 0を右に詰める //7桁の整数

    return 0;
}

// do~while
// if ~ else
#include <stdio.h>

int main(void)
{
    int r;
    double s;

    printf("hankei?:");
    scanf("%d:", &r);

    if (r < 0)
    {
        printf("hankei is minus lol \n");
    }
    else
    {
        s = r * r *3.14;
        printf("menseki is %f \n", s);
    }

    return 0;
}

// do ~ while
// scanfを2回使う
#include <stdio.h>

int main(void)
{
    int r;
    double s;

    printf("hankei is : ");
    scanf("%d", &r);

    while (r < 0)
    {
        printf("hankei is: ");
        scanf("%d", &r);
    }

    s = r * r * 3.14;
    printf("menseki is %f. \n", s);

    return 0;
}

