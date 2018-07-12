
#include "stdafx.h"
#include "stdio.h"
#include "string.h"
#include<iostream>
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	int S[3];
	int temp=0;
	int n;
	printf("*********************\n");
	printf("Bai 1 Tuan 1 TuanHDA\n");
	printf("*********************\n");

	printf(" Nhap vao ban phim 1 so nguyen co 3 chu so:    ");
	scanf("%d",&n);
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
    for (int i=0 ;i<=2;i++) printf("%d",S[i]);
	//system("pause");
	return 0;
}
