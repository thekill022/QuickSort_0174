#include <iostream>
using namespace std;

int arr[20]; //inisialisasi variabel array untuk menampung nilai
int cmp_count = 0; //inisialisasi variabel untuk jumlah perbandingan
int mov_count = 0; //inisialisasi variabel untuk jumlah pergerakan data
int n; //inisialisasi variabel n untuk panjang elemnt array

void input()  //membuat prosedur input
{
	while (true) //looping untuk meminta input panjang elemnt array
	{
		cout << "Masukkan Panjang element array : ";
		cin >> n;

		if (n <= 20) //jika jumlah elemnt kurang dari atau sama dengan 20 looping selesai
		{
			break;
		}
		else //jika jumlah element lebih dari 20 permintan input akan di ulang
		{
			cout << "\nMaksimal panjang array adalah 20";
		}
	}
	cout << "\n-------------------------" << endl; //display untuk menampilkan permintaan mengisi masing masing index array
	cout << "\nInputkan Isi elemnt array" << endl;
	cout << "\n-------------------------" << endl;

	for (int i = 0; i < n; i++) //looping untuk mengisi index array sampai index ke n-1
	{
		cout << "Array index ke- " << i << " : ";
		cin >> arr[i];

	}

}

void swap(int x, int y)//membuat prosedur swap dengan parameter x,y bertipe data integer
{
	int temp = arr[x]; //mengisi variabel temporary dengan arr index ke x
	arr[x] = arr[y]; //mengisi arr index ke x dengan arr index ke y
	arr[y] = temp; //mengisi arr index ke y dengan variabel temporary 
	mov_count++; //increment variabel mov_count
}

void q_short(int low, int high) //membuat prosedur q_short dengan parameter low,high bertipe data integer
{

	

}



int main()
{

}
