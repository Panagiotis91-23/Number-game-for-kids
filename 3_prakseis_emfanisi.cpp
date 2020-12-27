#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n,i,k,l,o; // metavlites pou tha xrisimopoihsw

    cout<<"game of numbers"<<endl;
    cout<<"give one number from 1 to 10 "<<endl;
    cin>>n;
    i=0;

    while (n>10)
    {
        cout <<"It's not right the number I would like to give another!"<<endl;
        cin>>n;
        i++;
    }

    if (i>0)

        cout<<"You give the right number after:"<<" "<<i<<"times"<<"\n"<<endl;

    cout<<"Now give me one number from 11 until 20"<<endl;
    cin>>k;
    while(k<=10 || k>20)
    {

        cout <<"It's not right the number "<<setfill('_')<<setw(3)<<""<<"I would like to give another!"<<endl;
        cin>>k;
    }


    cout<<"As last time give one number from 21 until 30"<<endl;
    cin>>l;

    while( l<20 || l>30)
    //do
    {


          //cin>>l; I put the outside l off however I still have the problem with the fisrt input
          //if (l<20 || l>30); If I put 21 at first is right with the second time
         cout<<"It's not right the number I would like to give another!"<<endl;
           cin>>l;


    }
    //while( l<20 || l>30);


    cout<<"Now i would add all the numbers that you gave me"<<endl;
    o=n+k+l;

    cout<<"In your thought you had the number:"<<" "<<o<<endl;
    return 0;
}
