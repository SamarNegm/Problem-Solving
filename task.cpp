#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;
//string name;
//string id,age;
char id [15];

char name [15];
char age [15];


void read()
{
       fstream obj;
       obj.open("C:\\Users\\samar\\Desktop\\test.txt",ios::app|ios::in|ios::out|ios::app);

      while(!obj.eof())
      {

         obj.getline(name,15,'|');
          obj.getline(age,15,'|');
          obj.getline(id,15,'|');
//
      //       obj.getline(shelf_num,60,'|');
             cout<<id<<"   "<<age<<"    "<<name<<"   \n ";//<<prod_amont<<"     "<<price<<"      "<<type_of_prd<<"     "<<shelf_num<<"\n";
      }
      obj.close();

}
void del()
{
	fstream f ;
	fstream f2 ("test2.txt");
    int flag=0;
    char search_key[20];
	f.open("test.txt",ios::in|ios::out|ios::app);
    f2.open("test2.txt",ios::in|ios::out|ios::app);

	cout<<"ENTER THE ID YOU WANT TO DELETE\n" ;
    cin>>search_key;
	while(!f.eof()){
	        f.getline(name,15,'|');
	        f.getline(age,15,'|');
	      f.getline(id,15,'|');
	        if(strcmp(search_key,id)==0)
			{
	        	flag=1;
			} else {
				f2<<name<<"|"<<age<<"|"<<id<<"|";
			}
	    }

	f2.close();
	f.close();
	if(flag!=1)
	{
		cout<<"NOT FOUND \n";
	}
	else
	{
		cout<<"THE RECORD HAS DELETED\n";
	}
	remove("test.txt");
	rename("test2.txt","test.txt");

}
void update( )
{
    fstream obj,obj2("test2.txt");
    string keyId;
    cout<<"ENTER THE ID OF RECORD YOU WNAT TO UPDATE\n";
        cin>>keyId;
int cont =0;
    obj.open("C:\\Users\\samar\\Desktop\\test.txt",ios::app|ios::in|ios::out|ios::app);
      obj2.open("C:\\Users\\samar\\Desktop\\test2.txt",ios::app|ios::in|ios::out|ios::app);

    while(!obj.eof())
    {
            obj.getline(name,15,'|');
	        obj.getline(age,15,'|');
	      obj.getline(id,15,'|');

        if(id==keyId)
        {

            cout<<" ENTER THE NEW DATA \n";

             cin>>name>>age>>id;
            obj2<<name<<"|"<<age<<"|"<<id<<"|";
             cout<<"UPDATED\n";
            break;

        }
        else
        {
          obj2<<name<<"|"<<age<<"|"<<id<<"|";

        }

    }
    obj.close();
    obj2.close();
    remove("test.txt");
    rename("test2.txt","test.txt");



}
void srch()
{

}
int main()
{
    read();
    cout<<endl;
    del();
    cout<<endl;
    read();
    cout<<endl;
   update();
   read();
}
