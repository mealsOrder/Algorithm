#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(vector<int> priorities, int location) {
    int answer = 0;
    priority_queue<int> pq (priorities.begin(),priorities.end());
    int i = 0;
    while(true){
        if(priorities[i] == pq.top()){
            answer++;
            pq.pop();
            if(i == location) return answer;
        }
        i = (i+1)%priorities.size();
    }


    return answer;
}