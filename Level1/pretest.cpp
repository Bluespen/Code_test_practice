#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    vector<int> first = { 1, 2, 3, 4, 5 };
    vector<int> sec = { 2, 1, 2, 3, 2, 4, 2, 5 };
    vector<int> thi = { 3, 3, 1, 1, 2, 2, 4, 4, 5, 5 };

    int final[3] = { 0,0,0 };

    int max = -2147483648;

    for (int i = 0; i < answers.size(); i++)
    {
        if (first[i % first.size()] == answers[i])
        {
                ++final[0];
                if (max < final[0])
                {
                    max = final[0];
                }
        }

        ///////////////////////////////////////////////////

        if (sec[i % sec.size()] == answers[i])
        {
                ++final[1];
                if (max < final[1])
                {
                    max = final[1];
                }
        }

        /////////////////////////////////////

        if (thi[i % thi.size()] == answers[i])
        {
                ++final[2];
                if (max < final[2])
                {
                    max = final[2];
                }
        }

    }

    for (int i = 0; i < 3; ++i)
    {
        if (max == final[i])
        {
            answer.push_back(i + 1);
        }
    }
    
    return answer;

}
