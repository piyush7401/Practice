#include <iostream>

#include <string>

#include <math.h>

 

using namespace std;

 

int main() {

int T;

   cin >> T;

   string N;

   int M = 0;  

   while (cin >> N) {

       for (int i = 0 ; i < N.length() ; i++) {

           if (N[i] == '0') {

               M+=6;

           }

           if (N[i] == '1') {

               M+=2;

           }

           if (N[i] == '2') {

               M+=5;

           }

           if (N[i] == '3') {

               M+=5;

           }

           if (N[i] == '4') {

               M+=4;

           }

           if (N[i] == '5') {

               M+=5;

           }

           if (N[i] == '6') {

               M+=6;

           }

           if (N[i] == '7') {

               M+=3;

           }

           if (N[i] == '8') {

               M+=7;

           }

           if (N[i] == '9') {

               M+=6;

           }

           

       }

   if (M % 2 == 0) {

       M /= 2;

       for (int x = 0 ; x < M ; x++) {

           cout << "1";

       }

   }

   else {

       M =  (floor(M/2))-1;

       cout << "7";

       for (int y = 0 ; y < M ; y++) {

           cout << "1";

       }

   }

   cout << endl;

   M = 0;

   }

}