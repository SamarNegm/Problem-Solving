#include<iostream>
using namespace std;

    long   factorial(long a)
    {
        if (a > 1)

            return

                (a * factorial (a-1)); //Recursive Function

        else

            return 1;

    }

    int main ()

    {

        long number = 9;

         cout << number << "! = " << factorial (number);
               cout << factorial (number);

        return 0;

    }


