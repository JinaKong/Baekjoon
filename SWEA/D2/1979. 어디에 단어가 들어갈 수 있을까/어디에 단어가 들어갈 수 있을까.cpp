#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
    int test_case;
    int T;

    cin >> T;
    for (test_case = 1; test_case <= T; ++test_case)
    {
        int ans = 0;

        // 입력
        int N;
        int K;
        cin >> N >> K;
        int grid[N][N];
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                cin >> grid[i][j];
            }
        }

        // 주어진 퍼즐 모양에서 특정 길이 K를 갖는 단어가 들어갈 수 있는 자리의 수 구하기
        // 딱 K에 맞아야 함 (더 많은 공간이 있어도 안 됨)
        for (int i = 0; i < N; i++) {
            int cnt1 = 0;
            int cnt2 = 0;

            int j = 0;
            for (j = 0; j < N; j++) {
                // 1. 가로
                if (grid[j][i] == 0) { // 검은색이라면
                    if (cnt1 == K) { // 딱 K만큼의 공간이 있다면 ans++
                        ans++;
                    }
                    cnt1 = 0; // 검은색 만나면 무조건 초기화
                }
                else {	// 흰색이라면
                    cnt1++;
                }

                // 2. 세로
                if (grid[i][j] == 0) { // 검은색이라면
                    if (cnt2 == K) { // 딱 K만큼의 공간이 있다면 ans++
                        ans++;
                    }
                    cnt2 = 0; // 검은색 만나면 무조건 초기화
                }
                else {	// 흰색이라면
                    cnt2++;
                }

                // 마지막 칸 일 때
                if (j == N - 1) {
                    if (cnt1 == K) ans++;
                    if (cnt2 == K) ans++;
                }
            }
        }

        cout << "#" << test_case << ' ' << ans << endl;
    }
    return 0;//정상종료시 반드시 0을 리턴해야합니다.

}