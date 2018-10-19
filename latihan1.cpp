#include<iostream>

using namespace std;

int main () {
    int A,B,C;
    cout<<"Masukan Bilangan 1: ";
    cin>> A;
    cout<<"Masukan Bilangan 2: ";
    cin>> B;
    cout<<"Masukan Bilangan 3: ";
    cin>> C;

    if (A>B && A>C) cout << "Bilaangan terbesar =" << A << endl;
    else
    {

        if (B>A && B>C) cout << "Bilangan terbesar =" << B << endl;
        else
            cout << "Bilangan terbesar =" << C;


    }
}
