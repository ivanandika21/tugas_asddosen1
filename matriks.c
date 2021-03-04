#include <stdio.h>
#include <stdlib.h>

// Nama	: Ivan Andika Surya
// NIM	: 672019171

int baris, kolom, i, j, matriksA[100][100], matriksB[100][100];
char pilih;
//-----------------------------------------------------------------
void main(){	
  	printf("Masukkan jumlah Baris Matriks : ");
  	scanf("%d", &baris);
	printf("Masukkan jumlah Kolom Matriks : ");
  	scanf("%d", &kolom);
//-----------------------------------------------------------------
  	printf("\nMasukkan Data Matriks A : \n");
  	for (i = 0; i < baris; i++) {
    	for (j = 0; j < kolom; j++) {
      		scanf("%d", &matriksA[i][j]);
    	}
  	}
  	printf("\nMasukkan Data Matriks B : \n");
  	for (i = 0; i < baris; i++) {
    	for (j = 0; j < kolom; j++) {
      		scanf("%d", &matriksB[i][j]);
    	}
	}
	menu();
}

void menu(){
    menu_utama:
    system("cls");
		printf(" ----------------------------------------\n");
		printf(" =============== MATRIKS ================\n");
		printf(" ----------------------------------------\n\n");
		printf(" 1. Lihat Matriks Awal\n");
		printf(" 2. Penjumlahan Matriks\n");
		printf(" 3. Pengurangan Matriks\n");
		printf(" 4. Perkalian Matriks\n");
		printf(" 5. Keluar\n");
		printf(" Silakan masukkan pilihan anda : ");
		scanf("%s", &pilih);
			switch (pilih){
				case '1' : {
					matriks_awal();
				}
				case '2' : {
					printf("\n Hasil Penjumlahan Matriks adalah : \n ");
  					for (i = 0; i < baris; i++) {
	    				for (j = 0; j < kolom; j++) {
	      				printf("%d \t", matriksA[i][j] + matriksB[i][j]);
	    				}
    				printf("\n ");
  				}	
					system("pause");
					goto menu_utama;
				}
				case '3' : {
					printf("\n Hasil Pengurangan Matriks adalah : \n ");
  					for (i = 0; i < baris; i++) {
	    				for (j = 0; j < kolom; j++) {
	      					printf("%d \t", matriksA[i][j] - matriksB[i][j]);
	    				}
    					printf("\n ");
  					}
					system("pause");
					goto menu_utama;
				}
				case '4' : {
					printf("\n Hasil Perkalian Matriks adalah : \n ");
  					for (i = 0; i < baris; i++) {
	    				for (j = 0; j < kolom; j++) {
	      					printf("%d \t", (matriksA[i][0] * matriksB[0][j])+(matriksA[i][1] * matriksB[1][j]));
	    				}
    					printf("\n ");
  					}
					system("pause");
					goto menu_utama;
				}
				case '5' : {
					printf("\n Terimakasih!\n ");
					printf("Ivan Andika Surya, 2021\n");
					exit(EXIT_SUCCESS);
				}
				default : {
					printf("\n Mohon masukkan nomor menu dengan benar!\n\n ");
					system("pause");
					goto menu_utama;
				}
			}
}
//----------------------------------------------------------------- 
void matriks_awal(){
	printf("\n Matriks A yang telah diinput adalah : \n ");
	for (i = 0; i < baris; i++) {
	    for (j = 0; j < kolom; j++) {
	      	printf("%d \t", matriksA[i][j]);
	    }
	    printf("\n ");
	}
	printf("\n Matriks B yang telah diinput adalah : \n ");
  	for (i = 0; i < baris; i++) {
	    for (j = 0; j < kolom; j++) {
	      	printf("%d \t", matriksB[i][j]);
	    }
	    printf("\n ");
	}
	system("pause");
	menu();
}

