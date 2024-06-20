class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>st;
        for(int i=0;i<tokens.size();i++){
            if(tokens[i]=="+"){
               int a=st.top();
               st.pop();
               int b=st.top();
               st.pop();
               st.push(b+a);
            }
            else if(tokens[i]=="-"){
               int a=st.top();
               st.pop();
               int b=st.top();
               st.pop();
               st.push(b-a);
            }
            else if(tokens[i]=="*"){
               int a=st.top();
               st.pop();
               int b=st.top();
               st.pop();
               st.push(b*a);
            }
            else if(tokens[i]=="/"){
               int a=st.top();
               st.pop();
               int b=st.top();
               st.pop();
               st.push(b/a);
            }
            else{
             int a=stoi(tokens[i]);
             st.push(a);   
            }
        }
        int ans;
        while(!st.empty()){
            ans=st.top();
            st.pop();
        }
        return ans;
    }
};
