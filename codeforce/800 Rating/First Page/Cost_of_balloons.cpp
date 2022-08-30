#include <iostream>

using namespace std;

int main()

{

     int t, priceOfGreen, priceOfPurple, n;

     cin >> t;

     while(t--){

          cin >> priceOfGreen >> priceOfPurple;

          cin >> n;

          int c1sum = 0, c2sum =0;

          bool a[10][1];

          for(int i = 0; i < n; i++){

               cin >> a[i][0] >> a[i][1];

               c1sum += a[i][0];

               c2sum += a[i][1];

         }

         int cMax = c1sum > c2sum ? c1sum : c2sum;

         int cMin = c1sum < c2sum ? c1sum : c2sum;

         int pMax = priceOfGreen > priceOfPurple ? priceOfGreen : priceOfPurple;

         int pMin = priceOfGreen < priceOfPurple ? priceOfGreen : priceOfPurple;

 

         cout << (cMax * pMin) + (cMin * pMax) << endl;

     }

}