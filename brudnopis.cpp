#include <iostream>
#include <cmath>
#include <ctime>
#include <algorithm>
#include <cstdlib>
#include <cstring>
#include <stdlib.h>
#include <stdio.h>
#include <cstdio>
#include <fstream>
using namespace std;

class Lista
{
    private:
    string nameOfProduct;
    int amountOfProduct;

    public:
    void setNameOfProduct(string txt)
    {
        this->nameOfProduct = txt;
    }
    void setAmountOfProduct(int amount)
    {
        this->amountOfProduct = amount;
    }
    string getNameOfProduct()
    {
        return nameOfProduct;
    }
    int getAmountOfProduct()
    {
        return amountOfProduct;
    }

    Lista(string txt, int amount)
    {
        this->nameOfProduct = txt;
        this->amountOfProduct = amount;
    }
    {
        Lista lista(name, amount);
    }
};
class ListaLista
{
    private:
    Lista *tablica;
    int sizeTablica;


    public:
    Lista* getTablica()
    {
        return tablica;
    }
    ListaLista()
    {
         tablica = new Lista[1];
    }
    int getSizeTablica()
    {
        return sizeTablica;
    }
    ListaLista(ListaLista &dupa)
    {
        tablica = dupa.getTablica();
    }
    ~ListaLista()
    {
        delete[] tablica;
        cout << endl;
        cout << "Destructed";
    }
    void dodaj(string name, int amount)
    {
        Lista *tablica = new Lista[getSizeTablica()+1];
        Lista listaNew(name, amount);
        tablica[getSizeTablica()+1] = listaNew;
    }
    void wypisz()
    {
        for (int i = 0; i < getSizeTablica(); i++)
        {
            cout << tablica[i].getNameOfProduct() << " " << tablica[i].getAmountOfProduct() << endl;
        }
    }
};
int main() 
{ 
    ListaLista();
    ListaLista test;
    Lista dane1("banan", 1);
    test.tablica[0] = dane1;
	return 0;
}




