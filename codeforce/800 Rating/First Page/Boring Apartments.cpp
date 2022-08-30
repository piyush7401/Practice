#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    vector<string> v(t);
    for(int i=0;i<t;i++){
        cin>>v[i];
    }
    for(int i=0;i<t;i++){
        int a;
        a = v[i].size();
        char b = v[i][0];
        if(b=='1'){
            cout<<a*(a+1)/2<<"\n";
        }
        else if(b == '2'){
            cout<<10+a*(a+1)/2<<"\n";
        }
        else if(b == '3'){
            cout<<20+a*(a+1)/2<<"\n";
        }
        else if(b == '4'){
            cout<<30+a*(a+1)/2<<"\n";
        }
        else if(b == '5'){
            cout<<40+a*(a+1)/2<<"\n";
        }
        else if(b == '6'){
            cout<<50+a*(a+1)/2<<"\n";
        }
        else if(b == '7'){
            cout<<60+a*(a+1)/2<<"\n";
        }
        else if(b == '8'){
            cout<<70+a*(a+1)/2<<"\n";
        }
        else if(b =='9'){
            cout<<80 +a*(a+1)/2<<"\n";
        }
    }
}
