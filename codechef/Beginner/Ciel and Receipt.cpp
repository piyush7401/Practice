#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    vector<int> p(t);
    for(int i=0;i<t;i++){
        cin>>p[i];
    }
    for(int i=0;i<t;i++)
    {
        int j =0;
        int n;
        n=p[i];
        while(n>0)
        {
            if(n>=2048)
            {
                n= n- 2048;
            }
            else if(n>=1024 && n<2048)
            {
                n= n- 1024;
            }
            else if(n>=512 && n<1024)
            {
                n= n-512;
            }
            else if(n>=256 && n<512)
            {
                n= n-256;
            }
            else if(n>=128 && n<256)
            {
                n= n-128;
            }
            else if(n>=64 && n<128)
            {
                n= n- 64;
            }
            else if(n>=32 && n<64)
            {
                n= n- 32;
            }
            else if(n>=16 && n<32)
            {
                n= n-16;
            }
            else if(n>=8 && n<16)
            {
                n= n-8;
            }
            else if(n>=4 && n<8)
            {
                n= n-4;
            }
            else if(n>=2 && n<4)
            {
                n= n-2;
            }
            else
            {
                n= n-1;
            }
            j++;
        }
    cout<<j<<"\n";
    }
}
