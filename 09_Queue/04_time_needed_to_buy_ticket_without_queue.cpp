#include<vector>
#include<queue>
using namespace std;

// Using Queue (O(n^2))
int timeRequiredToBuy(vector<int>& tickets, int k) {
    queue<int> q;
    int n = tickets.size();

    for(int i = 0; i < n; i++) {
        q.push(i);
    }

    int time = 0;
    while(tickets[k] != 0) {
        int idx = q.front();
        tickets[idx]--;
        time++;

        if(tickets[idx] > 0) q.push(idx);
        q.pop();
    }

    // returned earlier for person k
    return time;
}

// Without using Queue (O(n))
int timeRequiredToBuy(vector<int>& tickets, int k) {
    int n = tickets.size(), time = 0;

    for(int i = 0; i < n; i++) {
        // For tickets required by person less than k index
        if(i <= k)
        time += min(tickets[i], tickets[k]);

        // For tickets required by person greater than k index
        else
        time += min(tickets[i], tickets[k] - 1);
    }

    return time;
}