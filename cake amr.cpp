#include<iostream>
#include<cmath>
using namespace std ;

int main(){
int n , t , k , d ;
cin >> n >> t >> k >> d ;
int one = ceil((float) n/k)  ;
int  sumo = 0 , sumt=0 ;
for(int i=1 ; i <=one ; i++ ){
    sumo+=t;
    if(d<sumo){
      sumt+=t ;
      cout<<sumt





      <<endl;break;
    }
}
sumt+=d;
cout<<"sum out "<<sumt<<"  "<<sumo<<endl;
sumo = ceil((float) n/k) *t ;
cout<<sumo;
cout<<(sumt<sumo ? "YES" : "NO")<<endl;
}
