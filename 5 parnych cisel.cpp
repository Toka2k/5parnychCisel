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
    int *pPocetParnych= new int;
    int *pPocetParnych1= new int;
    int *pModulo1= new int;
    int *pModulo2= new int;
    int *pModulo3= new int;
    int *pModulo4= new int;
    int *pModulo5= new int;
    *pPocetParnych = 0;
    *pPocetParnych1 = 0;
    cout<<"Zadajte 5 celych cisel: "<<endl;
    cin>>*pCislo1;
    cin>>*pCislo2;
    cin>>*pCislo3;
    cin>>*pCislo4;
    cin>>*pCislo5;
    *pModulo1= *pCislo1%2;
    *pModulo2= *pCislo2%2;
    *pModulo3= *pCislo3%2;
    *pModulo4= *pCislo4%2;
    *pModulo5= *pCislo5%2;

    if (*pModulo1==0){
        *pPocetParnych1=*pPocetParnych+1;
    }
    if (*pModulo2==0){
        *pPocetParnych1=*pPocetParnych1+1;
    }
    if (*pModulo3==0){
        *pPocetParnych1=*pPocetParnych1+1;
    }
    if (*pModulo4==0){
        *pPocetParnych1=*pPocetParnych1+1;
    }
    if (*pModulo5==0){
        *pPocetParnych1=*pPocetParnych1+1;
    }
    cout<<endl<<"Pocet parnych je: "<<*pPocetParnych1<<endl;
    delete pPocetParnych,pPocetParnych1, pModulo1, pModulo2, pModulo3, pModulo4, pModulo5, pCislo1, pCislo2,pCislo3,pCislo4,pCislo5;
    pPocetParnych = 0;
    pPocetParnych1 = 0;
    pModulo1= 0;
    pModulo2= 0;
    pModulo3= 0;
    pModulo4= 0;
    pModulo5= 0;
    pCislo1=0;
    pCislo2=0;
    pCislo3=0;
    pCislo4=0;
    pCislo5=0;
    return 0;
}
