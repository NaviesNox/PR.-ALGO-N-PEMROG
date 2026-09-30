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

int main() {
    system("cls");

    double saldo = 500000;
    double belanja, totalBelanja,sisaSaldo;

    cout << "Masukkan Total Belanja : ";
    cin >> belanja;

    if (belanja > 100000)
    {
        cout<< "Anda Mendapat diskon"<< endl;
        totalBelanja =  belanja -(belanja * 0.1);
        sisaSaldo = saldo - totalBelanja;
        if (saldo >=totalBelanja)
        {
            cout<< "total belanja adalah " << totalBelanja << endl;

            cout<< "sisa saldo adalah" << sisaSaldo<< endl;
        }
        else {
            cout<< "saldo tidak cukup";
        }
        
    

    }else{
            totalBelanja = belanja;
            sisaSaldo = saldo - totalBelanja;

            cout<< "total belanja adalah " << totalBelanja << endl;

            cout<< "sisa saldo adalah" << sisaSaldo<< endl;
        
    }
    
    return 0;
}