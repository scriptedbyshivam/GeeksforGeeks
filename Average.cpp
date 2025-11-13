// User function Template for C++

int posAverage(int arr[], int size) {
    int sum =0;
    int a=0;
for(int i=0;i<size;i++){
    if(arr[i]>=0){
        sum+=arr[i];
        a+=1;
        
    }
}

int avg;
avg = sum/a;
return avg;

    // Write your code to find average of positive numbers in arr array
    // return the answer
}
