#include <bits/stdc++.h>
using namespace std;

int main() {
    fstream File("file.txt"); // copy paste given input into file called file.txt (or whatever u want to call it)

    int ans = 0;
    string line;
    while (getline(File, line)) {
        // If you are just reading
        /*
        cout << line << '\n';
        */
        
        // If you are reading one num
        /*
            int num = stoi(line);
        */

        // If you are reading two space-separated nums
        /* 
            int x, y;
            istringstream stream(line);
            stream >> x >> y;
        */
    }
    cout << ans << '\n';
}
