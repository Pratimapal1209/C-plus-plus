//remove duplicates from the sorted array

#include<iostream>
using namespace std;

int remove(int a[],int n){
        
        int res = 1;
        for(int i =1 ;i<n;i++){
            if(a[i] != a[res-1]){
                a[res]=a[i];
                res++;
            }
        }
        return res;
    }






int main(){

 
    int arr[] = {1, 2 ,2, 3 ,4};
    int ans = remove(arr, sizeof(arr)/sizeof(arr[0]));

    for( int i =0;i<ans;i++){
        cout<<arr[i];
    }

    

}