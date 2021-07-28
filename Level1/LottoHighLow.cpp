#include <iostream>
#include <vector>

using namespace std;

vector<int>solution(vector<int> lottos, vector<int> win_nums){

    //int lottos[6] = { 0, };
    //int win_nums[6] = { 0, };
    //int count[46] = { 0, };
    vector<int> count;
    count.resize(46);
    int free = 0; // 0으로 지워진 숫자.
    int numm;
    for (int i = 0; i < 6; i++)
    {
        int loto = 0;
        loto = lottos[i];
        count[loto]++;
        if (lottos[i] == 0) //만약 0이 나오면 free++
        {
            free++;
        }
    } //lottos 나의 로또번호 for문

    int numm2;
    for (int j = 0; j < 6; j++)
    {
        int win;
        win = win_nums[j];
        count[win]++;
    } //1등 로또번호 for문

    int correct = 0;
    for (int k = 1; k <= 45; k++)
    {
        if (count[k] == 2)
        {
            correct++;

        }

    } // 내번호와 로또번호의 같은 것을 찾아내는 for문

    int rank = 0;
    int num = 0;
    int num2 = 0;
    rank = correct + free; //지워진 숫자 + 현 상태에서도 맞는 숫자 = 최대 등수
    if (rank == 6)// 맞는 숫자가 6개일경우에 1등
    {
        num = 1;
    }
    else if (rank == 5)
    {
        num = 2;
    }
    else if (rank == 4)
    {
        num = 3;
    }
    else if (rank == 3)
    {
        num = 4;
    }
    else if (rank == 2)
    {
        num = 5;
    }
    else if (rank == 1)
    {
        num = 6;
    }
        else if (rank == 0)
    {
        num = 6;
    }

    if (correct == 6)
    {
        num2 = 1;
    }
    else if (correct == 5)
    {
        num2 = 2;
    }
    else if (correct == 4)
    {
        num2 = 3;
    }
    else if (correct == 3)
    {
        num2 = 4;
    }
    else if (correct == 2)
    {
        num2 = 5;
    }
    else if (correct == 1)
    {
        num2 = 6;
    }
    else if (correct == 0)
    {
        num2 = 6;
    }

    vector<int> answer;

    answer.push_back(num);
    answer.push_back(num2);


    return answer;
}
