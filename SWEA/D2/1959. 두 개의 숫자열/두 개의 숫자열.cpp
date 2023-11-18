#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;

	cin>>T;

	for(test_case = 1; test_case <= T; ++test_case)
	{
		int ans = 0;
        
        // 입력
        int N; int M;
        cin >> N;
        cin >> M;
        
        int A[N];
        int B[M];
        for(int i=0; i<N; i++){
        	cin >> A[i];
        }
        for(int i=0; i<M; i++){
        	cin >> B[i];
        }

        
        // 연산     
        // N과 M 크기 비교
        int big = max(N, M);
        int small = min(N,M);

        // 곱해서 더한 값
        int max = 0;
        for(int i=0; i <= big-small; i++){	// big-small 까지 반복
            int k = 0;
            int sum = 0;	// 초기화 잊지 말기
            for(int j=i; j < small+i; j++){	// small +i-1 까지 반복
                // N과 M 크기에 따라 
                if(N <=M) sum += A[k++]*B[j];
                else sum += A[j]*B[k++];
            }
            if(sum > max) max = sum;
        }
        
        // 출력
        ans = max;
        cout << '#' << test_case <<' ' << ans << endl;
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}