//bruteforce approch ==> O(n^2) time complexity
int missingNum(vector<int>& arr) {
        int N = arr.size() +1;
        
        for(int i = 1;i<=N;i++){
            bool flag = false;
            for(int j = 0;j < arr.size();j++){
                if(arr[j] == i){
                    flag =true;
                }
            }
            if(flag == false){
                return i;
            }
        }
        return -1;
        
    }

//better approch ==> O(nlogn) time complexity 
 
int missingNum(vector<int>& arr) {
        // code here
        sort(arr.begin(),arr.end());
        for(int i = 0;i<arr.size();i++){
            if(i+1 != arr[i]){
                return i+1;
            }
        }
        return arr.size()+1;
    }

//optimal approch ==> O(n) time complexity 

int missingNum(vector<int>& arr) {
        // code here
        int N = arr.size()+1;
        long long sum = accumulate(arr.begin(),arr.end(),0);
        long long finalSum = 1LL*N*(N+1)/2;
        return finalSum - sum;
        
    }