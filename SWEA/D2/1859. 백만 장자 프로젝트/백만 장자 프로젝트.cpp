#include<iostream>
#include<vector>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
	cin>>T;
    
	// 각 테케
	for(test_case = 1; test_case <= T; ++test_case)
	{
        long long ans = 0;
        vector<int> prices;
        
        // 테케 내에서 N일동안의 매매가 입력받기
        prices.clear(); // 벡터 비워주기 !! 
        int D = 0;
        cin >> D;
        for(int d=0; d<D; d++){
            int x = 0;
            cin >> x;
        	prices.push_back(x);
        }
        
        // 최대이익 구하기
        int max = prices[D-1];
        for(int i=D-1; i>=0; i--){
         	   if(prices[i] <= max){
               		ans += max - prices[i];
               }
            else{
                max = prices[i];
            }
        }

        // 출력
        cout << '#' << test_case << ' ' << ans << endl;
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}