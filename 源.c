#include <stdio.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS
int main()
{
    /** �����ַ����� **/
    int charcount = 0;
    int worldcount = 0;


    /** �����ļ��� **/
    char fname[80];
    char ch;
    /** �ļ�ָ�� **/
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

    printf("�ַ��� %d .\n", charcount);
    printf("�ַ��� %d .\n", worldcount);
    return 0;
}
