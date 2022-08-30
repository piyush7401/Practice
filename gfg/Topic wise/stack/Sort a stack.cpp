void SortedStack :: sort()
{
    map<int,int> m;
    while(!s.empty()){
        m[s.top()]++;
        s.pop();
    }
    for(auto value:m){
        if(value.second==1){
            s.push(value.first);
        }
        else{
            while(value.second--){
                s.push(value.first);
            }
        }
    }
}
