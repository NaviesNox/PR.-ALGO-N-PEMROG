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
    int nilai;
    string hasil;

    cout << "Masukkan Nilai : ";
    cin >> nilai;
    hasil  = (nilai %2 == 0) ? "Genap" : "Ganjil";
    cout << "NILAI is : " << hasil ;

    return 0;
}