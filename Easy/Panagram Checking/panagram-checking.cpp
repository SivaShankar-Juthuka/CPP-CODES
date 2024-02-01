//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    //Function to check if a string is Pangram or not.
    bool checkPangram (string s) {
        // your code here
        int n = s.length();
        if(n < 26) return false;
        else{
            vector<bool> res(26, false);
            for(int i = 0; i< n; i++){
                if(isalpha(s[i])){
                    if(s[i] >= 'a' and s[i] <= 'z') res[s[i] - 'a'] = true;
                    else res[s[i] - 'A'] = true;
                }
            }
            for(int i = 0; i<26; i++){
                if(res[i] == false) return false;
            }
        }
        return true;
    }

};

//{ Driver Code Starts.

// Driver Program to test above functions
int main()
{
    int t;
    cin>>t;
    cin.ignore(INT_MAX, '\n');
    while(t--){
        string s;
        getline(cin, s);
        Solution obj;
        if (obj.checkPangram(s) == true)
            cout<<1<<endl;
        else
            cout<<0<<endl;
    }
    return(0);
}

// } Driver Code Ends