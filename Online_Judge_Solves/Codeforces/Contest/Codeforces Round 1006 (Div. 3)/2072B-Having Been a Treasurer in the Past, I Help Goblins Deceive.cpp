#include <iostream>
#include <string>
#include <vector>

using namespace std;

long long max_goblin_number(const string& s) {
    int n = s.length();
    int dash_count = 0;
    int underscore_count = 0;

    for (char c : s) {
        if (c == '-') {
            dash_count++;
        } else if (c == '_') {
            underscore_count++;
        }
    }

    if (n < 3 || dash_count < 2 || underscore_count < 1) {
        return 0;
    }

    long long left_dashes = dash_count / 2;
    long long right_dashes = dash_count - left_dashes;

    return left_dashes * (long long)underscore_count * right_dashes;
}

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        cout << max_goblin_number(s) << endl;
    }

    return 0;
}
