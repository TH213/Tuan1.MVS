#include "conio.h"
#include "stdio.h"
#include "string.h"
#include "ctype.h"


int main()
{
	char chuoi[100];
	int i;
    printf("*********************\n");
	printf("Bai 6 Tuan 1 TuanHDA\n");
	printf("Nhap vao 1 xau bat ky. Chuan hoa dau ra cua chuoi.\n");
	printf("*********************\n");


		printf("Nhap vao 1 chuoi:");
		gets(chuoi);

		while(chuoi[0]==' '){       // 2 dau cach
			strcpy(&chuoi[0], &chuoi[1]);
		}
		for(i=0; i<strlen(chuoi); i++){
			if(chuoi[i]== ' ' && chuoi[i+1]==' '){ // cach canh nhau
				strcpy(&chuoi[i], &chuoi[i+1]);
				i--;
			}
			if(chuoi[i+1]== ',' && chuoi[i]==' '){  // dau phau
				strcpy(&chuoi[i], &chuoi[i+1]);
				i--;
			}
			if(chuoi[i+1]== '.' && chuoi[i]==' '){ // xu ly dau cham
				strcpy(&chuoi[i], &chuoi[i+1]);
				i--;
			}
		}
		while(chuoi[strlen(chuoi)-1]==' '){
			chuoi[strlen(chuoi)-1]='\0';
		}

		printf("%s\n", chuoi);
	return 0;
	getch();
}
