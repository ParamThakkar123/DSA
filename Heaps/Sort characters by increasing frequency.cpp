#include <bits/stdc++.h>
using namespace std;

struct compare{
        bool operator()(pair<int, char> below, pair<int, char> above){
            if(below.first == above.first){
                return below.second > above.second;
            }
            return below.first > above.first;
        }
    };

string frequencySort(string s) {
        unordered_map<char, int> mp;
        priority_queue<pair<int, char>, vector<pair<int, char>>, compare> minh;

        for(char ch : s){
            mp[ch]++;
        }

        for(auto m : mp){
            minh.push({m.second, m.first});
        }

        string ans = "";

        while(minh.size()){
            int freq = minh.top().first;
            char ch = minh.top().second;

            for(int i = 0; i < freq; i++){
                ans += ch;
            }
            minh.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }

int main(){
  string s;
  cin >> s;

  cout << frequencySort(s) << endl;
  
}
