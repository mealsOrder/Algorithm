// 문제가 개편되었습니다. 이로 인해 함수 구성이나 테스트케이스가 변경되어, 과거의 코드는 동작하지 않을 수 있습니다.
// 새로운 함수 구성을 적용하려면 [코드 초기화] 버튼을 누르세요. 단, [코드 초기화] 버튼을 누르면 작성 중인 코드는 사라집니다.
#include <string>
#include <vector>
#include <map>

using namespace std;

int solution(string name) 
{
    int answer = 0;
    int L2 = 0;
    int move = name.size() - 1;
    int length = name.size();

    for(int i=0; i<name.size();i++) 
    {   
        answer += min(name[i] - 'A','Z' - name[i] +1);        
        
        int L2_idx = i+1;
        while(L2_idx < length)
        {
            if(name[L2_idx] == 'A') L2_idx++;
            else break;
        }
        L2 = length - 1 - L2_idx + 1;
        move = min(move, i + L2 + min(i, L2));         
    }
    return answer + move;
}