#include<iostream>
using namespace std;
struct mobil{
	string nama;
	int keluaran;
	float berat;
	string buatan;
};
int main()
{
	mobil mo;
	
	mo.nama ="avanza";
	mo.keluaran = 2017;
	mo.berat = 1000.8;
	mo.buatan = "malaysia";
	
	cout<<mo.nama<<endl;
	cout<<mo.keluaran<<endl;
	cout<<mo.berat<<endl;
	cout<<mo.buatan<<endl;
	
	system ("pause");
	return 0;
}
