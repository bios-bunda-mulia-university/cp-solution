#include <bits/stdc++.h>

using namespace std;

struct Player {
    string name;
    int fans;
};

bool compare(Player p1, Player p2) {
    if(p1.fans > p2.fans) {
        return true;
    } else if(p1.fans == p2.fans) {
        return p1.name < p2.name;
    } else {
        return false;
    }
}

int main() {
    
    int N, T;
    
    cin >> N >> T;
    
    Player players[N];
    
    for(int i=0; i<N; i++) {
        cin >> players[i].name >> players[i].fans;
    }
    
    sort(players, players+N, compare);
    
    for(int i=0; i<T; i++) {
        cout << players[i].name << "\n";
    }
    
    return 0;
}