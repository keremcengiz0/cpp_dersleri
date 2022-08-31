#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "lutfen kac sayi gireceginizi yaziniz: ";
    cin >> n;
    
    int esayi=0,asayi=0,ssayi=0;
    for(int i=0; i<n; i++){
        int g; //gecici olarak her döngüde okunan sayi
        cin>>g;

        if(g>0){
            asayi++;
        }
        else if (g<0)
            esayi++;
        else
            ssayi++;
    }
        cout<<"Pozitifler: "<<(float)asayi/n<<endl;
        cout<<"Negatifler: "<<(float)esayi/n<<endl;
        cout<<"Sifirlar: "<<(float)ssayi/n<<endl;
    }

