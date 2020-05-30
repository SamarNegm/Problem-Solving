
int sum0=0,sum1=0,sum2=0;
for (int i=0;i<lower1.length();i++)
{


char ch1=lower1.at(i);
char ch2=lower2.at(i);

if(ch1==ch2)
{
    sum0=sum0+1;
}
else if(ch1>ch2)
{
   sum1=sum1+1;
}
else
    sum2=sum2+1;



}

 if(sum1>sum2)
    cout<<1;
else if(sum2>sum1)
    cout<<-1;
    else
        cout<<0;
