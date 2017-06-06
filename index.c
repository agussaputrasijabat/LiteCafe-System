/**
Program Name    : LiteCafe System
Description     : Easy to delivery foods and drinks on your cafe
Version         : 1.0.0
Author          : Agus Saputra Sijabat
Author Website  : http://agussijabat.com

Made with love (:
*/

#include <stdio.h>
#include <conio.h>
#include <string.h>

main()
{
	int kode_makanan[50],kode_minuman[50],jumlah_makanan[50],jumlah_minuman[50];
    int baris,x=0,i;
	char nama_makanan[50][20],nama_minuman[50][20],nama_pemesan[50][20],mad='Y';
	float harga_makanan[50],harga_minuman[50],total_harga[50];

	while(mad=='y'|| mad=='Y')
	{
        clrscr();

        printf("\n------------------- Cafe 5 Bersaudara ----------------\n\n\n");

        /* Daftar menu makanan dan minuman */
        printf("  MENU MAKANAN			MENU MINUMAN \n");
        printf("  1. Nasi Goreng		1. Jus Pokat\n");
        printf("  2. Nasi Goreng Spesial	2. Teh Es\n");
        printf("  3. Mie Kuah			3. Teh Botol Sosro\n");
        printf("  4. Mie Goreng			4. Kopi Dingin\n\n\n");

        /* Menanyakan nama pemesan dan apa yang akan di pesanan */
        printf("  Nama Pemesan      : ");
        gets(nama_pemesan[x]);

        printf("  Makanan yang akan dipesan [1/2/3/4]           : ");
        scanf("%i",&kode_makanan[x]);

        printf("  Jumlah makanan yang akan dipesan [1/2/3/4]    : ");
        scanf("%i",&jumlah_makanan[x]);

        printf("  Minuman yang akan dipesan	[1/2/3/4]       : ");
        scanf("%i",&kode_minuman[x]);

        printf("  Jumlah minuman yang akan dipesan [1/2/3/4]	: ");
        scanf("%i",&jumlah_minuman[x]);

        /**
        * switch(kode_makanan[x])
        * Switch ini untuk menemukan nama dan harga makanan berdasarkan kode/id
        */
        switch(kode_makanan[x])
        {
            case 1:

            strcpy(nama_makanan[x],"Nasi Goreng");
            harga_makanan[x]= jumlah_makanan[x]*13000;

            case 2:

            strcpy(nama_makanan[x],"Nasi Goreng Spesial");
            harga_makanan[x]=jumlah_makanan[x]*17000;

            case 3:

            strcpy(nama_makanan[x],"Mie Kuah");
            harga_makanan[x]=jumlah_makanan[x]*10000;

            case 4:

            strcpy(nama_makanan[x],"Mie Goreng");
            harga_makanan[x]=jumlah_makanan[x]*10000;
        }


        /**
        * switch(kode_minuman[x])
        * Switch ini untuk menemukan nama dan harga minuman berdasarkan kode/id
        */
        switch(kode_minuman[x])
        {
            case 1:

            strcpy(nama_minuman[x],"Jus Pokat");
            harga_minuman[x]=jumlah_minuman[x]*7000;

            case 2:

            strcpy(nama_minuman[x],"Teh Es");
            harga_minuman[x]=jumlah_minuman[x]*7000;

            case 3:

            strcpy(nama_minuman[x],"Teh Botol Sosro");
            harga_minuman[x]=jumlah_minuman[x]*8000;

            case 4:

            strcpy(nama_minuman[x],"Kopi Dingin");
            harga_minuman[x]=jumlah_minuman[x]*6000;
        }

        /* menghitung total harga makanan dan minuman */
        total_harga[x]=harga_makanan[x]+harga_minuman[x];
        x++;

        printf("\nTambah pesanan lagi [y/t]     : ");
		mad=getche();
		fflush(stdin);
        getch();
    }

    clrscr();
    printf("\n| NO |  PEMESAN |    MAKANAN    |  JUMLAH  |    MINUMAN    |  JUMLAH  |    TOTAL  \n");
    printf("---------------------------------------------------------------------------------\n");

          /*12345678901234567890123456789012345678901234567890123456789012345678901234567*/
          /*    0         1         2         3         4         5         6         7  */

    baris=6;

    for (i=0;i<x;i++)
    {
        gotoxy(1,baris);printf("|");
        gotoxy(3,baris);printf("%i",i+1);
        gotoxy(6,baris);printf("|");
        gotoxy(9,baris);printf("%s",nama_pemesan[i]);
        gotoxy(17,baris);printf("|");
        gotoxy(21,baris);printf("%s",nama_makanan[i]);
        gotoxy(33,baris);printf("|");
        gotoxy(38,baris);printf("%i",jumlah_makanan[i]);
        gotoxy(44,baris);printf("|");
        gotoxy(47,baris);printf("%s",nama_minuman[i]);
        gotoxy(60,baris);printf("|");
        gotoxy(66,baris);printf("%i",jumlah_minuman[i]);
        gotoxy(71,baris);printf("|");
        gotoxy(75,baris);printf("%.0f",total_harga[i]);

        baris++;
    }    

    getch();
}
