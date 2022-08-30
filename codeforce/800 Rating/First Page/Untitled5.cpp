#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i;
    int j,k,m;
    while(n>=5)
    {
    if(n>=100){
        i = n/100;
        n = n%100;
    }
    else if(100>n>=20){
        j = n/20;
        n = n%20;
    }
    else if(20>n>=10){
        k = n/10;
        n = n%10;
    }
    else if(10>n>=5){
        m = n/5;
        n = n%5;
    }
}
cout<<i<<j<<k<<m<<n<<" ";
int sum = i +j +k +m+n;
cout<<sum;
}
