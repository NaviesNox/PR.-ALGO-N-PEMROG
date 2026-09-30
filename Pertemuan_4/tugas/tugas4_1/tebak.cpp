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
    int AR = 67;
    int i;
    do
    {
        cout << "Masukkan Angka tebakan mu : " << endl;
        cin >> i;
        if (i != AR)
        {
            cout << "Angka Tebakan salah \n" ;
            if (i > AR ){
                cout << "ANGKA MU TERLALU BESAR"  << endl;
            }else{
                cout << "ANGKA MU TERLALU KECIL"  << endl;

            }
        }else{
            cout << "Tebakan anda benar : " << AR << endl;
        }
        
    } while (i != AR);
    

    return 0;
}