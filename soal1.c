/*   EL2008 Praktikum Pemecahan Masalah dengan Pemrograman 2024/2025
 *   Modul               : 2 - Data Manipulation and External Files
 *   Hari dan Tanggal    : Rabu, 22 April 2026
 *   Nama (NIM)          : Kanessi Cleo Kinanti (13224100)
 *   Nama File           : soal1.c
 *   Deskripsi           : 
 *  Sebuah laboratorium otomatis menerima deretan data eksperimen dan harus segera merangkum 
    statistik pentingnya untuk operator. Namun, modul analisis yang digunakan di laboratorium itu 
    dirancang agar seluruh hasil dikembalikan melalui alamat memori yang diberikan ke fungsi, bukan 
    melalui nilai balik biasa. Anda diminta membantu menyiapkan fungsi analisis tersebut agar mesin 
    dapat melaporkan jumlah, rata-rata, nilai maksimum, dan posisi pertama kemunculan nilai 
    maksimum dengan benar. 
    Hitung statistik array menggunakan fungsi dengan parameter pointer. 
    1. Fungsi harus menerima:  
    • pointer ke elemen pertama array  
    • jumlah elemen  
    • pointer output untuk sum, average, max, dan first index of max  
    2. Indeks 0-based  
    3. Rata-rata dicetak dua digit desimal  
    4. Jika maksimum muncul beberapa kali, ambil indeks kemunculan pertama 
    Format Input:
    N a1 a2 ... aN 
    Format Output:
    SUM x 
    AVG y 
    MAX z 
    IDX k */

#include <stdio.h>

// deklarasi fungsi
void fungsi_pointer(int N, int *data_eksperimen, int *sum, float *avg, int *max, int *idx);

// main
int main() {
    int N;
    scanf("%d", &N);
    int data_eskperimen[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &data_eskperimen[i]);
    }
    int sum, max, idx;
    float avg;
    fungsi_pointer(N, data_eskperimen, &sum, &avg, &max, &idx);
    printf("SUM %d \n", sum);
    printf("AVG %.2f \n", avg);
    printf("MAX %d \n", max);
    printf("IDX %d \n", idx);
    return 0;
}

// implementasi fungsi
void fungsi_pointer(int N, int *data_eksperimen, int *sum, float *avg, int *max, int *idx) {
    *sum = 0; 
    *max = data_eksperimen[0];
    for (int i = 0; i < N; i++) {
        *sum = *sum + data_eksperimen[i];
        if (data_eksperimen[i] > *max) {
            *max = data_eksperimen[i];
            *idx = i;
        }
    *avg = (float)*sum/N;
    }
}
