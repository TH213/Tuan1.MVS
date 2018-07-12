
#include "stdio.h"
#include "string.h"
#include<iostream>
using namespace std;


int main()
{
	int S[3];
	int temp=0;
	int n;
	printf("*********************\n");
	printf("Bai 1 Tuan 1 TuanHDA\n");
	printf("Nhap vao 1 so co 3 chu so. Hien ra man hinh so do da duoc sap xep\n");
	printf("*********************\n");

	printf(" Nhap vao ban phim 1 so nguyen co 3 chu so:    ");
	scanf("%d",&n);
	if((n>999) || ( n<=100))
    {
        printf("Moi kiem tra lai dau vao!!!!!!");
        return(0);
    }
	S[0]=(n/100);
	S[1]=(n/10)-(S[0]*10);
	S[2]=(n-(S[0]*100)-(S[1]*10));

	for (int i=0 ;i<=1;i++)
        for (int j=i+1;j<=2;j++)
        if(S[j]>S[i])
	{
		temp=S[i];
        S[i]=S[j];
        S[j]=temp;
	}
	printf("\n So sau sap xep la : ");
    for (int i=0 ;i<=2;i++) printf("%d",S[i]);
	//system("pause");
	return 0;
}
