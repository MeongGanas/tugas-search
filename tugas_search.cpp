#include <bits/stdc++.h>
#include <vector>
#include <unordered_map>

using namespace std;

int main(){
    int t;
    cin >> t;

    for (int i = 0; i < t; i++){
        int n, k;
        cin >> k;
        cin >> n;

        vector<int> costs(n);
        for (int j = 0; j < n; j++){
            cin >> costs[j];
        }

        unordered_map<int, int> left_pair;

        for (int q = 0; q < n; q++){
            int left = k - costs[q];
            if (left_pair.count(costs[q]) > 0){
                cout << left_pair[left] + 1 << " " << q + 1 << endl;
                break;
            } else {
                left_pair.insert({left, q});
            }
        }
    }

    return 0;
}