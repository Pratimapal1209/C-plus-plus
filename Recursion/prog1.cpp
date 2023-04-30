// print 1 to N without loop

#include<bits/stdtr1c++.h>
using namespace std;




void printNumber(int n){

    if(n==0){
        return;
    }
   
   printNumber(n-1);
   cout<<n<<" ";

}

int main(){

    int n;
    cin>>n;

    printNumber(n);
}

