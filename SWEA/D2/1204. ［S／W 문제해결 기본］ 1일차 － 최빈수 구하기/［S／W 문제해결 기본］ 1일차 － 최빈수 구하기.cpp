/////////////////////////////////////////////////////////////////////////////////////////////
#include<iostream>
#include<vector>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
	cin>>T;
	/*
	   여러 개의 테스트 케이스가 주어지므로, 각각을 처리합니다.
	*/
	for(test_case = 1; test_case <= T; ++test_case)
	{

		/////////////////////////////////////////////////////////////////////////////////////////////
		int t;
        cin >> t;
        cout << "#" << t << " ";
        const int STUDENTSIZE = 1000;
        int result;
        int maxCount = 0;
        const int SCORESIZE = 101;
        vector<short> scoreCounts(SCORESIZE, 0);
       	for(int i = 0; i<STUDENTSIZE ; i++){
            int score;
            cin >> score;
            scoreCounts[score]++;
            if(maxCount < scoreCounts[score]){
                maxCount = scoreCounts[score];
                result = score;
            }
            else if(maxCount == scoreCounts[score]){
                if(result<score)
                    result = score;
            }
        }
        cout << result << "\n";
		/////////////////////////////////////////////////////////////////////////////////////////////

	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}