/*#include <iostream>
using namespace std;

int getSum(int arr[],int si)

{
    int sum = 0 ;


    for (int i=0 ; i< 5; i++ )
    {

        sum = sum+arr[i] ;
    }
    cout << sum <<"\n" ;
}

int main()
{
   int z[5] ;
   for(int i=0;i<5;i++)
   {
       cin>>z[i];
   }

getSum(z,5);


    return 0;
}
*/#include <iostream>
using namespace std;

int getSum(int arr[],int num)
{
    int sum ;
    for (int i=0 ; i< num; i++ )
    {
        sum += arr[i];
    }

    return sum;
}

int main()
{
   int arr2[5] ,sum;
   for(int i=0;i<5;i++)
   {
       cin>>arr2[i];
   }
 sum=  getSum(arr2,5);
 cout<<sum;


   return 0;
}
