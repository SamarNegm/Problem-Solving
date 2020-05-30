#include<iostream>
#include<string>
#include<cmath>

using namespace std;
int main()

{
int sum=0;
string a,b,temp="";
    cin>>a>>b;

    if(a.length()==b.length()){
        temp=a;

        for(int i=0;i<temp.length();i++){
    int ans=abs((int )(b[i]-'0')-(int)(temp[i]-'0'));
sum+=ans;
}
cout<<sum;
//cout<<"hi1";
        }
    else if(a.length()>b.length())
    {
        temp=b;
        while(true)
        {
            int flag=0;
            for(int i=0; i<b.length(); i++)
            {
                temp+=b[i];
                if(temp.length()==a.length())
                {
                    flag =1;
                    break;
                }

            }
            if(flag==1)
                break;
        }
        for(int i=0;i<temp.length();i++){
    int ans=abs((int )(a[i]-'0')-(int)(temp[i]-'0'));
sum+=ans;
//cout<<"hi2";
}
cout<<sum;
    }
    else
    {
          temp=a;
        while(true)
        {
            int flag=0;
            for(int i=0; i<a.length(); i++)
            {
                temp+=a[i];
                if(temp.length()==b.length())
                {
                    flag =1;
                    break;
                }

            }
            if(flag==1)
                break;
        }
        cout<<temp<<endl;
        for(int i=0;i<temp.length();i++){
    int ans=abs((int )(b[i]-'0')-(int)(temp[i]-'0'));
sum+=ans;
cout<<sum<<endl;
}
cout<<sum;
//cout<<"hi3";
    }





    return 0;
}

