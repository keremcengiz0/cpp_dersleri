   #include <iostream>

using namespace std;

   int main(){
   int boyut;
    cout<<"Boyutu giriniz:";
    cin>>boyut;

    for(int i=0;i<boyut;i++){
         
        for(int j=0;j<boyut;j++){
            if(i+j==boyut-1)
                cout<<"* ";
            else
                cout<<"* ";
        }

        cout<<endl;
    }
   }