// reverse the array

int reversefunc(int arr , int n){
    int i =0 , k=n-1;
    while(i<k){
        swap(arr[i++],arr[k--]);
    }
}