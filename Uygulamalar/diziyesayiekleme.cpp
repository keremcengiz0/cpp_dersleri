#include <iostream>

using namespace std;

int main(){

    int n;
    cout<<"Kac elemanli dizi istiyorsunuz:";
    cin>>n;

    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
        //cout<<a[i]<<" ";
    }

    int toplam=0;

    for(int i=0; i<n; i++){
        toplam+=a[i];
    }
    cout<<"Toplam:"<<toplam;
}
    