
#include<iostream>
using namespace std;
int main()
{
    int x1,y1 ,x2,y2,ho,mi;
    cin>>x1>>y1>>x2>>y2;

   if(x1>=x2)
   {
       ho=(24-x1)+x2;

    if(y1>y2)
    {
        ho=ho-1;
        mi=y2+(60-y1);
           cout<<"O JOGO DUROU "<<ho<<" HORA(S) E "<<mi<<" MINUTO(S)"<<endl;

    }
    if(y1<y2)
    {

        mi=y2-y1;
            cout<<"O JOGO DUROU "<<ho<<" HORA(S) E "<<mi<<" MINUTO(S)"<<endl;
    }
    if (y1==y2){
        mi=0;
        cout<<"O JOGO DUROU "<<ho<<" HORA(S) E "<<mi<<" MINUTO(S)"<<endl;
    }

   }
   if(x2>x1)
   {
       ho=x2-x1;

    if(y1>y2)
    {
        ho=ho-1;
        mi=y2+(60-y1);
           cout<<"O JOGO DUROU "<<ho<<" HORA(S) E "<<mi<<" MINUTO(S)"<<endl;

    }
    if(y1<y2)
    {

        mi=y2-y1;
            cout<<"O JOGO DUROU "<<ho<<" HORA(S) E "<<mi<<" MINUTO(S)"<<endl;
    }
    if (y1==y2){
        mi=0;
        cout<<"O JOGO DUROU "<<ho<<" HORA(S) E "<<mi<<" MINUTO(S)"<<endl;
    }


   }




    return 0;
}
