#include <iostream>

using namespace std;

int visit(int n, int r, int c){
    
    int half = 1 << (n-1);  // 비트연산자
    
    // base condition
    if(n==0) return 0;
    
    
    // (r,c)가 1번 사각형에 있을 때
    if(r < half && c < half ){
        return visit(n-1, r, c); // 재귀!!
    }
    // (r,c)가 2번 사각형에 있을 때
    else if(r < half && c >= half){
        return half*half + visit(n-1, r, c-half); // 재귀 (half 넘거나 부분은 c-half)_
    }
    // (r,c)가 3번 사각형에 있을 때
    else if(r >= half && c < half){
        return half*half*2 + visit(n-1, r-half, c);
    }
    // (r,c)가 4번 사각형에 있을 때
    else{
        return half*half*3 + visit(n-1, r-half, c-half);
    }
    
}

int main()
{
    int n;      // 2차원 배열 크기가 2^n * 2^n
    int r, c;   // r행 c열
    
    // 입력
    cin >> n >> r >> c;

    // r행 c열을 몇번째로 방문했는지 출력
    cout << visit(n, r, c);
}