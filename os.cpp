#include <bits/stdc++.h>
#include <unistd.h> // Required for fork()

using namespace std;

int main() {
    pid_t pid = fork();  // Create a child process

    if (pid < 0) {
        cerr << "Fork failed!\n";
        return 1;  // Return error code
    }

    cout << "process" << '\n';  // Ensures proper flushing
    return 0;
}
