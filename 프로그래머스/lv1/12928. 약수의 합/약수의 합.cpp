#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    
    //약수 구하기 ex) 12의 약수는 1, 2, 3, 4, 6, 12
    if (n == 0) {
        return 0;
    }
    
    for (int i=1; i<=n; i++) {
        if (n % i == 0) {
            answer += i; 
        }
    }
    
    return answer;
}