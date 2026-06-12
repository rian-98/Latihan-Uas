#include <iostream>
using namespace std;

struct Jadwal{
    string hari;
    string jam;
    string mapel;
};

Jadwal jadwal[100];
int jumlahJadwal = 0;

void tambahJadwal(){

    cin.ignore();

    cout << "\nHari : ";
    getline(cin,jadwal[jumlahJadwal].hari);

    cout << "Jam : ";
    getline(cin,jadwal[jumlahJadwal].jam);

    cout << "Mapel : ";
    getline(cin,jadwal[jumlahJadwal].mapel);

    jumlahJadwal++;

    cout << "\nJadwal berhasil ditambah\n";
}

void tampilJadwal(){

    cout << "\n=== JADWAL ===\n";

    for(int i=0;i<jumlahJadwal;i++){
        cout << jadwal[i].hari
             << " | "
             << jadwal[i].jam
             << " | "
             << jadwal[i].mapel
             << endl;
    }
}