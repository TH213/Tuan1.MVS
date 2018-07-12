#include <stdio.h>

int main()
{
	printf("*********************\n");
	printf("Bai 8 Tuan 1 TuanHDA\n");
	printf("Nhap vao 1 xau. He thong se tra lai xau dao cua xau nhap vao.\n");
	printf(" ");
	printf("*********************\n");
    char S[100];
    //char Sd[100];
    char temp;
    printf("Moi nhap vao xau can dao:");
    fflush (stdin);
    gets(S);
    printf("Xau vua nhap:  %s:  ",S);
    int len=strlen(S);
    //int j=len;
    int i;
    for(i=0;i<=(len/2);i++)
    {
        char temp = S[i];
        S[i]=S[len-i-1];
        S[len-i-1]=temp;
        //printf("%s",S[i]);
    }
    printf("\nXau sau dao:   %s",S);
    getch();
    return 0;
}
