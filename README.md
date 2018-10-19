# Praktikum2

## Latihan1.cpp : Program Menghitung Bilangan Terbesar dari 3 Bilangan

**Alur Algoritma**

1. Mendeklarasikan variabel `int A,B,C` sebagai variabel input
2. Membaca input dari keyboard `cin >> A >> B >> C`
3. Membandingkan nilai variabel **A** dengan variabel **B** & **C**
4. Kondisi **True**, maka dibandingkan nilai variabel **A** 
5. Kondisi **False**, maka dibandingkan nilai variabel **B** dengan **C**
6. Jika hasil lebih besar **B** **cout** **B** dan sebaliknya


**Flowchart Program**
![Flowchart](https://raw.githubusercontent.com/Inkamanik/Praktikum2/master/FLOWCHART1.jpg)

**Code Program Lengkap:**
```c++
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
```
![img](https://raw.githubusercontent.com/Inkamanik/Praktikum2/master/ss.PNG)

## Latihan2.cpp : Program Menghitung Bilangan Terbesar dari 4 Bilangan

**Alur Algoritma**

1. Mendeklarasikan variabel `int A,B,C,D` sebagai variabel input
2. Membaca input dari keyboard `cin >> A >> B >> C >> D`
3. Membandingkan nilai variabel **A** dengan variabel **A** dengan variabel **B** & **C** & **D**
4. Jika **True**, maka cetaklah variabel **A**
5. Dan bandingkan nilai **B** dengan **A**,**C** & **D**
6. Jika kondisi **True** maka cetaklah **B**
7. Dan variabel **C** dibandingkan lagi **B** **C** & **D**
8. Jika kondisi **True** maka cetaklah **C**
9. Dan jika kondisi **False** maka cetaklah **D**

**flowchart program**
![flowchart](https://raw.githubusercontent.com/Inkamanik/Praktikum2/master/FLOWCHARTLT2.jpg)

**CODE PROGRAM**
```c++
#include<iostream>
using namespace std;

    int main() {

        int A,B,C,D;

        cout << "Masukan bilangan 1: ";
        cin >> A;
        cout << "Masukan bilangan 2: ";
        cin >> B;
        cout << "Masukan bilangan 3: ";
        cin >> C;
        cout << "Masukan bilangan 4: ";
        cin >> D;

        if (A>B && A>C && A>D) cout << "Bilangan terbesar = " << A << endl;
        else

        if (B>A && B>C && B>D) cout << "Bilangan terbesar = " << B << endl;

        else {
            if (C>A && C>B && C>D) cout << " Bilangan terbesar = " << C << endl;
            else
                cout << "Bilangan terbesar = " << D;
        }
    }

```

hasilnya : 
![img](https://raw.githubusercontent.com/Inkamanik/Praktikum2/master/ss1.PNG)# Praktikum2
