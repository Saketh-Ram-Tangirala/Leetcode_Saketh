class Solution {
public:
    int fib(int n) {
       if(n == 0 )return 0; 
		int prev=1, prev1=0; 
		int curr=0 ; 
		for(int i=2;i<=n;i++){
			curr = prev+prev1;
			prev1= prev; 
			prev = curr; 
		}
		return prev; 
    }
};