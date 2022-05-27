// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution{   
public:
    long long maximumSumSubarray(int K, vector<int> &Arr , int N){
        // code here 
        long long  sum=0;
        for(int i=0;i<K;i++)
        {
            sum+=Arr[i];
            
        }
        long long maxx=sum;
        for(int j=K;j<N;j++)
        {
            sum+=Arr[j]-Arr[j-K];
            maxx=max(sum,maxx);
        }
        return maxx;
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N,K;
        cin >> N >> K;;
        vector<int>Arr;
        for(int i=0;i<N;++i){
            int x;
            cin>>x;
            Arr.push_back(x);
        }
        Solution ob;
        cout << ob.maximumSumSubarray(K,Arr,N) << endl;
    }
    return 0; 
}   // } Driver Code Ends