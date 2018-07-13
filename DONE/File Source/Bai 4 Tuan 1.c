#include "stdio.h"
#include "conio.h"


int main()
{
        int i, j, h;
        printf("*********************\n");
        printf("Bai 4 Tuan 1 TuanHDA\n");
        printf("In ra man hinh tam giac can dac co do cao duoc nhap tu ban phim\n");
        printf("Nhap vao do cao <52 de hien thi tot nhat!! ");
        printf("*********************\n");

		printf("Nhap vao do cao: ");
		scanf("%d", &h);
		printf("\n");
		for(i=0; i<h; i++){
			printf("\t\t");
			for(j=0; j<h-(i+1); j++){
				printf(" ");
			}
			for(j=0; j<(2*i+1); j++){
				printf("*");
			}
			printf("\n");
		}
	getch();
}
