#include<iostream>
void update()
{

bool flage=false;
char search_key;
char new_id;
fstream f;
fstream f2;
f.open("hotel.txt",ios::out,ios::app,ios::in);
f2.open("hotel2.txt",ios::out,ios::app,ios::in);
cout<<"enter the id you want to ";
cin>>search_key;

while(!f.eof()){


    f.getline(id,15,'|');
    f.getline(frist_name,25,'|');
    f.getline(last_name,25,'|');
    f.getline(country_name,15,'|');
    f.getline(phone,25,'|');
    f.getline(dauration,25,'|');
    if(strcmp(search_key,id)==0)
    {

        flage=true;
    cout<<"enter the new id";
    cin>>new_id;
    f2<<new_id<<'|'<<first_name<<'|'<<last_name<<'|'<<country_name<<'|'<<number<<'|'<<duration;

    }

    else
        {


        f2<<new_id<<'|'<<first_name<<'|'<<last_name<<'|'<<country_name<<'|'<<number<<'|'<<duration;





    }
    if (flag=)




}














}
