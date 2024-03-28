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

	int temp; //inisialiasi variabel temporary
	int pivot, i, j; //inisialisasi variabel pivot, i, dan j

	if (low > high) //jika low lebih besar dari high
	{
		return; //untuk mengembalikan nilai
	}

	pivot = arr[low]; //mengisi variabel pivot dengan arrat index ke low
	i = low + 1; //mengisi variabel j dengan low + 1
	j = high; // mengisi variabel j dengan high

	while (i <= j) //looping selama i <= j
	{
		//mencari elemnt array yang lebih besar dari pivot
		while ((arr[i] <= pivot) && (i <= high)) //looping selama arr[i] <+ pivot dan i <= high
		{
			i++; //increment variabel i
			cmp_count++; //increment variabel cmp_count
		}
		cmp_count++; //increment variabel cmp_count

		//mencari elemnt array yang lebih kecil atau sama dengan pivot
		while ((arr[j] > pivot) && j >= low)
		{
			j--; //decrement variabel j
			cmp_count++; //increment variabel cmp_count
		}
		cmp_count;  //increment variabel cmp_count

		if (i < j) //perintah jika i < j
		{
			swap(i, j); //tukar element di index i dengan element di index j
		}
	}
	if (low < j) //perintah jika low < j
	{
		swap(low, j); //tukar element pivot dengan elemnt di index j
	}
	q_short(low, j - 1); //pemanggilan rekursive prosedur q_sort untuk mengurutkan sub array sebelah kiri
	q_short(j + 1, high); //pemanggilan rekursive prosedur q_sort untuk mengurutkan sub array sebelah kanan

}

void output() //pembuatan prosedur output
{
	cout << "\n-------------------------" << endl; //display untuk menampilkan keterangan elemnt array yang telah di urutkan
	cout << "\nInputkan Isi elemnt array" << endl;
	cout << "\n-------------------------" << endl;

	for (int i = 0; i < n; i++) //loopin untuk menampilkan elemnt array yang telah di urutkan
	{
		cout << arr[i] << " ";
	}

	cout << "\n\njumlah perbandingan : " << cmp_count << endl; //untuk menampilkan jumlah perbandingan didalam algoritma
	cout << "Jumlah Pergerakan Data : " << mov_count << endl; //untuk menampilkan jumlah pergerakan data
}




int main()
{

	char ch;

	do
	{
		input(); //pemanggilan prosedur input
		q_short(0, n - 1); //pemanggilan prosedur input
		output(); //pemanggilan prosedur input
	} while (true);
	return 0;


}
