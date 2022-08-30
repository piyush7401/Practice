#include<bits/stdc++.h>
#include<boost/multiprecision/cpp_int.hpp>
using namespace boost :: multiprecision;
using namespace std;

cpp_int fact(int i){
    if(i==0){
        return 1;
    }
    else{
        return (fact(i-1)*i);
    }
}


int main(){
    int t;
    cin>>t;
    vector<cpp_int> v(110);
    for(int i=0;i<101;i++){
        v[i] = fact(i);
    }
    
    for(int i=0;i<t;i++){
        int a;
        cin>>a;
        cout<<v[a];
    }
}
