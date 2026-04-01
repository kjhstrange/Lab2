#include<iostream>
#include<vector>

using namespace std;

int N,M;
vector<int> vec;

void func(int cnt) {
   int d = 1;
   while(d <= N || d <= M){
      if(N % d == 0 && M % d == 0){
         cnt++;
         vec.push_back(d);
      }
      d++;
   }

   cout << cnt << endl;
   for(int i = 0;i < vec.size();i++){
      cout << vec[i] << " ";
   }
}

int main() {
   cin >> N >> M;
   func(0);
}
