#include <bits/stdc++.h>
using namespace std;

struct List{
     int z,t;
};


int main(){
      int n,m;
      cin >> n >> m;
      int matrix_arr[n], most = 0;
      for(int i = 0; i < n; i++){
          matrix_arr[i] = 0;
      }

      vector <List> K;
      while(m != 0){
            int z, t;
            cin >> z >> t;
            matrix_arr[z-1]++, matrix_arr[t-1]++;
            K.push_back({z,t});
            m--;
      }

      cout << endl;

      for(int i = 0; i < n; i++){
            if(matrix_arr[i]==1){
                  for(int j = 0; j < K.size(); j++){
                         if(K[j].z==i+1 || K[j].t==i+1){
                         cout << K[j].z << " " << K[j].t << endl;
                         }
                  }
             }
      }
}
