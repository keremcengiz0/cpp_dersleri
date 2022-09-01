#include <iostream>
#include <ctime>

using namespace std;

int main(){
int yil;
int year;

cout<<"Yil giriniz: ";
cin>>yil;

time_t now = time(0);
tm *ltm = localtime(&now);
year = 1900 + ltm->tm_year;

if(yil == year)
    cout<<"Tebrikler. Bulundugumuz yil";
else
    cout<<"Bulundugumuz yil degil";

return 0;
}