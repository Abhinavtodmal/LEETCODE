class Solution {
public:
    vector<int> queryResults(int limit, vector<vector<int>>& queries) {
    
        unordered_map<int, int> ball_colors; // Maps ball -> color
    unordered_map<int, int> color_count; // Maps color -> count
    int distinct_colors = 0;
    vector<int> result;

    for (const auto& query : queries) {
        int x = query[0]; // Ball label
        int y = query[1]; // New color

        // If the ball already has a color
        if (ball_colors.find(x) != ball_colors.end()) {
            int old_color = ball_colors[x];

            // Decrease the count of the old color
            if (--color_count[old_color] == 0) {
                distinct_colors--; // Old color is no longer in use
            }
        }

        // Assign new color to the ball
        ball_colors[x] = y;

        // If new color was not previously used, increase distinct count
        if (color_count[y]++ == 0) {
            distinct_colors++;
        }

        result.push_back(distinct_colors);
    }

    return result;
    }
};