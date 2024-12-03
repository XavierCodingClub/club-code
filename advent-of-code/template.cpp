#include <bits/stdc++.h>
using namespace std;

int main() {
    fstream File("filename.txt");

    int ans = 0;
    string line;
    while (getline(File, line)) {
        cout << line << '\n';
    }
    cout << ans << '\n';
}
