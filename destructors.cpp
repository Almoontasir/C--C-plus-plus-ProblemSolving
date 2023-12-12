/*The destructor is made to close a object after finishing its work
{}in a block if object is created inside it,it will be closed after closing }
all destructor will be closed after main function*/

#include<bits/stdc++.h>
using namespace std;
int coun = 0;
class num{
public:
  num(){
    cout<<"The  object is created"<<coun++<<endl;

  }
  ~num(){
      cout<<"The object will be closed"<<coun--<<endl;
  }
};
int main()
{
    cout<<"I am working with destructor"<<endl;
    num n1;
    {
        cout<<"The 2nd and 3rd object will be created"<<endl;
        num n2,n3;
    }
    cout<<"The end of main function"<<endl;
    return 0;

}
