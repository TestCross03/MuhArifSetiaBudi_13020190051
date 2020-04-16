#include <iostream>

using namespace std;

struct orang{

char nama[30];

int umur;

};

void muncul (struct orang *st){

cout << "nama = " << st->nama << endl;

cout <<"umur = " << st->umur;

}

int main(){

struct orang pegawai = {"arif",15};
muncul(&pegawai);

}
