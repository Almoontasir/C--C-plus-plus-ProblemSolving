#include <bits/stdc++.h>
using namespace std;

// Recursive function to fill elements in temp Array//
int* helper(int temp[], int x[], int index, int n)
{

    // base condition//
    if (index == n - 1) {
        return temp;
    }
    temp[index] = x[index] + x[index + 1];

    // Recursive Call for helper() function//
    return helper(temp, x, index + 1, n);
}
void printTriangle(int x[], int n)
{

    // base condition
    if (n == 1) {
        return;
    }

    /*temprory Array of input array in print(int[] arr)
    function for example arr = {1,2,3,4,5} then temp[] =
    {3,5,7,9} of size(arr.length-1)=4*/
    int temp[n-1];
    // Recursive function to fill elements in temp Array
    // according to Que.
    helper(temp, x, 0, n);

    // Recursive call for print(int[] arr) function
    printTriangle(temp, n - 1);

    // prints String format of temp Array//
    for (int i = 0; i < n - 1; i++) {
        cout << temp[i] << " ";
    }
    cout << endl;
}

int main()
{

    // input Array
    int x[] = { 1, 2, 3, 4, 5 };

    // Recursive function that will print answer
    printTriangle(x, 5);
    for (int i = 0; i < 5; i++) {
        cout << x[i] << " ";
    }
    cout << endl;
}

// This code is contributed by garg28harsh.
