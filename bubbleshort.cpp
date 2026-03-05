#include <iostream>
#include <string>
using namespace std;

int arr[20]; // deklarasi variable global array a dengan ukuran 20
int n; // deklarasi variable global n untuk menyimpan banyaknya elemen

void input() {
    while (true) {
        cout << "masukkan banyaknya elemen array : ";
        cin >> n;
        if (n <= 20) {
            break;
        else {
            cout << "\n array dapat mempunyai maksimal 20 elemen.\n"
        }
        }
    }
}