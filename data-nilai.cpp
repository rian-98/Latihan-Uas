#include <iostream>
using namespace std;

struct Nilai{
    string nama;
    int nilai;
};

Nilai dataNilai[100];
int jumlahNilai = 0;

void inputNilai(){

    cin.ignore();

    cout << "\nNama Siswa : ";
    getline(cin,dataNilai[jumlahNilai].nama);

    cout << "Nilai : ";
    cin >> dataNilai[jumlahNilai].nilai;

    jumlahNilai++;
}

void tampilNilai(){

    cout << "\n=== DATA NILAI ===\n";

    for(int i=0;i<jumlahNilai;i++){
        cout << dataNilai[i].nama
             << " : "
             << dataNilai[i].nilai
             << endl;
    }
}

void sortingNilai(){

    for(int i=0;i<jumlahNilai-1;i++){
        for(int j=0;j<jumlahNilai-i-1;j++){

            if(dataNilai[j].nilai <
               dataNilai[j+1].nilai){

                swap(dataNilai[j],
                     dataNilai[j+1]);
            }
        }
    }

    cout << "\nData berhasil diurutkan\n";
}