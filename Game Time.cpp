#include<iostream>
#include<string>
using namespace std;
int main()
{

    float frist ,finish,ho;
    string x;
    cin>>frist>>x>>finish;
    if(frist>12&&finish>12&&finish>frist)
    {
        ho=finish-frist;
    }
 else   if(frist<12&&finish<12&&finish>frist)
    {
        ho=finish-frist;
    }

  else   if(frist==finish)
    {
        ho=24;
    }

else

{


    if(frist<12)
    {
        frist =frist+12;
    }
    if(finish>12)
    {
        finish=finish-12;
    }

     ho=(24-frist)+(finish-0);
}

    cout<<"O JOGO DUROU "<<ho<<" HORA(S)"<<endl;

    return 0;
}
