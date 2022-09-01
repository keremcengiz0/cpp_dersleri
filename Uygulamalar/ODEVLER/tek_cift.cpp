#include <iostream>

using namespace std;

int main()
{
    while(1){

    int a;

    cout<<"Bir sayi giriniz:";
    cin>>a;

    if(a%2==0)
        cout<<"Girilen sayi cifttir"<<endl;
    else
        cout<<"Girilen sayi tektir"<<endl;
    }
}