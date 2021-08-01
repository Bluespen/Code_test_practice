#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int solution(vector<int> nums)
{
    int answer = 0;

    int cnt = 1;

    sort(nums.begin(), nums.end());
    //nums 정렬
    for (int i = 0; i < nums.size() - 1; i++)
    {
        if (nums[i] < nums[i + 1])
        {
            cnt++;
        }
    }



    int max = nums.size() / 2;

    if (cnt > max)
    {
        answer = max;
    }
    else
    {
        answer = cnt;
    }
  


    return answer;
}
