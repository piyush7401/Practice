#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    set<int> s;
    for(int i=0;i<n;i++){
        int q;
        cin>>q;
        if(q==1){
            int a;
            cin>>a;
            s.insert(a);
        }
        else if(q==2){
            int a;
            cin>>a;
            if(s.find(a) != s.end()){
                s.erase(a);
            }
        }
        else if(q==3){
            int a;
            cin>>a;
            if(s.find(a) != s.end()){
                cout<<"Yes"<<"\n";
            }
            else{
                cout<<"No"<<"\n";
            }
        }
    }
}

