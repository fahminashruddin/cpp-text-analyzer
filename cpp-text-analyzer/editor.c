#include <stdio.h>
#include <string.h>
#include "editor.h"

void addWord(TextEditor *editor, const char *word) {
	// IS: Editor teks kosong atau sudah memiliki beberapa kata.
    // FS: Menambahkan satu kata ke dalam editor jika kapasitas belum penuh.
    if ((*editor).wordCount < MAX_WORDS) {
        strcpy((*editor).words[(*editor).wordCount], word);
        (*editor).wordCount++;
    }
}

void printWordCount(const TextEditor *editor) {
	// IS: Editor teks sudah diinisialisasi.
    // FS: Menampilkan jumlah kata yang ada dalam editor.
    printf("Jumlah kata: %d\n", (*editor).wordCount);
}

void printVowelCount(const TextEditor *editor) {
	// IS: Editor teks sudah diinisialisasi.
    // FS: Menghitung dan menampilkan jumlah huruf vokal dalam semua kata di editor.
    int totalVowels = 0;
    int countA = 0, countI = 0, countU = 0, countE = 0, countO = 0;

    for (int i = 0; i < (*editor).wordCount; ++i) {
        char *word = (*editor).words[i];
        for (int j = 0; j < strlen(word); ++j) {
            switch (word[j]) {
                case 'a':
                case 'A':
                    countA++;
                    break;
                case 'i':
                case 'I':
                    countI++;
                    break;
                case 'u':
                case 'U':
                    countU++;
                    break;
                case 'e':
                case 'E':
                    countE++;
                    break;
                case 'o':
                case 'O':
                    countO++;
                    break;
            }
        }
    }

    totalVowels = countA + countI + countU + countE + countO;

    printf("==============[Jumlah Vokal]==============\n");
    printf("Jumlah Huruf Vokal: %d\n", totalVowels);
    printf("Huruf 'a': %d\n", countA);
    printf("Huruf 'i': %d\n", countI);
    printf("Huruf 'u': %d\n", countU);
    printf("Huruf 'e': %d\n", countE);
    printf("Huruf 'o': %d\n", countO);
}

void findWord(const TextEditor *editor, const char *word) {
	// IS: Editor teks sudah diinisialisasi dan memiliki beberapa kata.
    // FS: Mencari kata tertentu dalam editor dan menampilkan semua posisinya.
    int found = 0;
    printf("Kata '%s' ditemukan di posisi:", word);
    for (int i = 0; i < (*editor).wordCount; ++i) {
        if (strcmp((*editor).words[i], word) == 0) {
            if (found) {
                printf(", ");
            }
            printf("%d", i + 1);
            found = 1;
        }
    }
    if (!found) {
        printf(" tidak ditemukan");
    }
    printf("\n");
}

void reverseString(char *str) {
	// IS: Editor teks sudah diinisialisasi dan memiliki beberapa kata.
    // FS: kata yang sama dibalik urutannya, 
    int len = strlen(str);
    for (int i = 0; i < len / 2; ++i) {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}

void printReversedText(const TextEditor *editor) {
	// IS: Editor teks sudah diinisialisasi dan memiliki beberapa kata.
    // FS: Menampilkan teks dalam urutan terbalik.
    printf("Teks secara terbalik:\n");
    for (int i = 0; i < (*editor).wordCount; ++i) {
        char reversedWord[MAX_WORD_LENGTH];
        strcpy(reversedWord, (*editor).words[i]);
        reverseString(reversedWord);
        printf("%s ", reversedWord);
    }
    printf("\n");
}

void findPunctuation(const TextEditor *editor) {
	// IS: Editor teks sudah diinisialisasi dan memiliki beberapa kata.
    // FS: Menemukan dan menampilkan tanda baca dalam teks.
    int countPeriod = 0, countComma = 0, countQuestion = 0, countExclamation = 0;
    for (int i = 0; i < (*editor).wordCount; ++i) {
        char *word = (*editor).words[i];
        for (int j = 0; j < strlen(word); ++j) {
            switch (word[j]) {
                case '.':
                    countPeriod++;
                    break;
                case ',':
                    countComma++;
                    break;
                case '?':
                    countQuestion++;
                    break;
                case '!':
                    countExclamation++;
                    break;
            }
        }
    }

    int totalPunctuation = countPeriod + countComma + countQuestion + countExclamation;

    printf("Total Tanda Baca: %d\n", totalPunctuation);
    printf("Titik: %d\n", countPeriod);
    printf("Koma: %d\n", countComma);
    printf("Tanda tanya: %d\n", countQuestion);
    printf("Tanda seru: %d\n", countExclamation);
}

void printWordsVertically(const TextEditor *editor) {
	// IS: Editor teks sudah diinisialisasi dan memiliki beberapa kata.
    // FS: Mencetak setiap kata secara vertikal (ke bawah).
    printf("Setiap kata secara vertikal:\n");
    for (int i = 0; i < (*editor).wordCount; ++i) {
        printf("%s\n", (*editor).words[i]);
    }
}

