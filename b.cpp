#include <iostream>
#include <bitset>
using namespace std;
int arr[10000000];
int main()
{
int number;
cin>>number;
bitset <16> bin(number);

cout<<bin<<endl;

return 0;
}
