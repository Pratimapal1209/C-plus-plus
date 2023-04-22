// check if the array is sorted or not


#include<bits/stdc++.h>
using namespace std;

bool arraySorted(int arr[], int n) {
        
        for(int i =1 ; i<n ;i++){
            if (arr[i]<arr[i-1]) 
              return false;
        }
        return true;
        // code here
    }



int main()
{

   
    int arr[] = { 1,2,3,4,5,6,7};
    bool ans = arraySorted(arr, sizeof(arr)/sizeof(arr[0]));
    
    if (ans == true ){

        cout <<"Array is sorted";
    }
        else
        {
            cout <<"Array is not sorted";
        }


        
}