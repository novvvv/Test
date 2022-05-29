using namespace std;

long long solution(int price, int money, int count)
{
    long long needs = 0;
    long long answer = 0;
    for(int i = 1; i <= count; ++i)
        needs += price * i;
    if(needs - money < 0) answer = 0; // 돈이 부족하지 않은 경우
    else answer = needs - money; // 돈이 부족한 경우
    return answer;
}