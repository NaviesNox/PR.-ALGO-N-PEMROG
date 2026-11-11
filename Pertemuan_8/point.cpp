#include <iostream>
#include <cmath>
using namespace std;

void garisBatas(){
    cout << "------------------------------------------------" << endl;
}

bool validasiLayanan(int layanan){
    if(layanan == 1 || layanan == 2){
        return true;
    }else{
        return false;
    }
}

long hitungBiayaDasar(int jenis, double berat){
    if(jenis == 1){
        return berat * 6000;
    }else if(jenis == 2){
        return berat * 9000;
    }
    return 0;
}
long hitungDiskon(double berat){

    if(berat > 5.0){
        return 3000;
    }
    return 0;
}

int getEstimasiHari(int jenis){
    if(jenis == 1){
        return 3;
    }else if(jenis == 2){
        return 1;
    }
    return 0;
}
void layananOutput(int layanan){
if (layanan == 1){
        cout << "Layanan      : Reguler" << endl;
    }else if (layanan == 2){
        cout << "Layanan      : Express" << endl;
    }
}

void cetakNota(string nama, long berat, int layanan){

    string estimasiJadi = to_string(getEstimasiHari(layanan)) + " hari";
    long biayaDasar = hitungBiayaDasar(layanan, berat);
    long diskon = hitungDiskon(berat);
    long totalBayar = biayaDasar - diskon;

    

    garisBatas();
    cout << "Nota Transaksi" << endl;
    garisBatas();
    cout << "Pelanggan    : " << nama<< endl;
    cout << "Berat        : " << berat << " kg" << endl;
    layananOutput(layanan);
    cout << "Biaya Dasar  : " << biayaDasar << endl;
    cout << "Diskon       : " << diskon << endl;
    cout << "Total Bayar  : " << totalBayar << endl;
    cout << "Estimasi Jadi: " << estimasiJadi << endl;
}

int main(){
//Prep buat dapet nilai tambahan (Point)
system("cls");
    long berat;
    string nama;
    int layanan;

    garisBatas();
    cout <<"    KASIR LAUNDRY MAHASISWA" << endl;
    garisBatas();
    cout << " Nama Pelanggan : "; getline(cin, nama);
    cout << " Berat Cucian (kg) : "; cin >> berat;
    cout << " Pilih Layanan  : "<< endl;
    cout << " 1. Reguler (Rp. 6.000/kg - 3 hari) " << endl;
    cout << " 2. Express (Rp. 9.000/kg - 1 hari) " << endl;
    cout << " Pilihan Layanan  : "; cin >> layanan;

    if(!validasiLayanan(layanan)){
        cout << "Pilihan layanan tidak valid!" << endl;
        return 1;
    }

    //Output Nota Transaksi
    cetakNota(nama, berat, layanan);
    

    return 0;
}