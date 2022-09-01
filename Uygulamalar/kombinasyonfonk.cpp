#include <iostream>

using namespace std;

int faktoriyel(int x){
    int toplam = 1;
    for(int i=x; i>0; i--){
        toplam *=i;  
    }
    return toplam;
}

int kombinasyon(int n, int r){

    int komb = faktoriyel(n)/(faktoriyel(r)*faktoriyel(n-r));
    return komb;
}

int main()
{
    int n,r;
    cout<<"Eleman sayisini (n) girin: ";
    cin>>n;
    cout<<endl;
    cout<<"Secim sayisini (r) girin: ";
    cin>>r;
    cout<<endl;
    cout<<"Kombinasyonun cevabi: "<<kombinasyon(n,r);
}