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
    // Sintax untuk melewati angka 5 dan 7
    // Menggunakan continue untuk melewati angka 5 dan 7
    for (int i = 1; i <= 10; i++)
    {
        if (i == 5){
            continue;
        }else if (i == 7){
            continue;
        }
        cout << i << endl;
    }
    

    return 0;
}