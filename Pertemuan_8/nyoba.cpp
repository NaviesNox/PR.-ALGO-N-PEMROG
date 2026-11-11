#include <iostream>
#include <cmath>



using namespace std;

bool cariNama(string validasi,string nama){
    if( validasi.find("Navies") != string::npos){
        return true;
    }
    return false;
}

int main(){
    cout << "2 pangkat 5 : " << pow(2,5) << endl;
    cout << "square: " << sqrt(4) << endl;
    cout << "floor: " << floor(3.7) << endl;
    cout << "ceil: " << ceil(3.2) << endl;

    string validasi = "Muhammad Navies Ramadhan";
    cout << "panjang string : " << validasi.length() << endl;
    cout<< "Tampilkan bagian : " << validasi.substr(0,3) << endl;

    string nim = "123260126";
    cout << "Tampilkan hanya bagian 26 : " << nim.substr(3,2) << endl;

    if(nim.substr(5,2) == "26"){
        cout << "Angkatan 26" << endl;
    }
    if(nim.substr(0,3) == "123"){
        cout << "Prodinya adalah informatika" << endl;
    }
    string nama;
    cout<< "Siapakah nama anda: "; cin>> nama;

    bool penampung = cariNama(validasi,nama);
    if(penampung){
        cout << "Namanya :" << "Navies" << endl;
    }else{
        cout << "Namanya bukan Navies" << endl;
    }
}