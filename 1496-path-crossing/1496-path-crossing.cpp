class Solution {
public:
    bool isPathCrossing(string path) {
        set<pair<int, int>> visited;
        int x = 0, y = 0;
        
        visited.insert({0, 0}); // Start at origin

        for (char c : path) {
            if (c == 'N') y++;
            else if (c == 'S') y--;
            else if (c == 'E') x++;
            else if (c == 'W') x--;

            // If (x, y) was already visited, return true
            if (visited.count({x, y})) {
                return true;
            }

            visited.insert({x, y});
        }

        return false;
    }
};