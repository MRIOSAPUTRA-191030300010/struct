#include<iostream>
using namespace std;
struct mahasiswa{
	string nama;
	int usia;
	float ipk;
	string hobi[2];
};
int main()
{
	mahasiswa mhs[2];
	
	mhs[0].nama ="andi";
	mhs[0].usia = 21;
	mhs[0].ipk  = 3.5;
	mhs[0].hobi[0]="renang";
	mhs[0].hobi[1]="futsal";
	
	mhs[1].nama ="rio";
	mhs[1].usia = 19;
	mhs[1].ipk  = 3.8;
	mhs[1].hobi[0]="travelling";
	mhs[1].hobi[1]="renang";
	
	cout<<"mhs indeks ke[0]="<<mhs[0].nama<<endl;
	cout<<"mhs indeks ke[0]="<<mhs[0].usia<<endl;
	cout<<"mhs indeks ke[0]="<<mhs[0].ipk<<endl;
	cout<<"mhs indeks ke[0]="<<mhs[0].hobi[0]<<endl;
	cout<<"mhs indeks ke[0]="<<mhs[0].hobi[1]<<endl;
	
	cout<<"mhs indeks ke[1]="<<mhs[1].nama<<endl;
	cout<<"mhs indeks ke[1]="<<mhs[1].usia<<endl;
	cout<<"mhs indeks ke[1]="<<mhs[1].ipk<<endl;
	cout<<"mhs indeks ke[1]="<<mhs[1].hobi[0]<<endl;
	cout<<"mhs indeks ke[1]="<<mhs[1].hobi[1]<<endl;
	
	system("pause");
	return 0;
}
