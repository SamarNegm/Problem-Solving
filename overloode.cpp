#include<iostream>
using namespace std;

class box{
public:
    box(){
    h=0 ; l=0; b=0;
    }
    box(int x,int y,int z){
    h=x ; l=y ;  b=z;
    }

   void print(){
   cout<<h<<endl;
   cout<<l<<endl;
   cout<<b<<endl;
   }

friend void operator ++ (box &x){

++x.h;
++x.l;
++x.b;


}



private:
    int h;
    int l;
    int b;



};

int main(){
 box x(1,2,3);
 box y(2,3,4);
 box z(1,0,0);

 ++z;

 z.print();





 return 0;

 }
