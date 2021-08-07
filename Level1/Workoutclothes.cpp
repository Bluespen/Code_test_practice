#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = 0;

    vector<int> full(n, 1); //30명의 체육복이 1개라고 정의

    for (int i = 0; i < lost.size(); i++)
    {
        int sub = 0;
        sub = lost[i];
        full[sub] - 1;
    }// 도난당한 체육복 뺌.
    for (int j = 0; j < reserve.size(); j++)
    {
        int add = 0;
        add = reserve[j];
        full[add] + 1;
    }// 여분의 체육복이 있는 얘들 1에다가 1개씩 더함.

    for (int h = 0; h < full.size(); h++)
    {
        if (h == 0) 
        {

        
            if (h != full.size() - 1 && full[h + 1] == 2)
                {// full의 값이 0일때
                    full[h + 1] --;
                    full[h]++;
                }
            else if (h && full[h - 1] == 2)
                {
                    full[h - 1]--;
                    full[h]++;
                }//뒤에꺼가 2일떄
        }
    }
    for (int k = 0; k < n; k++)
    {
        if (full[k] != 0)
        {
            answer ++ ;
        }
    }

    return answer;
}
