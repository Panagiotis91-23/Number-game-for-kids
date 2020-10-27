//Number-game-for-kids
//This project has been written in C++. It's my first attempt doing that. I know some more ways that will prove this and how could become more saturated. I started to use the if //utilities however it wasn't useful for more than one time. This is the reason that I use the while and I tried to use the do-while but I faced a bag to this.


#include <iostream>
  
#include <iomanip>
  
using namespace std;

int main()

{
    int n,i,k,l,o; 

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
          //if (l<20 || l>30); If I put 21 or someone else correct numeber at first. This is right with the second time and it's confusing
          
         cout<<"It's not right the number I would like to give another!"<<endl;
         cin>>l;


    }
                 //while( l<20 || l>30);


    cout<<"Now i would add all the numbers that you gave me"<<endl;
    o=n+k+l;

    cout<<"In your thought you had the number:"<<" "<<o<<endl;
    return 0;
}
