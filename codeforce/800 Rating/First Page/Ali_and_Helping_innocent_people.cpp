#include<bits/stdc++.h>
using namespace std;

int check(string p)
{
    for(int i=0;i<=5;i++)
    {
        if((p[i]%2 == 1) && (p[i+1]%2 == 0)){
            return 0;
        }
        else if((p[i]%2 == 0) && (p[i+1]%2 ==1)){
            return 0;
        }
    }
    return 1;
}


int main(){
    string p;
    cin>>p;
    char q;
    q = p[2];
    p[2] = p[3];
    p[3] = p[4];
    p[4] = p[5];
    p[5] = p[7];
    p[6] = p[8];
    int m = check(p);
    if(m ==1 && (q !=("A" || "E" || "I" || "O" || "U" || "Y")) ){
        cout<<"valid";
    }
    else{
        cout<<"invalid";
    }


}