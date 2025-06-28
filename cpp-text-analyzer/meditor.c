/* Program 		:  MEditor.c
   Author		:  2350081077 Fahmi Nasrudin
				   2350081080 Rizky Ramadan
				   2350081085 Ahmad Faiz
   Kelas		:  C
   Deskripsi	:  Header File ADT editor sederhana
   Tanggal  	:  27 Mei 2024
*/ 
#include <stdio.h>
#include <stdlib.h>
#include "editor.h"

int main() {
    TextEditor editor = { .wordCount = 0 };
    char input[MAX_WORD_LENGTH];
    char searchWord[MAX_WORD_LENGTH];
    int choice;

    // Meminta pengguna untuk memasukkan kata-kata
    printf("Masukkan kata-kata (akhiri dengan '%c'):\n", TERMINATOR);
    while (1) {
        scanf("%s", input);
        // Berhenti jika menemukan terminator
        if (input[0] == TERMINATOR && input[1] == '\0') {
            break;
        }
        // Menambahkan kata ke editor
        addWord(&editor, input);
    }

    // Menampilkan menu pilihan
    while (1) {
        printf("======================================================================\n");
        printf("Pilih opsi yang diinginkan:\n");
        printf("1. Menampilkan jumlah kata\n");
        printf("2. Menampilkan banyaknya huruf vokal\n");
        printf("3. Mencari kata tertentu\n");
        printf("4. Mencetak semua teks secara terbalik\n");
        printf("5. Menemukan tanda baca (titik, koma, tanda tanya dan tanda seru)\n");
        printf("6. Mencetak setiap kata secara vertikal (ke bawah)\n");
        printf("7. Keluar\n");
        printf("Masukkan pilihan Anda: ");
        scanf("%d", &choice);

        printf("\n");  // Menambahkan baris kosong untuk output yang lebih rapi

        // Menangani pilihan pengguna
        switch (choice) {
            case 1:
                printWordCount(&editor);
                break;
            case 2:
                printVowelCount(&editor);
                break;
            case 3:
                printf("Masukkan kata yang ingin dicari: ");
                scanf("%s", searchWord);
                findWord(&editor, searchWord);
                break;
            case 4:
                printReversedText(&editor);
                break;
            case 5:
                findPunctuation(&editor);
                break;
            case 6:
                printWordsVertically(&editor);
                break;
            case 7:
                printf("Keluar dari program.\n");
                exit(0);
            default:
                printf("Pilihan tidak valid, silakan coba lagi.\n");
        }
    }

    return 0;
}




