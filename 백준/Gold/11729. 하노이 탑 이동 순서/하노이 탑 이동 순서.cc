#include <iostream>

using namespace std;

void func(int a, int b, int n){
    // base condition
    if(n==1){
        cout << a << ' ' << b << '\n';
        return;
    }
    // <1> n-1개의 원판을 일단 2번째 장대로 옮기기
    func(a, 6-a-b, n-1); //재귀
    cout << a << ' ' << b << '\n';
    
    // <2> n-1개의 원판을 최종 3번째 장대로 옮기기
    func(6-a-b, b, n-1); //재귀
}

int main()
{
    int start = 1;  // 첫번째 장대에서
    int end = 3;    // 세번째 장대로 n개의 원판 모두 옮기기
    int n;  // 원판의 개수 n
    
    // 입력
    cin >> n;
    
    // 옮긴 횟수 출력
    int num = (1<<n) -1;    // 비트연산자 (1<<k는 2의k승)
    cout <<num << '\n';  
    
    // 수행과정 출력
    func(start, end, n);

    return 0;
}