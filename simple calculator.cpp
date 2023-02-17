#include <iostream>

using namespace std;

int main()
{

int type,k,j;
cout<<"Enter type of calculation:\n 1-sum\t 2-subtraction\t 3-multiplication\t 4-division\t";
  cin>>type;
 cout<<"type is:"<<type;

cout<<"Enter number";
cin>>k;
cout<<"Enter number";
cin>>j;
switch (type)
   {
       case 1:
       cout<<k+j;
       break;

       case 2:
       cout<<k-j;
       break;
       case 3:
       cout<<k*j;
       break;
       case 4:
       cout<<k/j;
       break;
       default:
        cout<<"Error";
   }


   return 0;
}

