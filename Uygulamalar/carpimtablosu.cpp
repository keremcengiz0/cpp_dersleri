#include <iostream>

using namespace std;

int main(){
    int boyut;
    cout<<"Boyutu giriniz:";
    cin>>boyut;

    for(int i=1;i<=boyut;i++){
        for(int j=1;j<=4;j++){
            cout<<i*j<<" ";
        }
        cout<<endl;
    }

}