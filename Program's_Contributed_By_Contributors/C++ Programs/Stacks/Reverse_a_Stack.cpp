#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    void Reverse(stack<int> &St){
        queue<int> q;
        while(!St.empty()) // checks that stack is not empty
        {
        q.push(St.top()); // pushes the top element of the stack int queue
        St.pop(); // pops out the element at the top position of the stack
        }
        while(!q.empty()) // checks that queue is not empty
        {
            St.push(q.front()); // pushes the element at front position of queue into stack
            q.pop(); // pops out the element at the front position of the queue and reduces the front with -1
        }
    }
};

int main(){
    int T;
    cin>>T;
    while(T--){
        int N;
        cin>>N;
        stack<int> St;
        for(int i=0;i<N;i++){
            int x;
            cin>>x;
            St.push(x);
        }
        Solution ob;
        ob.Reverse(St);
        vector<int>res;
        while(St.size())
        {
            res.push_back(St.top());
            St.pop();
        }
        for(int i = res.size()-1;i>=0;i--)
        {
            cout<<res[i]<<" ";
        }
        
        cout<<endl;
    }
}
// } Driver Code Ends
