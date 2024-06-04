#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
	string baris;

	//membuka file dalam mode menulis.
	ofstream outfile;
	//menunjukan ke sebuah nama file 
	outfile.open("contohfile.txt");

	cout << ">= Menulis file, \'q\' untuk keluar" << endl;

	//unlimited loop untuk menulis
	while (true) {
		cout << "- ";

		getline(cin, baris);
		if (baris == "q")break;
		outfile << baris << endl;
	}
	outfile.close();
	ifstream infile;
	infile.open("contohfile.txt");

	cout << endl << ">= membuka dan membaca file " << endl;
}
