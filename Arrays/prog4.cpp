//reverse an array


//method 1

#include<iostream>
using namespace std;


int main(){
    int n ;
    cin>>n;
    int arr[n];
     for (int i =0;i<n;i++){
        cin>>arr[i];
     }

     cout<<"array after reversal: "<<endl;

    for(int i = n-1; i>=0;i--){
        cout<<arr[i]<<" ";
    }
}


//method 2






#include<iostream>
using namespace std;


int main(){
    int n ;
    cin>>n;
    int arr[n];
     for (int i =0;i<n;i++){
        cin>>arr[i];
     }

     

     int low = 0, high = n-1, temp;
     while(low<high){
        int temp = arr[low];
        arr[low]=arr[high];
        arr[high] = temp ;
        low++;
        high--;

        
     }
     cout<<"array after reversal:"<<endl;
     for(int i = 0; i<n;i++){
     cout << arr[i]<<" ";
     }
}