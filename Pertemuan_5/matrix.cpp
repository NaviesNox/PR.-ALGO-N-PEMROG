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
// Nested loop Guys
    // Membuat Matrix 
    int baris = 6;
    int kolom = 7;
    // Menggunakan looping yang sama seperti membuat segi tiga hnya coutnya yang kita modify
    for (int i = 1; i <= baris; i++) {
        for (int j = 1; j <= kolom; j++) {
            cout << "[" << i << "," << j << "]";
        }
        cout << endl;
    }

    
    
    return 0;
}