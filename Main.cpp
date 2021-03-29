/*
 *   Copyright (c) 2021 Araa
 *   All rights reserved.
 */
#include <iostream>
#include <string>
#include <fstream>

using namespace std;


int main()
{
	string mahasiswa;
	ifstream file_txt("daftar-nama.txt");
	ofstream temp;
	temp.open("4210191023_Natan.csv");
	int index = 0;
	string AryMhs[29];
	
	if(file_txt.is_open())
	{
		while(getline(file_txt, mahasiswa)) // get data dari daftar-nama.txt
		{			
			AryMhs[index] = mahasiswa;		
			index++;			
		}		
		file_txt.close();		
		index = 0;

		while (index != 28) //input daftar-mana ke program
		{
			temp << AryMhs[index] << endl; 
			index++;
		}
		temp.close();
		cout << "File .csv telah dibuat..." << endl;
	}
	else
		cout << "File .csv belum dibuat..." << endl;
		
	system("PAUSE");
	system("cls");
	temp.open("4210191023_Natan.csv");
	index = 28;

	cout << "Reverse Daftar tugas...\n";
	if(temp.is_open())
	{
		while(index != 1)// reverse isi file_txt .csv
		{
			temp << AryMhs[index] << endl;
			index--;
		}
	}
	else
	temp.close();
	
	cin.get();
	cout << "Done...!";
	return 0;
}
