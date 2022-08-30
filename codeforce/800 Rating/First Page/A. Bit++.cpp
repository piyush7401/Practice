#include<bits/stdc++.h>
 using namespace std;
 int main(){
     int x = 0;
     string s;
     int n;
     cin>>n;
     while(n--){
         cin>>s;
         if((s=="x++")||(s=="++x")){
             x++;
         }
         else{
             x--;
         }
     }
     cout<<x;
 }
