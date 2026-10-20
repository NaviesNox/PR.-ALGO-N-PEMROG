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
    string Grade;
    cout << "Masukkan Nilai :  ";
    cin >> nilai;
    
    if (nilai <= 100)
    {
        if (nilai >=85)
        {
            Grade = "A";
            cout << "Grade : " << Grade ;
        }else if (nilai >=70)
        {
            Grade = "B";
            cout << "Grade : " << Grade ;

        }else if (nilai >=55)
        {
            Grade = "C";
            cout << "Grade : " << Grade ;

        }else if (nilai >=40)
        {
            Grade = "D";
            cout << "Grade : " << Grade ;

        }else{
            Grade = "E";
            cout << "Grade : " << Grade ;

        }
        
    }else
    {
        cout << "Nilai tak Valid";
    }
    return 0;
}