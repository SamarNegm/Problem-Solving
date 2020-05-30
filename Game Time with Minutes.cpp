#include<iostream>
using namespace std;
int main()
{

    int frist,finish,ho,fm,em,mi;
    cin>>frist>>fm>>finish>>em;

    if(fm <60&&em<60&&fm>=1&&em>=1&&frist!=finish)
    {
        if (finish ==(frist+1))
            ho=0;
        if(frist>12&&finish>12&&finish>frist)
        {
            ho=finish-frist;

        }
        if(frist<12&&finish<12&&(finish>frist))
        {
            ho=finish-frist;

        }

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
    if(frist!=finish)
    {

        if(fm>em)

            mi=(60-fm)+em;

        if(fm==em)
        {
            mi=0;
        }
        if(em>fm)


            mi=em-fm;
    }

    if(frist==finish)
    {


        if(frist==finish&&fm<em)
        {
            ho=0;
            mi=em-fm;

        }
        if(frist==finish&&fm>em)
        {
            ho=23;
            mi=em-fm;

        }



    }
     cout<<"O JOGO DUROU "<<ho<<" HORA(S) E "<<mi<<" MINUTO(S)"<<endl;
    return 0;
}
