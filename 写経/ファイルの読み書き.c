// ポインタ変数　＝ fopen(ファイル名, モード)
// fclose(対象のポインタ変数)

# include <stdio.h>

int main(void)
{
    FILE *file;
    file = fopen("test.txt", "w");
    fclose(file);
    retu rn 0;
}

// 書き込み
#include <stdio.h>

int main(void)
{
    FILE *file;
    file = fopen("test.txt", "w");
    fprint(file, "Hello World");
    fclose(file);
    return 0;
}

// 読み込み
#include <stdio.h>

int main(void)
{
    int i;
    FILE *file;
    file = fopen("test.txt", "r");
    fscanf(file, "%d", &i);
    fclose(file);
    printf("%d\n");
    return 0;
}

// バイナリファイル
#include <stdio.h>

int main(void)
{
    FILE *file;
    file = fopen("test.dat", "wb");
    fclose(file);
    return 0;
}