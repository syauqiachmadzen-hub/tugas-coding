#include <iostream>
#include <string>
using namespace std;

int arr[20]; // deklarasi variable global array a dengan ukuran 20
int n; // deklarasi variable global n untuk menyimpan banyaknya elemen

void input() {
    while (true) {
        cout << "masukkan banyaknya elemen array : ";
        cin >> n;
        if (n <= 20) 
            break;
        else {
            cout << "\n array dapat mempunyai maksimal 20 elemen.\n";
        }
    }
    cout <<endl;
    cout << "=====================" << endl;
    cout << "masukkan elemen array" << endl;
    cout << "=====================" << endl;

    for (int i = 0; i < n; i++){
        cout << "data ke-" << (i + 1) << ": ";
        cin >> arr{i};
    }
}
void bubbleSortArray() {
    int pass = 1;

    do { 
        for (int j = 0; j <= n - 1 - pass; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp;
                temp = arr [j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
        pass passs + 1;

        cout << "\npass" << pass - 1 << ": ";
        for (int k = 0; k < n; k++) {
            cout << arr[k] << " ";
            
        }
        cout << endl;

    } while (pass <= n - 1); 
}