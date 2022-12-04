#include <iostream>
using namespace std;

void caraPertama() {
    string n;
    cin >> n;
    int jumlah = 0;
    for (int i = 0; i < n[i]; i++) {
        int a = (int)n[i] - 48;
        jumlah += a;
    }
    cout << jumlah << endl;
}

void caraKedua() {
    int n;
    cin >> n;
    int jumlah = 0;
    while (n > 0) {
        jumlah += (n % 10);
        n /= 10;
    }
    cout << jumlah << endl;
}

int main() {
    caraPertama();
    // caraKedua();
}