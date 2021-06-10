#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int a, pem1, pem2, peny1, peny2; //pem = pembilang, peny = penyebut
	float bil1, bil2, hasil;
	char op;
	cout<<"Pilih Kalkulator"<<endl;
	cout<<"Kalkulator Desimal [1]"<<endl;
	cout<<"Kalkulator Pecahan [2]"<<endl;
	cout<<"Masukkan Pilihan Anda : ";
	cin>>a;
	system ("cls");
	
	switch (a) {
		case 1:
			cout<< "Selamat Datang di Kalkulator" <<endl;
			cout<< "Masukkan Angka Pertama : ";
			cin>> bil1;
			cout<< "Pilih Operator Aritmatika" <<endl;
			cout<< "Penjumlahan (+)" <<endl;
			cout<< "Pengurangan (-)" <<endl;
			cout<< "Pembagian (/)" <<endl;
			cout<< "Perkalian (*)" <<endl;
			cout<< "Masukkan Pilihan Anda : ";
			cin>> op;
			cout<< "Masukkan Angka Kedua : ";
			cin>> bil2;
			switch (op) {
				case '+':
					hasil=bil1+bil2;
					break;
				case '-':
					hasil=bil1-bil2;
					break;
				case '/':
					hasil=bil1/bil2;
					break;
				case '*':
					hasil=bil1*bil2;
					break;
				default :
					cout<<("Operator Aritmatika Belum Terdaftar");
			}
			cout<< "Hasilnya Adalah : "<<hasil<<endl;
			break;
		case 2:
			cout<< "Selamat Datang di Kalkulator Pecahan" <<endl;
			cout<< "               pembilang" <<endl;
			cout<< "Pecahan (n) = ----------" <<endl;
			cout<< "               penyebut" <<endl;
			cout<< "Masukkan Pembilang 1 Anda : ";
			cin>> pem1;
			cout<< "Masukkan Penyebut 1 Anda : ";
			cin>> peny1;
			cout<< "Pilih Operator Aritmatika" <<endl;
			cout<< "Penjumlahan (+)" <<endl;
			cout<< "Pengurangan (-)" <<endl;
			cout<< "Pembagian (/)" <<endl;
			cout<< "Perkalian (*)" <<endl;
			cout<< "Masukkan Pilihan Anda : ";
			cin>> op;
			cout<< "Masukkan Pembilang 2 Anda : ";
			cin>> pem1;
			cout<< "Masukkan Penyebut 2 Anda : ";
			cin>> peny2;
			break;
			default :
				cout<< "Pilihan Anda Salah" <<endl;

	}
	return 0;
}

//cout<< "" <<endl;