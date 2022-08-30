//return the address of the string
char* reverse(char *s, int len)
{
    stack<char> p;
    for(int i=0;i<len;i++){
        p.push(s[i]);
    }
    for(int i=0;i<len;i++){
        s[i] = p.top();
        p.pop();
    }
    return s;
}s
