#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    string s;
    cin >> s;
    vector<int> v;
    for(int i = 0; i < s.length(); i++) {
        if(s[i] != '+') v.push_back(s[i]-48);
    }
    sort(v.begin(),v.end());
    for(int i = 0; i < v.size(); i++) {
        cout << v[i];
        if(i != v.size()-1)
            cout << "+";
    }
    cout << endl;
}