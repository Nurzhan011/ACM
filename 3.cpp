#include <bits/stdc++.h>
using namespace std;
#define ll long long int


int matrix_arr[1000][1000];
bool graph(int x, int y){
      for(int i = 0; i < 10; i++){
          if(matrix_arr[x][i]==1 && i==y){
          return true;
          }
          else if(matrix_arr[x][i]==1){
               if(graph(x,i)){
               return true;
               }
          }
      }
      return false;
}
int main(){
      int n;
      cin>>n;

      for(int i = 0; i < n; i++){
          for(int j = 0; j < n; j++){
          cin >> matrix_arr[i][j];
      }

      matrix_arr[i][i] = 0;
      }

      int x,y;
      cin>>x>>y;

     if(graph(x,y)){
          cout<<"POLTOS";
          return 0;
     }
     else
          cout<<"DAUREN";
}
