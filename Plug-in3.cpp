#include<iostream>
#include<string>
char temp [200000];
char s[200001];
using namespace std;
int main()
{
    int j=1;
    // string s;
    cin>>s;
    //hhoowaaaareyyoouu
    for(int i=0; s[i];)
    {
        if(s[i]!=s[i+1])
        {

            temp[j]=s[i];
            j++;
            i++;

            cout<<"hi0\n";
        }
        if(s[i]==s[i+1])
        {
            for(int k=1; ; k++){
            if(s[i]!=s[i+1])
                i+=2;
            else{
                    i++;
                    j++;
                break;
            }
            }


                for(int k=1; ; k++)
                {
                    if(s[i]==temp[j-1])
                    {
                        temp[j]==0;
                        j--;
                        i++;
                        cout<<s[i-1]<<" "<<temp[j]<<" hi1\n";
                    }
                    else
                    {
                        temp[j]=s[i];
                        i++;
                        j++;
                        break;
                    }
                }


            }
            else if(s[i]!=temp[j-1])
            {
                temp[j]=s[i];
                j++;
                i++;
                cout<<"hi2\n";
            }




    }

    for(int k=1; temp[k]; k++)
        cout<<temp[k];




    return 0;
}
