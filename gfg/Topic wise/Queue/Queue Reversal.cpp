//Function to reverse the queue.
queue<int> rev(queue<int> q)
{
    stack<int> s;
    int n=q.size();
    for(int i=0;i<n;i++){
        s.push(q.front());
        q.pop();
    }
    for(int i=0;i<n;i++){
        q.push(s.top());
        s.pop();
    }
    return q;
}
