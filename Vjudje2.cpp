#include <iostream>
using namespace std;

void onetest()
{
    int n,a[100005],S[100005],T=-1,k=1;
    cin >> n;
    if(n==0) return;
    for(int i=1;i<=n;i++)
          cin >> a[i];
    for(int i=1;i<=n;i++)
    {
        while(T>=0 && S[T]==k){
               T--;
               k++;
        }

        if(a[i]==k){
             k++;
          continue;
        }
        S[++T]= a[i];
    }
    while(T>=0 && S[T]==k){
          T--;
          k++;
    }
    if(T == -1)
    {
          cout << "YES" << endl;
    }
    else
    {
         cout << "NO" << endl;
    }


    onetest();
}

int main() {
    onetest();
}

