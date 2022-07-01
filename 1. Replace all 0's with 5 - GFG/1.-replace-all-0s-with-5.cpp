// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int convertFive(int n);

// Driver program to test above function
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        cout << convertFive(n) << endl;
    }
}// } Driver Code Ends


/*you are required to complete this method*/
int convertFive(int n) {
    // Your code here
     if(n == 0){
        return 0;
    }
    int last_digit = n % 10;
    if(last_digit == 0){
        last_digit = 5;
    }
    return convertFive(n/10)*10 + last_digit;
}