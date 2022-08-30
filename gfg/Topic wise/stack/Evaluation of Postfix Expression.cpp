public:
    //Function to evaluate a postfix expression.
    int evaluatePostfix(string p)
    {
        stack<int> s;
        for(int i=0;i<p.size();i++){
            if(p[i] == '+' || p[i] == '*' || p[i] == '-' || p[i] =='/'){
                int b = s.top();
                s.pop();
                int a = s.top();
                s.pop();
                if(p[i] == '+'){
                    s.push(a+b);
                }
                else if(p[i] == '-'){
                    s.push(a-b);
                }
                else if(p[i] == '/'){
                    s.push(a/b);
                }
                else if(p[i] == '*'){
                    s.push(a*b);
                }
            }
            else{
                s.push(p[i] -48);
            }
        }
        return s.top();
    }
