#include<iostream>
#include<vector>

using namespace std;

int N,M;
vector<int> vec;

void func(int cnt) {
   if(vec[cnt] >= pow(10, M-1)){
      for(int i=cnt;i<vec.size();i++){
         cout << vec[i] << endl;
      }
      return;
   }

   int cnt_next = vec.size();
   for(int i=cnt;i<cnt_next;i++){
      for(int j=vec[i] % 10 + 1;j<=N;j++){
         vec.push_back(vec[i]*10+j);
      }
   }
   func(cnt_next);
}

int main() {
   cin >> N >> M;
   for(int i=0;i<N;i++){
      vec.push_back(i+1);
   }
   func(0);
}
