#include <string>
#include <vector>
#include <math.h> // use abs function
using namespace std;
int leftHand = -1, rightHand = -1;
string solution(vector<int> numbers, string hand){
    string answer = "";
    int leftHand = 10, rightHand = 12;
    int leftDis = 0, rightDis = 0;
    for(int i = 0; i < numbers.size(); i++){
        // keypad 1, 4, 7
        if(numbers[i] == 1 || numbers[i] == 4 || numbers[i] == 7){
            answer += "L";          
            leftHand = numbers[i];
        }

        // keypad 3, 6, 9
        else if(numbers[i] == 3 || numbers[i] == 6 || numbers[i] == 9){
            answer += "R";
            rightHand = numbers[i];
        }

        // keypad 2, 5, 8 0
        else if(numbers[i] == 0 || numbers[i] == 2 || numbers[i] == 5 || numbers[i] == 8){
            if(numbers[i] == 0)
                numbers[i] = 11;
            int leftDis = abs((leftHand-1)/3 - (numbers[i]-1)/3) + abs((leftHand-1)%3 - (numbers[i]-1)%3);
            int rightDis = abs((rightHand-1)/3 - (numbers[i]-1)/3) + abs((rightHand-1)%3 - (numbers[i]-1)%3);
            // 왼손 오른손 거리가 같을 경우
            if(leftDis == rightDis){
                if(hand == "left"){
                    leftHand = numbers[i];
                    answer += "L";
                }
                else if(hand == "right"){
                    rightHand = numbers[i];
                    answer += "R";
                }
            }
            // 오른손이 왼손보다 가까울 경우
            else if(leftDis > rightDis){
                rightHand = numbers[i];
                answer += "R";
            }
            // 왼손이 오른손보다 가까울 경우
            else if(rightDis > leftDis){
                leftHand = numbers[i];
                answer += "L";
            }

        }
    }
    return answer;
}