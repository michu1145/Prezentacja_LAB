// Example program
#include <iostream>
#include<iterator>
#include<deque>
#include"Frequency.h"
using namespace std;
int main()
{


	Frequency test;
	test.SavetoVector("input.txt");
	test.PuzzleSolver();
	std::cout << test.getTemp() << std::endl;

	///Zadanie 1
	//podpunkt a
	vector<int> liczby;

	for (int i = 0; i < 20; i++)
		liczby.push_back(i);


	for (vector<int>::iterator it = liczby.begin(); it != liczby.end(); it++)
		cout << *it << " ";

	cout << endl;

	vector<int>::iterator it = find(liczby.begin(), liczby.end(), 9);

	cout << "Szukany element to: " << *it << endl;

	vector<int>::reverse_iterator odwrocony(it);

	cout << "Iterator odwrocony: " << *odwrocony << endl;
	vector<int>::iterator base(odwrocony.base());
	cout << "Wykorzystujac base: " << *base << endl;




	/// Podpunkt b

	deque<double> lista;

	front_insert_iterator<deque<double> > poczatek(lista);
	back_insert_iterator<deque<double> > koniec(lista);

	*poczatek = 50;
	cout << "Poczatkowe wstawienie i koncowe wstawienie: ";
	for (deque<double>::iterator i = lista.begin(); i != lista.end(); i++)
	{
		cout << *i << " ";
	}
	cout << endl;

	*koniec = 5000;

	for (deque<double>::iterator i = lista.begin(); i != lista.end(); i++)
	{
		cout << *i << " ";
	}

	back_inserter(lista) = 600;

	cout << "PO wstawieniu na koniec: ";
	for (deque<double>::iterator i = lista.begin(); i != lista.end(); i++)
	{
		cout << *i << " ";
	}
	cout << endl;

	copy(lista.begin(), lista.end(), front_inserter(lista));

	cout << "Po operacji kopiowania ";
	for (deque<double>::iterator i = lista.begin(); i != lista.end(); i++)
	{
		cout << *i << " ";
	}
	cout << endl;


	insert_iterator<deque<double>> wstaw(lista, lista.begin() + 2);
	*wstaw = 200;

	cout << "Iterator wstawiajacy ";
	for (deque<double>::iterator i = lista.begin(); i != lista.end(); i++)
	{
		cout << *i << " ";
	}
	cout << endl;

	//array<T, 5>a{ t,t,t,t,t };



	getchar();
	getchar();

	return 0;
}
