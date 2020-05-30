#include<iostream>
#include<fstream>
using namespace std;
string name;
string id,age;

void read()
{
    fstream obj;
    obj.open("C:\\Users\\samar\\Desktop\\test.txt");
    while(!obj.eof())
    {
        getline(obj,name,'|');

        getline(obj,age,'|');

        getline(obj,id,'|');
        if(name[0]=='*')
            continue;
        cout<<name<<" "<<age<<" "<<id<<" \n";
    }
    obj.close();

}
void deletee()
{
    fstream obj;
    string keyId;
    cout<<"ENTER THE ID OF RECORD YOU WANT TO DELETE\n";
    cin>>keyId;
int cont =0;
    obj.open("C:\\Users\\samar\\Desktop\\test.txt");

    while(!obj.eof())
    {
        getline(obj,name,'|');

        getline(obj,age,'|');

        getline(obj,id,'|');
        if(id==keyId)
        {

            cout<<" RECORED HAS BEEN DELETED \n";
            obj.seekg(cont,ios::beg);
            obj<<"*";
            break;
        }
        else
        {
          cont+=name.length()+id.length()+age.length()+3;

        }

    }
    obj.close();




}

int main()
{

    read();
    deletee();
    cout<<"\n\n";
    read();
       cout<<"\n\n";





    return 0;
}
