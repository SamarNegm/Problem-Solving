#include<iostream>
using namespace std;
char temp [200000];
char s[200001];
int main()
{
    int j=1;
    // string s;
    cin>>s;
    for(int i=0; s[i];)
    {
        if(s[i]!=s[i+1])
        {
            temp[j]=s[i];
            j++;
            i++;
        }
        else if(s[i]==s[i+1])
        {
            i+=2;
          //  cout<<s[i]<<" "<<temp[j-1]<<endl;
             for(int k=1; ; k++)
            if(s[i]==temp[j-1])
            {
            i++;
            temp[j-1]=0;
            j--;
            }
            else
                break;
        }

    }
      for(int k=1; temp[k]; k++)
        cout<<temp[k];




    return 0;
}
