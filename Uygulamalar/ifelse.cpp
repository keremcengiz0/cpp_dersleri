#include <iostream>
using namespace std;
int main()
{
    cout << "if - else - else if yapilari" << endl;
    
    int c =15;
    
    if ( c > 20 ) //boolean true | false
    
        {
        cout << "c degeri 20 dan buyuktur" << endl;
        }
        
    else if ( c == 10 ){
     cout << "c degeri 10 degerine esittir" << endl;
    }
    
    else if ( c == 12 )
        cout << "c degeri 12 degerine esittir" << endl;
        
    else {
        cout << "c degeri 20 den buyuktur" << endl;
        }
        
    return 0;
}
