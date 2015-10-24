#include <iostream>
using namespace std;

int main() {
  int t,n,c,m;
  cin>>t;
  while(t--){
    cin>>n>>c>>m;
    int answer=0;
    // Computer answer
    int wrappers = n / c;
    answer += wrappers;
    while (wrappers >= m) {
      answer += wrappers / m;
      wrappers = wrappers / m + wrappers % m;
    }
    cout<<answer<<endl;
  }
  return 0;
}
