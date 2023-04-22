//find the second largest element in an array

#include<bits/stdc++.h>
using namespace std;




int print2largest(int arr[], int n) 
	{
	    
	    int secondlargest = -1 , largest = 0;
	  
	    
	    for(int i=1; i<n ;i++)
	    {
	        
	        if(arr[i]>arr[largest])
	        {
	            secondlargest = largest;
	            largest = i;
	        }
	        else if ( arr[i] < arr[largest])
	        {
	            if(secondlargest == -1 || arr[i] > arr[secondlargest])
	                 secondlargest = i;
 	        }
 	        
	    }
	    if (secondlargest ==-1){return -1 ;}
	     
	    return arr[secondlargest];
	}

int main()
{

    
    int arr[] = { 1,0,2,6,100 };
    int ans = print2largest(arr, sizeof(arr)/sizeof(arr[0]));
    
        cout << "Second largest : " << ans;

        
}



