#include <iostream>

using namespace std;

union orang{

int gaji;

int umur;

};

int main(){
 union orang pegawai;
 
pegawai.gaji = 100;

pegawai.umur = 17;

cout <<"gaji pegawai = " << pegawai.gaji << endl;

cout <<"umur pegawai = " << pegawai.umur <<endl;

}
