#include "people.h"
#include "birthday.h"
#include<iostream>
#include<string>

using namespace std;

people::people(string x,birthday bo)
: name(x),
    dateOFbirth(bo)
{


}
void people::printinfo()
{
    cout<<name <<"was born in "<<dateOFbirth.printDate();
}
