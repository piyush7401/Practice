 public:
        int countWords(string list[], int n)
        {
           map<string,int> m;
           for(int i=0;i<n;i++){
               m[list[i]]++;
           }
           int sum =0;
           for(auto value: m){
               if(value.second == 2){
                   sum++;
               }
           }
           return sum;
        }

