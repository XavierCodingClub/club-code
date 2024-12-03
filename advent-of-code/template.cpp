#include <bits/stdc++.h>
using namespace std;

int main() {
    fstream File("file.txt"); // copy paste given input into file called file.txt (or whatever u want to call it)

    int ans = 0;
    string line;
    while (getline(File, line)) {
        cout << line << '\n';
    }
    cout << ans << '\n';
}
