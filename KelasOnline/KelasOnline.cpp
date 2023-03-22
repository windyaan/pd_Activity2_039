#include <iostream>
using namespace std;

float Luaspersegipanjang(float p, float l) {
	return p * l;
}

float Luaslingkaran(float r) {
	return 3.14 * r * r;
}

float Luassegitiga(float a, float t) {
	return 0.5 * a * t;
}


int main() {

	float panjang, lebar, jejari, alas, tinggi;
	int pilihan;


	do
	{
		cout << "===================" << endl;
		cout << "======M E N U======" << endl;
		cout << "===================" << endl;

		cout << "1. luas persegi panjang" << endl;
		cout << "2. luas segitiga" << endl;
		cout << "3. luas lingkaran" << endl;
		cout << "4. exit" << endl;

		cout << "masukkan pilihan" << endl;
		cout << "\npilihan (1/2/3/4) : " << endl;
		cin >> pilihan;

		system("cls");





		switch (pilihan)
		{
		case 1:
			cout << "Masukkan panjang : ";
			cin >> panjang;
			cout << "Masukkan lebar : ";
			cin >> lebar;
			cout << "Luas persegipanjang = " << Luaspersegipanjang(panjang, lebar);
			break;

		case 2:
			cout << "Masukkan alas : ";
			cin >> alas;
			cout << "Masukkan tinggi : ";
			cin >> tinggi;
			cout << "Luas Segitiga = " << Luassegitiga(alas, tinggi);
			break;

		case 3:
			cout << "Masukkan Jari-jari : ";
			cin >> jejari;
			cout << "Luas Lingkaran = " << Luaslingkaran(jejari);
			break;

		case 4:

			break;
		default:
			cout << "Pilihan anda salah!";
			break;
		}
	} while (pilihan != 4);

}