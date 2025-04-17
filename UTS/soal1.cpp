#include <iostream>
using namespace std;

int main() {
    system("clear");
    int k1, k2, k3;

    cout << "Masukkan kode ke-1 : ";
    cin >> k1;
    cout << "Masukkan kode ke-2 : ";
    cin >> k2;
    cout << "Masukkan kode ke-3 : ";
    cin >> k3;

    int totalKode = k1 + k2 + k3;

    if (totalKode >= 200 && k1 >= 50 && k2 >= 50 && k3 >= 50) {
        cout << "Aman" << endl;
    } else {
        cout << "Bahaya" << endl;
    }
}
