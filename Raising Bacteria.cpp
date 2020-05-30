#include <iostream>
using namespace std;

int main()
{
    int n, b=0;
   int x= INT_MIN;
   cout<<x;
    cin >> n;
    n *= 2;
    cout<<n<<"\n";

    while (n){
     //       cout<<n<<"\n";
        b += n % 2;
    n/=2;
    }

    cout << b << endl;
    return 0;
}
