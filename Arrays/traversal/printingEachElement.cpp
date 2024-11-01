#include<iostream>
using namespace std;

int main(){
      int arr[] = {10, 20, 30, 40, 50};
       int n = sizeof(arr) / sizeof(arr[0]);  //size of array, 4*5=20, 4byts , 20/4=5 , output is 5, n = 5

        cout <<"Traversal: Printing all elements in the array" <<endl;
        for(int i=0; i<n;i++){
            cout <<arr[i] <<endl;
        }
       return 0;
}


