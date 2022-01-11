#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:    
       vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            //code here.
            unordered_map<int,int> mp;
            vector<int> v;
            for(int i=0;i<n1;i++)
            {
                if(mp[A[i]]==0)
                mp[A[i]]++;
                else
                continue;
            }
            for(int i=0;i<n2;i++)
            {
                if(mp[B[i]]==1)
                mp[B[i]]++;
                else
                continue;
            }
            for(int i=0;i<n3;i++)
            {
                if(mp[C[i]]==2)
                mp[C[i]]++;
                else
                continue;
                
                
                if(mp[C[i]]==3)
                v.push_back(C[i]);
            }
            return v;
        }

};

// { Driver Code Starts.

int main ()
{
    int t; 
    cin >> t;
    while (t--)
    {
        int n1, n2, n3; 
        cin >> n1 >> n2 >> n3;
        int A[n1];
        int B[n2];
        int C[n3];
        
        for (int i = 0; i < n1; i++) cin >> A[i];
        for (int i = 0; i < n2; i++) cin >> B[i];
        for (int i = 0; i < n3; i++) cin >> C[i];
        
        Solution ob;
        
        vector <int> res = ob.commonElements (A, B, C, n1, n2, n3);
        if (res.size () == 0) 
            cout << -1;
        for (int i = 0; i < res.size (); i++) 
            cout << res[i] << " "; 
        cout << endl;
    }
}  // } Driver Code Ends
