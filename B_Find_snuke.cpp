#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int h, w;
    cin >> h >> w;
    vector<string> grid(h);
    for (int i = 0; i < h; ++i) {
        cin >> grid[i];
    }
    string snuke = "snuke";
    int dr[] = {-1, 1, 0, 0, -1, -1, 1, 1}; // Row changes for 8 directions
    int dc[] = {0, 0, -1, 1, -1, 1, -1, 1}; // Column changes for 8 directions

    for (int r = 0; r < h; ++r) {
        for (int c = 0; c < w; ++c) {
            if (grid[r][c] == snuke[0]) {
                for (int dir = 0; dir < 8; ++dir) {
                    vector<pair<int, int>> current_snuke_coords;
                    current_snuke_coords.push_back({r + 1, c + 1}); // 1-based indexing

                    bool found = true;
                    for (int k = 1; k < snuke.length(); ++k) {
                        int nr = r + dr[dir] * k;
                        int nc = c + dc[dir] * k;

                        if (nr >= 0 && nr < h && nc >= 0 && nc < w && grid[nr][nc] == snuke[k]) {
                            current_snuke_coords.push_back({nr + 1, nc + 1});
                        } else {
                            found = false;
                            break;
                        }
                    }

                    if (found) {
                        for (const auto& coord : current_snuke_coords) {
                            cout << coord.first << " " << coord.second << endl;
                        }
                        return 0; // Assuming only one "snuke" needs to be found
                    }
                }
            }
        }
    }

    return 0;
}