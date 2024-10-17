#include <string>
#include <vector>

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