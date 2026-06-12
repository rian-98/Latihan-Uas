#include <iostream>
using namespace std;

struct Siswa{
    string nis;
    string nama;
    string kelas;
};

Siswa siswa[100];
int jumlahSiswa = 0;

void tambahSiswa(){
    cout << "\nNIS   : ";
    cin >> siswa[jumlahSiswa].nis;

    cin.ignore();

    cout << "Nama  : ";
    getline(cin, siswa[jumlahSiswa].nama);

    cout << "Kelas : ";
    getline(cin, siswa[jumlahSiswa].kelas);

    jumlahSiswa++;

    cout << "\nData berhasil ditambahkan\n";
}

void tampilSiswa(){
    cout << "\n=== DATA SISWA ===\n";

    for(int i=0;i<jumlahSiswa;i++){
        cout << i+1 << ". "
             << siswa[i].nis << " | "
             << siswa[i].nama << " | "
             << siswa[i].kelas << endl;
    }
}