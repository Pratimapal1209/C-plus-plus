//print the element of the array that is greater than x
    int greaterThanX(int arr[],int n,int x)
    {
        // your code here
          int count =0;

        for(int i=0;i<n;i++){

        if(arr[i]>x){

            count++;

        }

        }

        return count;

    }
    
};
