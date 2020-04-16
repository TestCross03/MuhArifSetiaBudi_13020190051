#include <iostream>

using namespace std;

struct nama {

unsigned a : 1;
unsigned b : 1;
unsigned c : 1;
unsigned d : 1;
unsigned e : 1;
unsigned f : 1;
unsigned g : 1;
unsigned h : 1;
};

enum warna{
merah,kuning,hijau,biru,ungu};

int main(){
	warna b1,b2;
	union  orang{
		unsigned char bit;
		nama hewan;
	};
union orang pegawai;
	int nilai;
	cout << "masukkan nilai = "; 
	cin >> nilai;
	pegawai.bit = nilai;
	cout << "bit nilai = "<<pegawai.hewan.h << pegawai.hewan.g 
	<<pegawai.hewan.f << pegawai.hewan.e 
	<< pegawai.hewan.d << pegawai.hewan.c 
	<< pegawai.hewan.b << pegawai.hewan.a <<endl ;
	int selisih;
	b1 = merah;
	b2 = kuning;
	selisih = b2 - b1;
	cout << "selisih nilai = " << selisih << endl;
}
