#include<bits/stdc++.h>
using namespace std;
class Solution
{
     private:
    bool knows(vector<vector<int> >& M, int a, int b, int n) {
        if(M[a][b] == 1)
            return true;
        else
            return false;
    }
    public:
    int celebrity(vector<vector<int> >& M, int n) {
        stack<int> s;
        // push all eleemnt in stack
        for(int i =0;i<n;i++){
            s.push(i);
        }
        while(s.size()>1){
            int a = s.top();
            s.pop();
            int b = s.top();
            s.pop();
            if(knows(M,a,b,n)){
                s.push(b);
            }
            else
            {
                s.push(a);
            }
        }
        int ans = s.top();
        // single eleement in stack then verify it 
        // check the row eleemnt 
         bool rowCheck = false;
         int zerocnt = 0;
         for(int i =0;i<n;i++){
            if(M[ans][i]==0)
            zerocnt++;
         }
         if(zerocnt == n)
         {
            rowCheck = true;
         }
        // check the column element 
        bool colCheck = false;
        int oneCnt =0;
        for(int i =0;i<n;i++){
            if(M[i][ans] == 1)
              oneCnt++;
        }
        if(oneCnt== n-1)
        {
        colCheck = true;
        }
        if(rowCheck == true && colCheck == true)
        {
            return ans;
        }
        else{
            return -1;
        }
    }
};
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<int> > M( n , vector<int> (n, 0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>M[i][j];
            }
        }
        Solution ob;
        cout<<ob.celebrity(M,n)<<endl;

    }
}