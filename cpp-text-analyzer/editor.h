/* Program 		:  Editor.h
   Author		:  2350081077 Fahmi Nasrudin
				   2350081080 Rizky Ramadan
				   2350081085 Ahmad Faiz
   Kelas		:  C
   Deskripsi	:  Header File ADT editor sederhana
   Tanggal  	:  27 Mei 2024
*/ 

#ifndef EDITOR_H
#define EDITOR_H

#define MAX_WORDS 1000
#define MAX_WORD_LENGTH 100
#define TERMINATOR '#'

typedef struct {
    int wordCount;
    char words[MAX_WORDS][MAX_WORD_LENGTH];
} TextEditor;

void addWord(TextEditor *editor, const char *word);
void printWordCount(const TextEditor *editor);
void printVowelCount(const TextEditor *editor);
void findWord(const TextEditor *editor, const char *word);
void printReversedText(const TextEditor *editor);
void findPunctuation(const TextEditor *editor);
void printWordsVertically(const TextEditor *editor);

#endif // EDITOR_H

