#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
char ID [14];
char first_name [15];
char last_name [15];
char country_name [20];
char number [15];
char duration [4];
void insert();
void view();
void search();
void del();
void update()
{
bool flag=false;
char search_key [20];
char new_id;
fstream f;
fstream f2;
f.open("hotel.txt",ios::out|ios::app|ios::in);
f2.open("hotel2.txt",ios::out|ios::app|ios::in);
cout<<"enter the id you want to update";
cin>>search_key;
while(!f.eof())
    {

    f.getline(ID,15,'|');
      f.getline(first_name,16,'|');
	         f.getline(last_name,16,'|');
	         f.getline(country_name,21,'|');
	         f.getline(number,16,'|');
	         f.getline(duration,5,'\n');

    if(strcmp(search_key,ID)==0)

{


        flag=true;
        cout<<"enter the new id";
        cin>>new_id;
        f2<<new_id<<"|"<<first_name<<"|"<<last_name<<"|"<<"|"<<country_name<<"|"<<number<<"|"<<duration<<"\n" ;
}

    else{ f2<<ID<<"|"<<first_name<<"|"<<last_name<<"|"<<"|"<<country_name<<"|"<<number<<"|"<<duration<<"\n" ;

    }

    if (flag==false)
    {
        cout<<"unfounded";
    }
    else{cout<<"updated";}
    f.close();
    f2.close();
    remove("hotel.txt");
    rename("hotel2.txt","hotel.txt");
}









}


























































int main(){
int i;
char ch;


do{

	cin>> i;
	    cout<<"\n";

   	    switch (i)
	    {
	    	case 1 :
	        insert();
	        break;

	   		case 2:
	        view();
	        break;

	    	case 3:
	        search();
	        break;

	    	case 4:
	        update();
	        break;

			case 5:
	        del();
	        break;

			default :

		    cout<<i<<" IS NOT A VAILD \n ";
			break;
	    }
cin>>ch;

} while(ch=='0');









return 0;

}
