// Q: counts the number of even and odd elements in an array.

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {2, 3,9,3,0,5,8, 230, 32, 134, 7,0, 93};
    int n = sizeof(arr) / sizeof(arr[0]); // size of array, 4*5=20, 4byts , 20/4=5 , output is 5, n = 5
    int evenCount = 0, oddCount = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            // this is even number
            evenCount += 1;
        }
        else
        {
            oddCount += 1;
        }
    }

    // printing final result 
    cout << "Total Even Number is: "<<evenCount <<endl;
    cout << "Total Odd Number is: "<<oddCount <<endl;
    return 0;
}
