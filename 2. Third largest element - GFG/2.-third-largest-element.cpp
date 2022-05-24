// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
  public:
    int thirdLargest(int a[], int n)
    {
         if(n<3)    return -1;
         int l1=a[0],l2=0,l3=-1;
         for(int i=1;i<n;i++){
             if(a[i]>l1){
                 l3=l2;
                 l2=l1;
                 l1=a[i];
             }
             else if(a[i]>l2){
                     l3=l2;
                     l2=a[i];
                 }
             else if(a[i]>l3){
                 l3=a[i];
             }
         }
         return l3;
    }

};

// { Driver Code Starts.
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution obj;
	    cout<<obj.thirdLargest(a,n)<<endl;
    }
}     // } Driver Code Ends