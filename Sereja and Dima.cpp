#include<iostream>
using namespace std;
int main()
{
    int ser=0,cont=0,dim=0,n;
    cin>>n;
    int a[n]={0};
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        cont+=a[i];
    }
    for (int i=0,turn=0,j=n; turn<n; turn++)
    {

        if(a[i]>=a[j-1]&&turn%2==0)
        {
           // cout<<"samar\n";
            ser+=a[i];
            i++;
            if(a[j-1]>=a[i])
            {

                j--;
            }
            else
            {

                i++;
            }

        }

        else if((a[j-1]>=a[i])&&turn%2==0)
        {
            ser+=a[j-1];
            j--;

        //    cout<<j<<endl;
         //   cout<<"ser+ "<<ser<<endl;

            if(a[j-1]>=a[i])
            {
                j--;
            }
            else
            {

                i++;
            }
        }

    }




    cout<<ser<<" "<<cont-ser;

    return 0;
}
