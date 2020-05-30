#include<iostream>
#include<iomanip>

using namespace std;
int main()
{
    float a,b,c,d,e,avg;


   if( (cin>>a>>b>>c>>d>>e)){
    {
         avg=((a*2)+(b*3)+(c*4)+d)/10;
        cout<<setprecision(1)<<fixed<<"Media: "<<avg<<"\n";
        cout<<"Aluno em exame.\n";
        cout<<"Nota do exame: "<<e<<"\n";
          if(avg>=5)
        {
            cout<<"Aluno aprovado."<<"\n";

        }
        if(avg<=4.9) cout<<"Aluno reprovado. \n";

        cout<<"Media final: "<<(avg+e)/2<<"\n";

    }}
    else( cin>>a>>b>>c>>d);
    { avg=((a*2)+(b*3)+(c*4)+d)/10;

        cout<<setprecision(1)<<fixed<< "Media: "<<((a*2)+(b*3)+(c*4)+d)/10<<"\n";
        if(avg>=7.0)
        {
            cout<<"Aluno aprovado."<<"\n";

        }
        if(avg<5) cout<<"Aluno reprovado. \n";
        if(avg>=5&&avg<=6.9)cout<<"Aluno em exame.\n";
    }

    return 0;
}
