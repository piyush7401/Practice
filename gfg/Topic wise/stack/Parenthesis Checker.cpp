class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        stack<char> s;
        for(int i=0;i<x.size();i++){
            if(x[i] == '(' || x[i] =='[' || x[i] == '{'){
                s.push(x[i]);
            }
            else if(!s.empty()){
                if(x[i] == ')' && s.top() == '('){
                    s.pop();
                }
                else if(x[i] == '}' && s.top() == '{'){
                    s.pop();
                }
                else if(x[i] == ']' && s.top() == '['){
                    s.pop();
                }
                else{
                    s.push(x[i]);
                }
            }
            else{
                s.push(x[i]);
            }
        }
        if(s.empty()){
            return true;
        }
        else if(!s.empty()){
            return false;
        }
    }

}
