class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>s;
        int first =0;
        int second=0;
        int result=0;
        for(int i=0;i<tokens.size();i++){
           // int curr=stoi(tokens[i]);
            if(tokens[i]!="/" && tokens[i]!="+" && tokens[i]!="*" && tokens[i]!="-") {
                s.push(stoi(tokens[i]));
            }else{
                second=s.top();
                s.pop();
                first=s.top();
                s.pop();
                int result=0;
                if(tokens[i]=="+"){
                   result=first+second;
                }else if(tokens[i]=="-"){
                    result=first-second;
                }else if(tokens[i]=="*"){
                    result=second*first;
                }else{
                    result=first/second;
                }
                s.push(result);
            }
            
        }
        return s.top();
       
    }
};
