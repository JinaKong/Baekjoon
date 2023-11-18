#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
	
	cin>>T;

	for(test_case = 1; test_case <= T; ++test_case)
	{
        // 입력
        int N;
        cin >> N;
        int nums[8][8];		// 이차원 배열
        for(int i=0; i<N; i++){
        	for(int j=0; j<N; j++){
            	cin >> nums[i][j];
            }
        }
        
        // 출력
        cout << '#' << test_case << endl;
        for(int k=0; k<N; k++){
            // 90도 회전
        	for(int i=N-1; i>=0; i--){
                	cout << nums[i][k];
            }
            cout << ' ';
            // 180도 회전
            for(int i=N-1; i>=0; i--){
                	cout << nums[N-k-1][i];
            }
            cout << ' ';
            // 270도 회전
            for(int i=0; i<N; i++){
            	cout << nums[i][N-k-1];
            }
            cout << '\n';
        }
        
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}