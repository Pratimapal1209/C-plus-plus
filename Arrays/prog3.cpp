// largest elennebt in an array

#include<bits/stdc++.h>
using namespace std;





int largest(int arr[], int n)
    
    {
        int res = 0;
        for(int i =1;i<n;i++){
            if(arr[i]>arr[res]){
                res =i;
            }
             
        }
        return arr[res];
    }

int main()
{

    
    int arr[] = { 1,0,2 };
    int ans = largest(arr, sizeof(arr)/sizeof(arr[0]));
    
        cout << " largest : " << ans;

        
}