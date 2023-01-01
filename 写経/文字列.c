#include <stdio.h>

int main(void)
{
	char c = 'A';
	printf("%c\n", c);
	return 0;
}

//
#include <stdio.h>

int main(void)
{
	char c = 'A' + 9;
	printf("%c\n", c);
	return 0;
}

//
#include <stdio.h>

int main(void)
{
    char c = '8'; //number
    int suuti = c - '0'; //convert number
    printf("%d\n", suuti);
    return 0;
}

//
#include <stdio.h>

int main(void)
{
    char c = 'A';
    int suuti;

    if (c >= '0' && c <= '9') {
        suuti = c - '0';
    }
    else {
        suuti = 0;
    }

    return 0;
}

//
#include <stdio.h>

int main(void)
{
    char str[6] = { 'M', 'A', 'R', 'I', 'O'};
    printf("%s\n", str);
    return 0;
}

//
#include <stdio.h>

int main(void)
{
    char str = "MARIO";
    printf("%s\n", str);
    return 0;
}

//
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char str[] = "145";
    int suuti = atoi(str); //atoi 文字列を数値に変更
    printf("%d\n", suuti);
    return 0;
}

//
#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[10];
    // strcpy(コピー先,コピー元)
    strcpy(str, "MARIO");
    printf("%s\n", str);
    return 0;
}

//結合 並べるだけ
#include <stdio.h>

int main(void)
{
    char str[] = "DRAGON""QUEST";
    printf("%s\n", str);
    return 0;
}

//結合 strcat
#include <stdio.h>
#include <string.h>

int main(void)
{
    char str1[12] = "DRAGON";
    char str2[] = "QUEST";
    //strcat(元の文字列, 追加する文字列)
    strcat(str1, str2);
    printf("%s\n", str1);
    return 0;
}

//
#include <stdio.h>

int main(void)
{
    char str[16];
    char str1[12] = "DRAGON";
    char str2[12] = "QUEST";
    int i = 3;
    sprintf(str, "%s%s%d\n", str1, str2, i);
    printf(str);
    return 0;
}

// input
#include <stdio.h>

int main(void)
{
    char str[32];
    scanf("%s", str);
    printf("%s\n", str);
    return 0;
}

// input
#include <stdio.h>

int main(void)
{
    char str[32];
    scanf("%32s", str); //32 words
    printf("%s\n", str);
    return 0;
}

//
#include <stdio.h>

int main(void)
{
    int i;

    char str[256];
    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i++);

    printf("%d\n", i);

    return 0;
}

//
#include <stdio.h>
#include <string.h>

int main(void)
{
    int len, i;
    char str1[256], str2[] = "DRAGONQUEST";

    scanf("%s", str1);

    len = strlen(str2);

    for (i = 0; i < len + 1; i++){
        if (str1[i] != str2[i]) {
            break;
        }
    }

    if (i == len + 1){
        printf("same\n");
    }
    else {
        printf("not same\n");
    }

    return 0;
}

//strcmp
#include <stdio.h>
#include <string.h>

int main(void)
{
    char str1[256], str2[] = "DRAGONQUEST";

    scanf("%s", str1);

    if (strcmp(str1, str2) == 0){
        printf("same\n");
    }
    else {
        printf("not same\n");
    }

    return 0;
}