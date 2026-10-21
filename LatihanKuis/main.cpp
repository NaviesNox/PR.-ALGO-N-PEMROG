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
#include <conio.h>
#include <limits>

using namespace std;
//  Mini Tamago (Virtual Pet)
int main() {
    int kenyang = 50,
    energi = 50,
    aksi = 1, 
    hari = 1 , 
    pilihan  = 0, 
    senang = 50;
    bool gameBerjalan = true;
    system("cls");
    cout << "=======================================================" << endl ;
    cout << "        Simulasi Virtual PET (TAMAGOTCHI)  DAY-" << hari << endl ;
    cout << "=======================================================" << endl ;

    while (gameBerjalan)
    {
        if (hari >7)
        {
            cout<< "\n [Sistem] Selamat Kamu berhasil merawat peliharaan mu selama seminggu (7 hari)" << endl;
            cout << "Press any key to continue...";
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            _getch();
            break;
        }
        
        system("cls");
        cout << "=======================================================" << endl ;
        cout << "        Simulasi Virtual PET (TAMAGOTCHI)  DAY-" << hari << endl ;
        cout << "=======================================================" << endl ;
        cout << "Kondisi pet saat ini : " << endl ;
        cout << "- Kenyang : "  << kenyang<< endl ;
        cout << "- Energi  : " << energi <<endl ;
        cout << "- Senang  : " << senang << endl ;
        cout << "=======================================================" << endl ;
        cout << "Aksi Ke-" << aksi << " dari 3 "<< endl ;
        cout << "=======================================================" << endl ;
        cout << "Pilih Aksi : " << endl;
        cout << "1. Beri makan" << endl ;
        cout << "2. Ajak main" << endl ;
        cout << "3. Tidur" << endl ;
        cout << "4. Lewati hari" << endl ;
        cout << "5. Keluar Game" << endl ;

        cout << "Pilihan kamu (1-5) : ";
        while (!(cin >> pilihan))
        {
            cout << "Harus Berupa Angka" << endl; 
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout <<"Pilihan kamu (1-5) : ";
        }
    
            switch (pilihan)
            {
            case 1:
                kenyang = kenyang +20;
                energi = energi -5;
                aksi = aksi+1;
                cout <<"[Sistem] Peliharan merasa kenyang (+20 Kenyang, -5 Energi)" << endl;
                break;
            case 2:
                senang = senang + 20;
                kenyang = kenyang -15;
                energi = energi -10;
                aksi = aksi+1;
                cout <<"[Sistem] Peliharan merasa Senang (+20 Senang, -15 Kenyang, dan -10 Energi)"<< endl;
                break;
            case 3:
                kenyang = kenyang -10;
                energi = energi +30;
                aksi = aksi+1;
                cout <<"[Sistem] Peliharan merasa segar (+30 Energi, -10 Kenyang)"<< endl;
                break;
            case 4:
                if (kenyang>=40 && energi >= 40)
                {
                    hari = hari+1;
                    aksi = 1;
                    cout<<" [Sistem] melewati hari" << endl;

                }else{
                    cout<<" [Sistem] Tidak dapat melewati hari" << endl;
                }
                
                break;
            case 5:
                gameBerjalan = false;
                    cout << "[Sistem] Game Telah Berakhir." << endl ;
                break;
            default:
                    cout << "[Sistem] Pilihan tidak tersedia, pilih 1-5" << endl ;
                break;
            }
        kenyang = (kenyang>100) ? 100 : kenyang;
        energi = (energi >100) ? 100 : energi;
        senang = (senang >100) ? 100 : senang;
        if (kenyang <=0 || energi <=0 || senang <= 0) {
            gameBerjalan = false;
            system("cls");
            cout<< "[Sistem] Game Over!! Peliharaan mu mati karena salah satu kondisinya 0." << endl;
        }else if(aksi > 3) {
            hari = hari+1;
            aksi = 1;
            cout << " [Sistem] Aksi hari ini telah habis (Max 3 aksi). Hari berganti menjadi hari-" << hari << endl;
        }
    
        cout << "Press any key to continue...";
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            _getch();

    }
    return 0;
}
