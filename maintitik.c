/************************************/
/* Program   : maintitik.c */
/* Deskripsi : aplikasi driver modul Titik */
/* NIM/Nama  : 24060120120012/Adinda Destifany Zenniar*/
/* Tanggal   : 2 September 2021*/
/***********************************/
#include <stdio.h>
#include "titik.h"

int main(){
    /*Kamus main*/
    Titik P;
    Titik P2;
    int x; /*absis*/
    int y; /*ordinat*/

    /*Algoritma*/
    printf("**********KONSTRUKTOR**********\n");
    makeTitik(&P);
    printf("**********SELECTOR**********\n");
    printf("Titik P = (%d,%d)\n", getAbsis(P), getOrdinat(P));

    printf("Masukkan x :");
    scanf("%d", &x);
    printf("Masukkan y :");
    scanf("%d", &y);

    printf("**********MUTATOR**********\n");
    setAbsis(&P, x);
    setOrdinat(&P, y);
    printf("Titik Akhir = (%d,%d)\n", getAbsis(P), getOrdinat(P));

    printf("**********PREDIKAT**********\n");
    if (isOrigin(P)){
        printf("Titik A merupakan titik origin\n");
    }
    else{
        printf("Titik A bukan titik origin\n");
    }

    printf("**********SUBRUTIN LAIN**********\n");
    geserXY(&P, 2, 2);
    printf("Titik setelah digeser (2,2) = (%d,%d)\n", getAbsis(P), getOrdinat(P));

    refleksiSumbuX(&P);
    printf("Titik setelah direfleksi sumbu x = (%d,%d)\n", getAbsis(P), getOrdinat(P));

    refleksiSumbuY(&P);
    printf("Titik setelah direfleksi sumbu y = (%d,%d)\n", getAbsis(P), getOrdinat(P));

    printf("Kuadran = %d\n", Kuadran(P));
    setAbsis(&P2,0);
    setOrdinat(&P2,0);
    printf("Jarak Titik P dengan P2(0,0) = %f", Jarak(P,P2));

    return 0;
}

