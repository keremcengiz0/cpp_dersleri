#include <iostream>

using namespace std;

int main(){

    int sayi;
    int kalan;
    int ters_sayi=0;

    cout<<"Sayiyi giriniz: ";  //12345  1234 123 12 1
    cin>>sayi;

    while(sayi>0)
    {

        kalan = sayi%10;                            // 
        sayi = sayi/10;                             //
        ters_sayi = (ters_sayi*10)+kalan;           // 54321
    }
    cout<<endl;
    cout<<"Ters sayi: "<<ters_sayi<<endl;
    cout<<endl;
}