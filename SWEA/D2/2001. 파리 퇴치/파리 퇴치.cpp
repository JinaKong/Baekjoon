#include<iostream>
#include<cmath>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;

	cin>>T;
	for(test_case = 1; test_case <= T; ++test_case)
	{
		int ans = 0;
        
        // N과 M 입력받기
        int N;
        int M;
        cin >> N >> M;
        
        // N*N 배열의 값 입력받기
        int nums[N][N];
        for(int i=0; i<N; i++){
        	for( int j=0; j<N; j++){
            	cin >> nums[i][j];
            }
        }
        
        // M*M 중 최대 합 구하기
        int sum;
        int max = 0;
      	
        // N*N 배열 내의 이 점을 시작점으로 했을 때
        for(int i=0; i<N; i++){
        	for(int j=0; j<N; j++){
            	// M*M 내의 합
                sum = 0;
                for(int m=0; m<M; m++){
                    for(int k=0; k<M; k++){
                        if( i+m > N-1 || j+k > N-1){
                            continue;
                        }
                 	   sum += nums[i +m][j+k];
                    }
                }
                // 최댓값보다 크면 변경
                if(sum > max) max = sum;
            }
        }
        ans = max;
        
        // 출력
        cout << '#' << test_case << ' ' << ans << endl;
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}