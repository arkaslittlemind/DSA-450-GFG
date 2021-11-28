Question Link- https://practice.geeksforgeeks.org/problems/next-larger-element-1587115620/1

//Using Stack//

// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to find the next greater element for each element of the array.
    vector<long long> nextLargerElement(vector<long long> a, int n){
        // Your code here
        stack<long long> s;
        vector<long long> ans;
        for(int i = n-1; i >= 0; i++){
            while(s.size() != 0)
                if(s.top() <= a[i])
                s.pop();
                
                else
                    break;
            }
            
            if(s.empty())
                ans.push_back(-1);
            else
                ans.push_back(s.top());
                
                s.push(a[i]);
        }
        reverse(ans.begin(), ans.end());
        return ans;
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
        vector<long long> arr(n);
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        Solution obj;
        vector <long long> res = obj.nextLargerElement(arr, n);
        for (long long i : res) cout << i << " ";
        cout<<endl;
    }
	return 0;
}  // } Driver Code Ends
