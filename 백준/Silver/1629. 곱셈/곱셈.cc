#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll POW(ll a, ll b, ll c){
  //base condition
  if(b==1) {
      return a % c; 
  }

  //재귀 (a의 b승 == a의 b/2승 * a의 b/2승)
  ll num = POW(a, b/2, c); 
  ll result = (num * num) % c;    // 숫자가 커지므로 나머지만 저장하기
  
  if(b%2 == 0) {            // b가 짝수이면 그대로 나머지 리턴
      return result;
  }

  return result * a % c;    // b가 홀수이면 a를 한번 더 곱해서 리턴
}


int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);

  ll a,b,c;

  //입력
  cin >> a >> b >> c;

  //연산 및 출력
  cout << POW(a,b,c);
}