#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

/*
double distance(struct spot a, struct spot b)
{

    double dis = 0;
    dis = sqrt(pow((a.x - b.x), 2) + pow((a.y - b.y), 2));
    return dis;
}
*/

string solution(vector<int> numbers, string hand) {

    string answer = "";
    //순서대로 누를 번호가 담긴 배열 numbers
    //오른손잡이인지 왼손잡이인지 나타내는 hand

    int leftHand = 10;
    int rightHand = 12;
    int lDis = 0;
    int rDis = 0;

    for (int i = 0; i < numbers.size(); i++)//numbers 크기만큼 반복
    {


        if (numbers[i] == 1 || numbers[i] == 4 || numbers[i] == 7)
        {
            answer += "L";
            leftHand = numbers[i];
        }
        /*
        switch (numbers[i])
        {
        case 1:
        case 4:
        case 7:
            answer += "L";
            leftHand = numbers[i];
            break;

            //좌측 3개 왼손으로 누르는경우
         */
        else if (numbers[i] == 3 || numbers[i] == 6 || numbers[i] == 9)
        {
            answer += "R";
            rightHand = numbers[i];
        }
        /*
        case 3:
        case 6:
        case 9:
            answer += "R";
            rightHand = numbers[i];
            break;
            */
            //우측 3개 오른 손으로 누르는 경우
        else
        {
            if (numbers[i] == 0)
            {
                numbers[i] = 11;

            }

            int temp_l = abs(leftHand - numbers[i]);
            int temp_r = abs(rightHand - numbers[i]);

            lDis = (temp_l / 3) + (temp_l % 3);
            rDis = (temp_r / 3) + (temp_r % 3);

            if (lDis == rDis)
            {
                if (hand == "right")
                {
                    answer += "R";
                    rightHand = numbers[i];
                }
                else
                {
                    answer += "L";
                    leftHand = numbers[i];

                }
            }

            else if (lDis < rDis)
            {
                answer += "L";
                leftHand = numbers[i];
            }
            else
            {
                answer += "R";
                rightHand = numbers[i];
            }
        
        }

    }
    return answer;
}
