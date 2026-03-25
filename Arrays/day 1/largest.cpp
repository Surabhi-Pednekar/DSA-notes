// User function template for C
int largest(int arr[], int n) {
    // Code Here
    int maxNum = arr[0];
    for(int i= 0;i<n;i++){
        if(arr[i] > maxNum){
            maxNum = arr[i];
        }
    }
    return maxNum;
}
//TC => O(N)