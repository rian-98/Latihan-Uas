#include <iostream>
using namespace std;

struct Mapel{
    string kode;
    string nama;
};

Mapel mapel[100];
int jumlahMapel = 0;

void tambahMapel(){

    cout << "\nKode Mapel : ";
    cin >> mapel[jumlahMapel].kode;

    cin.ignore();

    cout << "Nama Mapel : ";
    getline(cin,mapel[jumlahMapel].nama);

    jumlahMapel++;

    cout << "\nMapel berhasil ditambah\n";
}

void tampilMapel(){

    cout << "\n=== DATA MAPEL ===\n";

    for(int i=0;i<jumlahMapel;i++){
        cout << mapel[i].kode
             << " - "
             << mapel[i].nama << endl;
    }
}