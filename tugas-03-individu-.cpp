// tugas 03 perulangan.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    int data, ganjil = 0, genap = 0;
    cout << "Masukkan jumlah data: "; cin >> data;

    for (int a = 0; a <= data; a++) {
        if (a % 2 == 0) {
            genap += a;
        }
        else {
            ganjil += a;
        }
    }

    cout << "Jumlah total bialangan ganjil: " << ganjil;
    cout << "\nJumlah total bilangan genap:  " << genap;


    return 0;
}
