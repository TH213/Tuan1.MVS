#include "stdio.h"
#include "conio.h"

int UCLN(int m, int n);

int main()
{
        printf("*********************\n");
        printf("Bai 7 Tuan 1 TuanHDA\n");
        printf("Tim UCLN va BCNN cua 2 so nhap tu ban phim");
        printf("*********************\n");
        int a;
        int b;
		printf("Nhap 2 so nguyen duong cach nhau boi dau cach: ");
		scanf("%d %d", &a, &b);

		if ((a<=0) || (b<=0))
        {
            printf("Kiem tra lai dau vao");
            return 0;
        }

		printf("UCLN: %d\n",UCLN(a, b));
		printf("BCNN: %d\n",(a*b)/(UCLN(a,b)));

	getch();
}

int UCLN(int a,int b){
	int soDu;
	while(b!=0){
		soDu=a%b;
		a=b;
		b=soDu;
	}
	return a;
}
