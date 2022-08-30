#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        int i=1;
        while(1){
            if(i%2==1)
            {
                if(a >= i)
                {
                    a = a - i;
                    i++;
                }
                else{
                    cout<<"Bob"<<"\n";
                    break;
                }
            }
            else if(i%2==0)
            {
                if(b >= i)
                {
                    b = b - i;
                    i++;
                }
                else
                {
                    cout<<"Limak"<<"\n";
                    break;
                }
            }
        }
        
    }
}
