#include<iostream>
using namespace std;


int nElems=7;
int v[]={2,3,1,6,4,8,0};
int find(double searchKey){
int lowerBound = 0;
int upperBound = nElems-1;
int curIn;
while(true) {
curIn = (lowerBound + upperBound ) / 2;
if(v[curIn]==searchKey)
return curIn; //found it
else if(lowerBound > upperBound)
return nElems; //can�t find it
 else { //divide range
 if(v[curIn] < searchKey)
lowerBound = curIn + 1; //it�s in upper half
 else
upperBound = curIn - 1; //it�s in lower half
 } //end else divide range
 } //end while
}
int main()
{

    int x=find(3);
    cout<<x;




    return 0;
}
