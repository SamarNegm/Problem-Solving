#include<iostream>
#include<string>
using namespace std;
int main()
{

    string x,y,z,vertebrado,carnivoro,onivoro,mamifero,herbivoro,invertebrado,anelideo,inseto,ave,hematofago,hebivoro;
   getline(cin,x);
    getline(cin,y);
     getline(cin,z);

    if (x=="vertebrado")
    {

        if(y=="ave"&&z=="carnivoro")
        {
            cout<<"aguia\n";
        }
        else if(y=="ave"&&z=="onivoro")
        {
            cout<<"pomba\n";
        }
        else if(y=="mamifero"&&z=="onivoro")
        {
            cout<<"homem\n";
        }
        else if(y=="mamifero"&&z=="herbivoro")
        {
            cout<<"vaca\n";
        }
    }

    else if(x=="invertebrado")
    {
        if(y=="inseto"&&z=="hematofago")
        {
            cout<<"pulga\n";
        }
        else if(y=="inseto"&&z=="herbivoro")
        {
            cout<<"lagarta\n";
        }
        else if(y=="anelideo"&&z=="hematofago")
        {
            cout<<"sanguessuga\n";
        }
        else if(y=="anelideo"&&z=="onivoro")
        {
            cout<<"minhoca\n";
        }
        }
return 0;

}
