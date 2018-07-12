#include <stdio.h>

int main()
{
    printf("*********************\n");
	printf("Bai 2 Tuan 1 TuanHDA\n");
	printf("*********************\n");
    char S[100];
    printf("Moi nhap vao xau :");
    fflush (stdin);
    gets(S);
    printf("Xau vua nhap:  %s",S);
    int len=strlen(S);
    int demthuong=0;
    int demhoa=0;
    int i;
    for(i=0;i<=len;i++)
    {
        if((S[i]>='a') && (S[i]<='z')) demthuong++;
        if((S[i]>='A') && (S[i]<='Z')) demhoa++;
    }
    printf("\nSo ky tu thuong = %d \n So ky tu HOA = %d",demthuong,demhoa);
    return 0;
}
