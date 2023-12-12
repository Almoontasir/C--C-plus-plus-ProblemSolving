
// CPP program to find the numbers
// of non negative integral solutions
#include<iostream>
using namespace std;
 int nm;
// return number of non negative
// integral solutions
int countSolutions(int n, int val,string s)
{
    // initialize total = 0
    int total = 0;

    // Base Case if n = 1 and val >= 0
    // then it should return 1
    if (n == 1 && val >=0)
    {
        cout<<s<<endl;
        return 1;
    }

    // iterate the loop till equal the val
    for (int i = 0; i <= val; i++){
         nm++;
        // total solution of equations
        // and again call the recursive
        // function Solutions(variable,value)
        total += countSolutions(n-1, val-i,s+to_string(i));

    }

    // return the total no possible solution
    return total;
}

// driver code
int main(){

    int n = 5;
    int val = 4;

    cout<<countSolutions(n, val,"")<<endl;
    cout<<nm<<endl;
}
