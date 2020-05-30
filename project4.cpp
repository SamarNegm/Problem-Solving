#include<iostream>
using namespace std;
class acc{
	private:
		string name;
		double accno;
	public:
		void setname(string n)
		{
			name=n;
		}
		string getname()
		{
			return name;
		}
		void setaccno(double h)
		{
			accno=h;
		}
		double getaccno()
		{
			return accno;
		}
};
class savingacc : public acc{
	private:
        double deposit;
	    double balance=500;
	public:
		void setdeposit(double x)
		{
			deposit=x;
		}
		void setbalance(double y)
		{
			balance=y;
		}
		double getdeposit()
		{
			return deposit;
		}
		double getbalance()
		{
			return balance;
		}
		void interest(int money)
		{
			float sertax=2;
			balance=balance-sertax;
		}
		void withdraw()
		{
			int money;
			cout<<"     enter the amount of money : ";
			cin>>money;
			if(balance-money>50){
				if(balance<500){
					cout<<"     we are imposing penality for low minimum balance /n/n";
					int penality=50;
					balance=balance-(money+penality);
					interest(money);
					cout<<"    transaction is successfully   "<<endl;
				}
				else{
					balance=balance-money;
					interest(money);
					cout<<"    transaction is successfully   "<<endl;
				}
			}
			cout<<"       transaction can't be Done      "<<endl;
		}
		void depositl()
		{
			int money;
			cout<<"   enter the amount of money  :  ";
			cin>>money;
			balance=balance+money;
		}
		void display()
		{
			cout<<"\n\n balance  :   "<<balance<<endl;
			cout<<"   the minimum balance  :  500 \n\n"<<endl;
		}
};
class curracc : public acc{
	private:
		double deposit;
		double balance=500;
	public:
		void setdeposit(double a)
		{
			deposit=a;
		}
		void setbalance(double b)
		{
			balance=b;
		}
		double getdeposit()
		{
			return deposit;
		}
		double getbalance()
		{
			return balance;
		}
		void cheque()
		{
			int money;
			string bname;
			cout<<"  enter the name of cheque reciever  :  ";
			cin>>bname;
			cout<<"    enter the amount of money  :  ";
			cin>>money;
			if(balance-money>50)
			{
				if(balance==0)
				cout<<"    tansaction can not be done    "<<endl;
				else
				{
					balance=balance-money;
					cout<<"    the transaction is successfully     "<<endl;
					display1(bname,money);
			    }
			}
		}
		void deposit1()
		{
			int money;
			cout<<"     enter the amount of money  :   ";
			cin>>money;
			balance=balance+money;
		}
		void display()
		{
			cout<<"\n\n Balance   :   "<<balance<<endl;
			cout<<"   THE MINIMUM Balance  :  500\n\n"<<endl;
		}
 void display1(string bname,int money);
 /*
		{
			cout<<"   cheque reciever  :  "<<bname<<endl;
			cout<<"   Money   :   "<<money<<endl;
			cout<<"    Balance   :  "<<balance<<endl;
		}*/
};
void curracc::display1(string bname,int money)
{
		cout<<"   cheque reciever  :  "<<bname<<endl;
			cout<<"   Money   :   "<<money<<endl;
			cout<<"    Balance   :  "<<balance<<endl;
}
int main()
{
	int choice;
	cout<<"   enter the type of the account   "<<endl
	    <<"                1.     current"<<endl
	    <<"                2.     saving"<<endl
	    <<"  choice   :  ";
	    cin>>choice;
	    cout<<"\n\n\n";
	    switch (choice)
	    {
	    	case 1:
	    		{
	    			curracc c1;
	    			string h;
	    			cout<<"enter the name of the account holder:";
	    			cin>>h;
	    			c1.setname(h);
	    			double k;
	    			cout<<"enter the account number";
	    			cin>>k;
	    			c1.setaccno(k);
	    			cout<<"\n\n ACCount name  : "<<c1.getname()<<endl;
	    			cout<<"ACCount number    :  "<<c1.getaccno()<<endl;
	    			cout<<"   Balance   :  "<<c1.getbalance();
	    			do
	    			{
	    				cout<<"\n\n   1.  deposit"<<endl
	    				    <<"  2.  withdraw through cheque "<<endl
	    				    <<"  3.  exit"<<endl
	    				    <<"  enter the choice  :  ";
	    				    cin>>choice;
	    				    switch (choice)
	    				    {
	    				    	case 1:
	    				    		c1.getdeposit();
	    				    		c1.display();
	    				    		break;
	    				    }
	    			}
	    			while (choice!=3);
	    			break;
	    		}
	    		case 2:
	    			{
	    				savingacc s1;
	    				string h;
	    				cout<<"enter the name of the acc  holder  :  ";
	    				cin>>h;
	    				s1.setname(h);
	    				double k;
	    				cout<<"\n \n enter account number : ";
	    				cin>>k;
	    				s1.setaccno(k);
	    					cout<<"\n\n ACCount name  : "<<s1.getname()<<endl;
	    			cout<<"ACCount number    :  "<<s1.getaccno()<<endl;
	    			cout<<"   Balance   :  "<<s1.getbalance();
	    			do
	    			{
	    				cout<<"\n\n   1.  deposit"<<endl
	    				    <<"  2.  withdraw  "<<endl
	    				    <<"  3.  exit"<<endl
	    				    <<"  enter the choice  :  ";
	    				    cin>>choice;
	    				    switch (choice)
	    				    {
	    				    	case 1:
	    				    		s1.depositl();
	    				    		s1.display();
	    				    		break;
	    				    	case 2:
	    				    		s1.withdraw();
	    				    		s1.display();
	    				    		break;
	    				    }
	    			}
	    			while (choice!=3);
	    			break;
	    		}

	    }
}

