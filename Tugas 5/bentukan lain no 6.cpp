#include <iostream>

using namespace std;

struct orang{

char nama[30];

int umur;

};

int main(){
	int i;

struct orang pegawai [2];

for ( i=0;i<2;i++){

cout << "Pegawai ke- " << i + 1;

cout << "\n masukkan umur: ";

cin >>pegawai[i].umur;

cout << "masukkan nama : ";

cin >> pegawai[i].nama;

}

cout<<endl;

for (int i=0;i<2;i++){

cout << "data Pegawai ke - " << i + 1 << endl;

cout << " Nama pegawai : " <<pegawai[i].nama << endl;

cout << " Umur Pegawai : " << pegawai[i].umur << endl;

}

}
