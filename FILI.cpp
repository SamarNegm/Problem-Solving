#include<iostream>
#include<string>
#include<sstream>
using namespace std;
int main(){


string mystr;
float price;

int q;
cout<<"enter the ppp";
getline(cin,mystr);
stringstream(mystr)>>price;
cout<<"enter q";

getline(cin,mystr);
stringstream(mystr)>>q;
cout<<"total= "<<q*price;
"/n";
return 0;








}
