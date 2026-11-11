#include <iostream>
#include <string>
#include <cstdio>
#include <cstdlib>
#include <iomanip>
#include <vector>
#include <queue>
#include <cmath>
#include <algorithm>
#include <deque>
#include <map>
#include <set>

using namespace std;
int BATAS_KELULUSAN = 70; //contoh variabel global
int a, b; //contoh variabel global
void inputData(string &nama, string &nim, float &tugas, float &uts, float &uas);
void garis();
void tampilkanJudul();
void tampilkanData(string data1, string data2, float data3, float data4, float data5);
float hitungRata(float data1, float data2, float data3);
string statusKelulusan (float rata);


int main() {
    string nama, nim;
    float tugas, uts, uas, hasil; 
    inputData(nama, nim, tugas, uts, uas);
    system("cls");
    tampilkanJudul();
    
    tampilkanData(nama, nim, tugas, uts, uas);
    garis();

    hasil = hitungRata(tugas, uts, uas);

    cout << "Rata-rata: " << hasil << endl;

    garis();
    
    string status = statusKelulusan(hasil);
    cout << "Status Kelulusan: " << status << endl;

    tampilkanJudul();
    cout << " Program input Data berhasil dimasukkan....." << endl;
    garis();
    
    return 0;
}
void inputData(string &nama, string &nim, float &tugas, float &uts, float &uas) {
    cout << "Masukkan Nama: ";
    getline(cin, nama);
    cout << "Masukkan NIM: ";
    getline(cin, nim);
    cout << "Masukkan Nilai Tugas: ";
    cin >> tugas;
    cout << "Masukkan Nilai UTS: ";
    cin >> uts;
    cout << "Masukkan Nilai UAS: ";
    cin >> uas;
    
}

void garis () {
    cout << "--------------------------------" << endl;
}
void tampilkanJudul() {
    cout << "================================" << endl;
    cout << "             Program            " << endl;
    cout << "================================" << endl;
}

void tampilkanData(string data1, string data2, float data3, float data4, float data5) {
    cout << "Nama: " << data1 << endl;
    cout << "NIM: " << data2 << endl;
    cout << "Nilai Tugas: " << fixed << setprecision(2) << data3 << endl;
    cout << "Nilai UTS: " << fixed << setprecision(2) << data4 << endl;
    cout << "Nilai UAS: " << fixed << setprecision(2) << data5 << endl;
}

float hitungRata(float data1, float data2, float data3) {
    float hasilfungsi;
    hasilfungsi = (data1 + data2 + data3) / 3;
    return hasilfungsi ;
}

string statusKelulusan (float rata) {
    if (rata >= BATAS_KELULUSAN) {
        return "Lulus";
    } else {
        return "Belum Lulus";
    }
}