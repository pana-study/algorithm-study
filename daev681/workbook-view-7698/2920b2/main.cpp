/*음계 다국어
시간 제한	메모리 제한	제출	정답	맞힌 사람	정답 비율
1 초	128 MB	111940	62960	54924	57.468%
문제
다장조는 c d e f g a b C, 총 8개 음으로 이루어져있다. 이 문제에서 8개 음은 다음과 같이 숫자로 바꾸어 표현한다. c는 1로, d는 2로, ..., C를 8로 바꾼다.

1부터 8까지 차례대로 연주한다면 ascending, 8부터 1까지 차례대로 연주한다면 descending, 둘 다 아니라면 mixed 이다.

연주한 순서가 주어졌을 때, 이것이 ascending인지, descending인지, 아니면 mixed인지 판별하는 프로그램을 작성하시오.

입력
첫째 줄에 8개 숫자가 주어진다. 이 숫자는 문제 설명에서 설명한 음이며, 1부터 8까지 숫자가 한 번씩 등장한다.

출력
첫째 줄에 ascending, descending, mixed 중 하나를 출력한다.

예제 입력 1
1 2 3 4 5 6 7 8

예제 출력 1
ascending

예제 입력 2
8 7 6 5 4 3 2 1

예제 출력 2
descending

예제 입력 3
8 1 7 2 6 3 5 4
예제 출력 3
mixed
*/
#include <iostream>
#include <vector>

int main() {
    std::vector<int> v(8);


    for (int i = 0; i < 8; i++) {
        std::cin >> v[i];
    }

    bool isAscending = true;
    bool isDescending = true;

    // 순서 확인
    for (int i = 0; i < 7; i++) {
        if (v[i] < v[i + 1]) {
            isDescending = false; 
        } else if (v[i] > v[i + 1]) {
            isAscending = false; 
        }
    }

    // 결과 출력
    if (isAscending) {
        std::cout << "ascending";
    } else if (isDescending) {
        std::cout << "descending";
    } else {
        std::cout << "mixed";
    }

    return 0;
}
