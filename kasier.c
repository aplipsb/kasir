#include <stdio.h>
#include <stdlib.h>

int main()

{
int ngoreng,nrames,tahug,tempeg,bakwan,teh,jeruk;
int uang, kembalian, diskon, total;
char ulang = 'Y';
while(ulang == 'Y'){
printf("Daftar Menu Warung Bintang Binjai\n");
printf("\n");
printf("1. Nasi Goreng      Rp 15.000\n");
printf("2. Nasi Rames       Rp 10.000\n");
printf("3. Tahu Goreng      Rp 2.000\n");
printf("4. Tempe Goreng     Rp 2.000\n");
printf("5. Bakwan           Rp 3.000\n");
printf("6. Es Teh           Rp 3.000\n");
printf("7. Es Jeruk         Rp 5.000\n");
printf("\n");
printf("Masukan jumlah beli Nasi Goreng  : ");
scanf("%d",&ngoreng);
printf("Masukan jumlah beli Nasi Rames   : ");
scanf("%d",&nrames);
printf("Masukan jumlah beli Tahu Goreng  : ");
scanf("%d",&tahug);
printf("Masukan jumlah beli Tempe Goreng : ");
scanf("%d",&tempeg);
printf("Masukan jumlah beli Bakwan       : ");
scanf("%d",&bakwan);
printf("Masukan jumlah beli ES Teh       : ");
scanf("%d",&teh);
printf("Masukan jumlah beli ES Jeruk     : ");
scanf("%d",&jeruk);
printf("\n");
printf("Masukan Uang tunai : Rp");
scanf("%d",&uang);
printf("\n");

total=(ngoreng*15000)+(nrames*10000)+(tahug*2000)+(tempeg*2000)+(bakwan*3000)+(teh*3000)+(jeruk*5000);
kembalian=uang-total;

printf("-------Struk-------\n");
printf("Uang      :Rp%d\n",uang);
printf("Total     :Rp%d\n",total);
if (total <100000)
    printf("");
if (total>=100000)
    printf("Selamat Anda mendapatkan diskon 10%");
printf("Kembalian :Rp%d\n",kembalian);
printf("-------------------\n");
printf("Selamat menikmati");
printf("\n");
printf("\nApakah anda mau memesan lagi (Y/T)");
scanf(" %c", &ulang);
}
return 0;
}
