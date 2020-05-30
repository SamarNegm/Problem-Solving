#include<iostream>
using namespace std;
char a[101];
char b[101];
char c[101];
int aa[27];
int bb[27];
int cc[27];
int main()
{
    int x=1;
  cin>>a>>b>>c  ;

  for(int i=0;a[i];i++)
  {
      aa[int(a[i]-'A')]++;
  }
  for(int i=0;b[i];i++)
  {
      aa[int(b[i])-'A']++;
  }
for(int i=0;c[i];i++)
  {
      cc[int(c[i]-'A')]++;
  }
  for(int i=0;i<27;i++)
  {
      if(aa[i]!=cc[i])
      {
          cout<<"NO";
           x=0;
          break;
      }
  }
  if(x==1)
    cout<<"YES";





    return 0;
}
