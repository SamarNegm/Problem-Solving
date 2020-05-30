#include<iostream>using namespace>
using namespace std;
int main()
{

int matrix[6]={0};
int * y;
y=matrix;
*y=90;
y++;
*y=30;
cout<<matrix<<endl;
cout<<matrix[0]<<endl;
cout<<matrix[1]<<endl;
cout<<matrix[2]<<endl;
cout<<matrix[3]<<endl;
cout<<matrix[4]<<endl;

    return 0;

}
