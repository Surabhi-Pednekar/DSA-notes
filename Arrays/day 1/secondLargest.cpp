int getSecondLargest(int *arr, int n) {
    // code here
    int largest = arr[0];
    int secondLargest = -1;
    for(int i = 1;i<n;i++){
        if(arr[i] > largest){
           secondLargest = largest;
           largest = arr[i];
        }
        else{
            if(arr[i] > secondLargest && arr[i]!= largest){
                secondLargest = arr[i];
            }
        }
        
    }
    return secondLargest;
    
}
//TC of this code ==>O(N)

//bruteforce will take O(NlogN)
//sort the array and retrieve (n-2)th element