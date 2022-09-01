#include <iostream>

using namespace std;

bool asalmi (int x) 
    {
    for (int i=2; i<x; i++) 
    {
    if (x%i==0) 
        {
        return false;
        }    
    }
    return true;
    }
    
int main()
{
    int sayi;
    cout << "Bir sayi giriniz:";
    cin>>sayi;

    if(asalmi(sayi))
        cout<<"Girilen sayi asaldir";
    else
        cout<<"Girilen sayi asal degildir";

}
