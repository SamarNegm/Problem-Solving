#include<iostream>
#include<fstream>
using namespace std;
 int main(){
ofstream myfile;
myfile.open("new file.txt");
myfile<<"id \t name \t grade \n";
myfile<<"010046\t ahmed\t 75\n";
myfile.close();
return 0;




 }





















