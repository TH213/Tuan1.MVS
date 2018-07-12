#include <stdio.h>

int main()
{
	printf("*********************\n");
	printf("Bai 5 Tuan 1 TuanHDA\n");
	printf("*********************\n");
    int nhuan=0;
    int ngay,thang,nam;
    printf("Moi nhap vao Ngay: ");
    scanf("%d",&ngay);
    if((ngay <=0)||(ngay>31))
    {
        printf("Khong hop le !!");
        exit(0);
    }
    printf("Moi nhap vao Thang: ");
    scanf("%d",&thang);
    if((thang <=0)||(thang>12))
    {
        printf("Khong hop le !!");
        exit(0);
    }
    printf("Moi nhap vao Nam: ");
    scanf("%d",&nam);
    if(nam<=0)
    {
        printf("Khong hop le !!");
        exit(0);
    }
    if ((nam%400==0 || (nam%4==0 && nam%100!=0))) nhuan = 1;
    if (nhuan =0) printf("K nhuan");
    int i;
    int hople=1;
    for (i=1;i<=12;i++)  // 31 ngay: 1 3 5 7 ; 8 10 12
    {
        if(i<=7)
            if(i%2!=0) if(ngay>31) hople=0;
            else if(ngay > 30) hople =0;
        if(i>=8)
            if(i%2==0) if(ngay>31) hople=0;
            else if(ngay > 30) hople =0;
        if(i==2)
            if(nhuan=1) if(ngay > 29) hople =0;
            else if(ngay > 28) hople =0;
    }
    if(hople=0)
    {
        printf("Khong hop le !!");
        exit(0);
    }
    /*
    if (((thang = 2) && (nhuan =1) && (ngay >29) ) ||
            ((thang = 2) && (nhuan =0) && (ngay >28) ) ||
            ((thang = 1)||(thang = 3)||(thang = 5)||(thang = 7)||(thang = 8)||(thang = 10)||(thang = 12) && (ngay>31)) ||
            ((thang = 4)||(thang = 6)||(thang = 9)||(thang = 11) && (ngay >30)))
    {
        printf("Khong hop le !!");
        exit(0);
    }*/
    if (nhuan =1) printf("Nhuan");
    else if (nhuan =0) printf("Khong Nhuan");
    getch();
    return 0;
}
