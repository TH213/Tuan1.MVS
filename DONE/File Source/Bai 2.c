#include <stdio.h>

int main()
{
    printf("*********************\n");
	printf("Bai 2 Tuan 1 TuanHDA\n");
	printf("Nhap vao 1 xau <100 ky tu. He thong se tra ket qua so ky tu in thuong va in hoa.\n");
	printf("*********************\n");
    char S[100];
    printf("Moi nhap vao xau :");
    fflush (stdin);
    gets(S);
    int len=strlen(S);
    if (len>100)
    {
        printf("Moi kiem tra lai dau vao !!!!!");
        return 0;
    }
    printf("Xau vua nhap:  %s",S);
    int demthuong=0;
    int demhoa=0;
    int i;
    for(i=0;i<=len;i++)
    {
        if((S[i]>='a') && (S[i]<='z')) demthuong++;
        if((S[i]>='A') && (S[i]<='Z')) demhoa++;
    }
    printf("\nSo ky tu thuong = %d \nSo ky tu HOA = %d",demthuong,demhoa);
    getch();
    return 0;
}
