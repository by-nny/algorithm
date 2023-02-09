#include <string>
#include <vector>

using namespace std;

int answer = 0;

void get_target(vector<int> numbers, int target, int sum, int index) {
    if (index == numbers.size()) {
        if (sum == target) {
            answer++;
        }
        
        return;
    }
    
    get_target(numbers, target, sum+numbers[index], index+1); //index는 늘려가고, 밑으로 내려가는 거
    get_target(numbers, target, sum-numbers[index], index+1); //현재의 sum에 다음 index위치의 수를 더하거나 빼거나 반복하는 것
    
}

int solution(vector<int> numbers, int target) {
    get_target(numbers, target, 0, 0);
    
    return answer;
}