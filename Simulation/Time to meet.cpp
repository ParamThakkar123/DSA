/*
Alice and Bob are standing on a 2D plane. Alice starts at the point (0, 0), and Bob
starts at the point (R, S) (1 ≤ R, S ≤ 1000). Every second, Alice moves M units to the
right, and N units up. Every second, Bob moves P units to the left, and Q units down.
(1 ≤ M, N, P, Q ≤ 10). Determine if Alice and Bob will ever meet (be at the same point at
the same time), and if so, when
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int r, s;
    int m, n, p, q;
    
    cin >> r >> s;
    cin >> m >> n >> p >> q;
    
    int ax = 0;
    int ay = 0;
    int bx = r;
    int by = s;
    int seconds = 0;
    while(ax < bx && ay < by){
        ax = ax + m;
        ay = ay + n;
        bx = bx - p;
        by = by - q;
        seconds++;
    }
    
    if(ax == bx && ay == by){
        cout << seconds << endl;
    }
    else{
        cout << -1 << endl;
    }
}
