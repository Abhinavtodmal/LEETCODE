class Solution {
public:
    int maxArea(vector<int>& height) {
        
        
        int left = 0 , right = height.size()-1;
        int max_area = 0 , length = 0 , breadth = 0;
        while(left < right)
        {
            if(height[left] < height[right])
            {
               length = min(height[right] ,height[left]) ;
                breadth = right-left;
                max_area = max(max_area ,length*breadth);
                left++;
            }
            
            else if(height[left] == height[right])
            {
                length = min(height[right] ,height[left]) ;
                breadth = right-left;
                max_area = max(max_area ,length*breadth);
                left++;
                right--;
            }
            else
            {
                length = min(height[right] ,height[left]) ;
                breadth = right-left;
                max_area = max(max_area ,length*breadth);
               
                right--;
            }
        }
        return max_area;
    }
};