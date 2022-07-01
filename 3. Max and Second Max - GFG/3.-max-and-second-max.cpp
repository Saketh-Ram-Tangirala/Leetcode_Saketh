// { Driver Code Starts
//Initial Template for C++

// CPP code to find largest and 
// second largest element in the array

#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
     

class Solution{
  public:
    /* Function to find largest and second largest element
    *sizeOfArray : number of elements in the array
    * arr = input array
    */
    vector<int> largestAndSecondLargest(int n, int arr[]){
               
                int max1 = 0, max2= -1;
        
        for(int i = 1; i < n; i++)
        {
            if(arr[i] > arr[max1])
            {
                max2 = max1;
                max1 = i;
            }
            else if(arr[i] < arr[max1])
            {
                if(max2 == -1 || arr[max2] < arr[i])
                {
                    max2 = i;
                }
            }
        }
         
         
        vector<int> v;
        
        v.push_back(arr[max1]);
        
        if(max2 == -1)
            v.push_back(-1);
        else
            v.push_back(arr[max2]);
            
        return v;
         
         
         
    }
};

// { Driver Code Starts.

// Driver Code
int main() {
	
	// Testcase input
	int testcases;
	cin >> testcases;
    
    // Looping through all testcases
	while(testcases--){
	    int sizeOfArray;
	    cin >> sizeOfArray;
	    
	    int arr[sizeOfArray];
	    
	    // Array input
	    for(int index = 0; index < sizeOfArray; index++){
	        cin >> arr[index];
	    }
	    Solution obj;
	    vector<int> ans = obj.largestAndSecondLargest(sizeOfArray, arr);
	    cout<<ans[0]<<' '<<ans[1]<<endl;
	}
	
	return 0;
}  // } Driver Code Ends