#include <iostream>
using namespace std;

int main()
{

    int cases ;
    int a , b ;
    cin >> cases ;
    for(int i = 1 ; i <= cases ; i++  )
    {
        cin >> a >> b ;
        int sum = 0 ;

        for(int j = a ; j <= b ; j++)
        {
            if(j % 2 != 0)
            {
                sum = sum + j ;
            }

        }

        cout << "case " << i << ": " << sum << endl ;
    }
    return 0;
}
