#include<stdio.h>
#include<conio.h>

void main()
{
int x,y;
printf("PROGRAM MENGETAHUI KUADARN SUATU KOORDINAT\n\n");
printf("Masukan koordinat x : ");
scanf("%i",&x);
printf("Masukan Koordinat y : ");
scanf("%i",&y);

if(x>0 && y>0)
        printf("KUADRAN I");
if(x>0 && y<0)
    printf("KUADRAN II");
if(x<0 && y<0)
    printf("KUADRAN III");
if(x<0 && y>0)
        printf("KUADRAN IV");
if(x==0 && y==0)
    printf("TITIK PUSAT");
getch();
}
