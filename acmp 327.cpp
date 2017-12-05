#include <iostream>
using namespace std;

int main(){
     int n;
     cin >> n;
     int array[n];
     int sum = 0;

     for(int i=0;i<n;i++)
     {

          cin >> array[i];
     }

     for(int i=0;i<n;i++)
     {
          array[i]--;
          int a1 = array[i] % 10;
          int a2 = array[i] / 10 % 10;
          int a3 = array[i] / 100 % 10;
          int a4 = array[i] / 1000 % 10;
          int a5 = array[i] / 10000 % 10;
          int a6 = array[i] / 100000;

          if((a1+a2+a3)==(a4+a5+a6))
          {
               cout << "Yes" << endl;
               continue;
          }

          array[i] += 2;
          a1 = array[i] % 10;
          a2 = array[i] / 10 % 10;
          a3 = array[i] / 100 % 10;
          a4 = array[i] / 1000 % 10;
          a5 = array[i] / 10000 % 10;
          a6 = array[i] / 100000;

          if((a1+a2+a3)==(a4+a5+a6))
          {
               cout << "Yes" << endl;
               continue;
          }
          else
          {
               cout << "No" << endl;
          }

     }

     return 0;
}
