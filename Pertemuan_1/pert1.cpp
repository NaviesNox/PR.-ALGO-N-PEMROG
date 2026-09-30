#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "======================= INFORMASI MAHASISWA =================" << endl;
    string nama ;
    int age ;
    char kelas ;
    int nilai_uts = 0;
    int nilai_uas = 0;
    double bobotUTS = 0.4; //40%
    double bobotUAS = 0.6; //60%

    cout << "Masukkan Nama Anda: ";
    getline(cin, nama);

    cout << "Masukkan Umur Anda: ";
    cin >> age;
    cout << "Masukkan Kelas Anda: ";
    cin >> kelas;
    cout << "Masukkan Nilai UTS Anda: ";
    cin >> nilai_uts;
    cout << "Masukkan Nilai UAS Anda: ";
    cin >> nilai_uas;

    double hasilNilai = nilai_uts * bobotUTS + nilai_uas * bobotUAS;

    cout << "Nama Mahasiswa : " << nama << endl;
    cout << "Umur Mahasiswa : " << age << endl;

    cout << "Saya berada di kelas: " << kelas << endl;
    cout << "Nilai total saya adalah : " << hasilNilai  << endl;    
    
    return 0;
}

