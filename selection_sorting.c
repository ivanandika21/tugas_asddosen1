#include <stdio.h>
#include <stdlib.h>

// Nama	: Ivan Andika Surya
// NIM	: 672019171
FILE *fp;
    char* filename = "./list.txt";
    int angka[200];
    int i, j, tampung, angka_char, jumlah;
    char pilih;
    
void main(){
    fp = fopen(filename, "r");
    while(fscanf(fp, "%i", &angka_char) > 0) {
        angka[i] = angka_char;
        printf(" %i\n", angka[i]);
        i++;
        jumlah++;
    }
    menu();
}
    
void menu(){
    menu_utama:
    system("cls");
		printf(" ----------------------------------------\n");
		printf(" ========== SELECTION SORTING ===========\n");
		printf(" ----------------------------------------\n\n");
		printf(" 1. Lihat Data Awal\n");
		printf(" 2. Lihat Data Terkini\n");
		printf(" 3. Sort Ascending\n");
		printf(" 4. Sort Descending\n");
		printf(" 5. Keluar\n");
		printf(" Silakan masukkan pilihan anda : ");
		scanf("%s", &pilih);
			switch (pilih){
				case '1' : {
					data_awal();
				}
				case '2' : {
					printf("\n Data terkini yaitu sebagai berikut :\n");
					for (i = 0; i < jumlah; i++) {
						printf(" %i\n", angka[i]);
					}
					system("pause");
					goto menu_utama;
				}
				case '3' : {
					for (i = 0; i < jumlah; i++) {
						for (j = i; j < jumlah; j++) {
							if (angka[i] > angka[j]) {
								tampung = angka[i];
								angka[i] = angka[j];
								angka[j] = tampung;
							}
						}
					}
					printf("\n Data setelah sorting adalah :\n");
					for (i = 0; i < jumlah; i++) {
						printf(" %i\n", angka[i]);
					}
					system("pause");
					goto menu_utama;
				}
				case '4' : {
					for (i = 0; i < jumlah; i++) {
						for (j = i; j < jumlah; j++) {
							if (angka[i] < angka[j]) {
								tampung = angka[i];
								angka[i] = angka[j];
								angka[j] = tampung;
							}
						}
					}
					printf("\n Data setelah sorting adalah :\n");
					for (i = 0; i < jumlah; i++) {
						printf(" %i\n", angka[i]);
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
	fclose(fp);
}

void data_awal(){
	fp = fopen(filename, "r");
	printf("\n Data awal yaitu sebagai berikut :\n");
    while(fscanf(fp, "%i", &angka_char) > 0) {
        angka[i] = angka_char;
        printf(" %i\n", angka[i]);
        i++;
    }
	system("pause");
	menu();
}
