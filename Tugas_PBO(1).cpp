#include <iostream>
using namespace std;

int main() {
	int nilai [100], berapa, nl[100][100], a, b;
	
	//Penginputan Nilai
	cout<<"Berapa Banyak Data Yang Ingin Diinput : ";cin>>berapa;
	//penggunaan for
	for(int i=1; i<=berapa; i++)
	{
		cout<<"Masukkan Nilai Ke "<<i<<" : ";cin>>nilai[i];
	}
	cout<<endl;
	cout<<"PENGOUTPUTAN MENGGUNAKAN WHILE"<<endl;
	//pengoutputan while
	int j=1;
	while(j<=berapa)
	{
		cout<<"Nilai "<<j<<" : "<<nilai[j]<<endl;
		j++;	
	}
	cout<<endl;
	cout<<"PENGOUTPUTAN MENGGUNAKAN DO WHILE"<<endl;
	//pengoutputan do while
	int k=1;
	do
	{
		cout<<"Nilai "<<k<<" : "<<nilai[k]<<endl;
		k++;
	}
	while(k<=berapa);
	//Array 1 Dimensi
	cout<<endl;
	cout<<"PENGOUTPUTAN MENGGUNAKAN ARRAY 1 DIMENSI"<<endl;
	cout<<"Nilai Yang Sudah Diinputkan Adalah : "<<endl;
	for(int l=1; l<=berapa; l++)
	{
		cout<<nilai[l]<<",";
	}
	//Array 2 Dimensi
	cout<<endl<<endl;
	cout<<"INPUT ULANG NILAI DIATAS UNTUK DIMASUKKAN MENJADI ARRAY 2 DIMENSI"<<endl;
	cout<<"Berapa Baris : ";cin>>a;
	cout<<"Berapa Kolom : ";cin>>b;
	for(int e=0; e<a; e++)
	{
		for(int f=0; f<b; f++)
		{
			cout<<"Masukkan elemen baris["<<e<<"]Kolom["<<f<<"] : ";cin>>nl[e][f];
		}
	}cout<<endl;
	
	cout<<"Nilai Sudah Berubah Menjadi Bentuk Array 2 Dimensi"<<endl;
	if(a>=2&&b>=2)
	{
		for(int g=0; g<a; g++)
		{
			for(int h=0; h<b; h++)
			{
				cout<<nl[g][h]<<" ";
			}
			cout<<endl;
		}
	}else 
	{
		cout<<"TIDAK DAPAT DIJADIKAN ARRAY 2 DIMENSI";
	}
	return 0;
}
