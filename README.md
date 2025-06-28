# C++ Text Analyzer

> Sebuah program utilitas berbasis command-line (CLI) sederhana yang dibuat dengan C++ untuk melakukan analisis dan manipulasi teks. Proyek ini dibuat sebagai bagian dari tugas mata kuliah di Jurusan Teknik Informatika.

## Tampilan Program (Screenshot)

![Tampilan Program C++ Text Analyzer](cpp-text-analyzer/screenshot/Screenshot%202025-06-28%20095703.jpg)

## Fitur Utama (Features)

Program ini memiliki menu dengan beberapa pilihan fungsionalitas, antara lain:
* Menampilkan jumlah total kata dalam teks.
* Menampilkan jumlah huruf vokal (a, i, u, e, o).
* Mencari kata tertentu yang ada di dalam teks.
* Mencetak keseluruhan teks secara terbalik.
* Menemukan dan menghitung jumlah tanda baca (titik, koma, tanda tanya, tanda seru).
* Mencetak setiap kata dalam teks secara vertikal.

## Teknologi yang Digunakan (Tech Stack)

* **C++** (menggunakan library standar seperti `<iostream>`, `<string>`, `<vector>`)

*(Catatan: Untuk proyek web Anda nanti, Anda bisa tulis di sini: PHP, Laravel, MySQL, JavaScript, dll.)*

## Cara Menjalankan Proyek (Installation & Usage)

Berikut adalah langkah-langkah untuk mengkompilasi dan menjalankan program ini di lingkungan yang mendukung C++.

**1. Prasyarat (Prerequisites)**
* Pastikan Anda memiliki C++ compiler yang terpasang di sistem Anda (misalnya, g++ pada Linux/MacOS, atau MinGW pada Windows).

**2. Langkah-langkah Kompilasi dan Eksekusi**

```bash
# Clone repository ini (opsional, jika ingin mengunduh via Git)
git clone [https://github.com/fahminashruddin/cpp-text-analyzer.git](https://github.com/fahminashruddin/cpp-text-analyzer.git)

# Masuk ke direktori proyek
cd cpp-text-analyzer

# Kompilasi file C++ Anda. Ganti 'main.cpp' dengan nama file utama Anda.
g++ main.cpp -o text_analyzer

# Jalankan program yang sudah dikompilasi
./text_analyzer
