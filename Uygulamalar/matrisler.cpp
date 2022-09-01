#include <iostream>

using namespace std;

int main(){
    // int boyut;
    // cout<<"Boyutu giriniz:";
    // cin>>boyut;

    // for(int i=0;i<boyut;i++){
         
    //     for(int j=0;j<boyut;j++){
    //         if(i+j==boyut-1)
    //             cout<<"1";
    //         else
    //             cout<<"0";
    //     }

    //     cout<<endl;
    // }


    //     int boyut;
    // cout<<"Boyutu giriniz:";
    // cin>>boyut;

    // for(int i=0;i<boyut;i++){
         
    //     for(int j=0;j<boyut;j++){
    //         if(i+j>=boyut-1)
    //             cout<<"1";
    //         else
    //             cout<<"0";
    //     }

    //     cout<<endl;
    // }


        //dik ücgen
        
       int boyut;
    cout<<"Boyutu giriniz:";
    cin>>boyut;

    for(int i=0;i<boyut;i++){
         
        for(int j=0;j<boyut;j++){
            if(i+j>=boyut-1)
                cout<<"*";
            else
                cout<<" ";
        }

        cout<<endl;
    }

}