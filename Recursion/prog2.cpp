// factorial



int factorial(int n){

    if(n==0 || n==1){
        return 1;
    }

    return n*factorial(n-1);

}


#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>> n;
    factorial(n);
    cout<<factorial(n)<<" ";
}