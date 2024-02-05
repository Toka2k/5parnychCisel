// Na klávesnici sa zadáva 5 celých čísel. Napíšte program, ktorý vypíše, koľko z nich bolo párnych (pracuj dynamicky)

#include <iostream>
using namespace std;

int main()
{
    int *pCislo1 = new int;
    int *pCislo2 = new int;
    int *pCislo3 = new int;
    int *pCislo4 = new int;
    int *pCislo5 = new int;
    int *pPocetParnych1= new int;
    *pPocetParnych1 = 0;
    cout<<"Zadajte 5 celych cisel oddelenych medzerou: "<<endl;
    cin>>*pCislo1 >> *pCislo2 >> *pCislo3 >> *pCislo4 >> *pCislo5;
    
    *pPocetParnych1 += *pCislo1 % 2 == 0 ? 1 : 0;
    *pPocetParnych1 += *pCislo2 % 2 == 0 ? 1 : 0;
    *pPocetParnych1 += *pCislo3 % 2 == 0 ? 1 : 0;
    *pPocetParnych1 += *pCislo4 % 2 == 0 ? 1 : 0;
    *pPocetParnych1 += *pCislo5 % 2 == 0 ? 1 : 0;
    
    cout<<endl<<"Pocet parnych je: "<<*pPocetParnych1<<endl;
    delete pPocetParnych1, pCislo1, pCislo2,pCislo3,pCislo4,pCislo5;
    pPocetParnych1 = 0;
    pCislo1=0;
    pCislo2=0;
    pCislo3=0;
    pCislo4=0;
    pCislo5=0;
    return 0;
}
