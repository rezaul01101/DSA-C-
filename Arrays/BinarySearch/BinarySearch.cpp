#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key)
{

    int start = 0;
    int end = size - 1;

    // int mid = (start + end) / 2;
    int mid = start +(end-start)/2;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }

        //goto right part
        if(key>arr[mid]){
            start= mid+1;
        }else{
            end= mid-1;
        }

        int mid = start +(end-start)/2;
    }

    return -1;
}

int main()
{

    int even[6] = {2, 4, 6, 8, 12, 18};
    int odd[5] = {3, 8, 11, 13, 19};
    int evenFindKey=6;
    int oddFindKey=13;
    int evenIndex =binarySearch(even,6,evenFindKey);
    int oddIndex =binarySearch(odd,5,oddFindKey);
    cout << "Even Index of "<<evenFindKey <<" is "<<evenIndex <<endl;
    cout << "Odd Index of "<<oddFindKey <<" is "<<oddFindKey <<endl;
}