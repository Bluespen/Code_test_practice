#include <iostream>

using namespace std;

long long solution(int price, int money, int count)
{
    int answer = -1;

    int prsum = 0;

    for (int i = 1 ; i <= count ; i++ )
    {

        prsum += price * i; // prsum에 한번 반복될때마다 증가.
        // 0       3   * 1
        // 3  +    3   * 2
        // 9  +    3   * 3
        // 18 +    3   * 4    
    }
    answer = prsum - money;


    return answer;
}

