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
    
// Nested loop Guys
    // Membuat Segitiga siku siku
    int n = 4;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    // Membuat Segitiga siku siku terbalik
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    
    // Membuat Segitiga sama kaki
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) { // Loop untuk mencetak spasi
            cout << " ";
        }
        for (int k = 1; k <= 2 * i - 1; k++) {  // Loop untuk mencetak bintang
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}