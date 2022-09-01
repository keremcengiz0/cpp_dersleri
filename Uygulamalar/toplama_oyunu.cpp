#include <iostream>

using namespace std;

int main() {

    int a[5];
    cout<<"5 tane sayi girin: ";
    
    for(int i=0; i<5; i++) {
        cin>>a[i];
    }

    int eb=a[0];
    int ek=a[0];

    for(int i=0; i<5;i++) {
        if(eb<a[i]){
            eb=a[i];
        }
    }

    for(int i=0; i<5;i++) {
        if(ek>a[i]){
            ek=a[i];
        }
    }

    int toplam=0;

    for(int i=0; i<5; i++) {
        toplam+=a[i];
    }

    cout<<"Maks Toplam:"<<toplam-ek<<endl;
    cout<<"Min Toplam:"<<toplam-eb<<endl; 

}