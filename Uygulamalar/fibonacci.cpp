#include <iostream>

using namespace std;
 
 
int main()
{
    int a=1,b =1,c;
    cout<<"Istenilen fibonacci sayisi:";
    cin>>c;

    if(c==1)
    cout<<1<<endl;
    else if (c<=0);
    else
    {
        cout<<a<<endl<<b<<endl;

        for(int i=0;i<c-2;i++){
            int d = a+b;
            a=b;
            b=d;
            cout<<d<<endl;
        }
    }
   
    return 0;
}
