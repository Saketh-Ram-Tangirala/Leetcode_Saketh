class Solution {
public:
    int fib(int n) {
      	if(n<=1)return n;
		int pre1=1,pre2=0,ans;
		for(int i=2;i<=n;i++){
			ans=pre1+pre2;
			pre2=pre1;
			pre1=ans;
		}
		return ans;   
    }
};