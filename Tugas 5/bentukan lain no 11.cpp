#include <iostream>

using namespace std;

struct orang {

int x;

int y;

};

typedef struct orang pegawai;

int main(){

pegawai negeri = {10,15};

cout << "nilai x = " << negeri.x << endl;

cout << "nilai y = " << negeri.y <<endl;

}
