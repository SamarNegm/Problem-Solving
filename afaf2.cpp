#include<iostream>
#include <fstream>
#include<cstring>

using namespace std;

    char first_name[30];
    char last_name[30];
    char phone_number[20];
    char ID[20];



    void main_data(){
        cout<<"enter the first name :- \n";
        cin>>first_name;
           cout<<"enter the last name :- \n";
           cin>>last_name;
           cout<<"enter the phone number :- \n ";
           cin>>phone_number;
           cout<<"enter the ID :- \n ";
           cin>>ID;

       }

           void insert(){
           ofstream file;
           file.open("student.txt",ios::app);
           char a;
           do{
           main_data();
           file<<first_name<<"|"<<last_name<<"|"<<phone_number<<"|"<<ID<<endl;
           cout<<"if you want to insert another record press y :- ";
           cin>>a;

           }
           while(a=='y');
       }

	void display(){
		fstream file;
		file.open("student.txt",ios::in);
		while(!file.eof()){
		file.getline(first_name,30,'|');
		file.getline(last_name,30,'|');
		file.getline(phone_number,20,'|');
		file.getline(ID,20,'|');

		cout<<endl<<first_name<<"\t"<<last_name<<"\t"<<phone_number<<"\t"<<ID;
		}
		file.close();
	}




           int main(){

           	char a;
           char x;
           for (;;){
           cout<<"if you want to insert data                 press 1 \n";
           cout<<"if you want to display data                press 2 \n";

           cin>>x;
           if(x=='1')
		   insert();
           else if(x=='2')
		   display();

		   else{
			cout<<"connt be done  \n ";
		}

			cout<<"press any key to make a new process and press n to exit :- ";
			cin>>a;
			if (a=='n'){
				break;
			}
	}

           return 0;
   }
