#include <stdio.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS
int main()
{
    /** 保存字符个数 **/
    int charcount = 0;
    int worldcount = 0;


    /** 保存文件名 **/
    char fname[80];
    char ch;
    /** 文件指针 **/
    FILE* fp;

    printf("Please enter the file name:");
    scanf("%s",fname);

    if ((fp = fopen(fname, "r")) == NULL) {
        printf("Open file failed!!\n");
        exit(1);
    }
    ch = fgetc(fp);
    while (ch != EOF)
    {
    charcount++;
    if (ch ==',' || ch==' ')
        worldcount++;
}
    fclose(fp);

    printf("字符数 %d .\n", charcount);
    printf("字符数 %d .\n", worldcount);
    return 0;
}
