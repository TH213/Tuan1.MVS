// Bai 3 Tuan 1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"
#include "string.h"
#include<iostream>
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	float d=0.0;
	float Sum=0;
	printf("Nhap vao so m da di: ");
	scanf("%f",&d);
	if (d<=0) 
	{
		printf("Moi chay lai va kiem tra input\n");
		system("Pause");
		exit;
	};s
	if (d<=1000) 
	{
		printf("Gia tien = 10.000 VND\n");
		system("Pause");
			exit(0);
	};
	if (d<=3000)
	{

		Sum=10000+1500*((d-1000)/200);
		printf("Gia tien = %f VND\n",Sum);
		system("Pause");
		exit(0);
	}
	else {
		Sum = 10000+(30000/200)*1500+(d-30000)*8;
		printf("Gia tien = %f VND\n",Sum);
				system("Pause");
		exit(0);
	}


	return 0;
}

