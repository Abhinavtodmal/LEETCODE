class Solution {
public:
    void sortColors(vector<int>& nums) {
        
        int low =0 , mid = 0;
        int high =nums.size() -1 ;

    for(int i = 0 ; i < nums.size(); i++)
    {
       if(nums[mid] == 0)
       {
         swap(nums[mid], nums[low]);
           low ++;
           mid++;
       }
       else if(nums[mid] == 1)
       {
           mid++;
       }
       else 
       {
            swap(nums[mid] ,nums[high]);
            high--;
       }
    }
    }
};

// If arr[mid] == 0: swap arr[low] and arr[mid], then low++, mid++

// If arr[mid] == 1: just mid++

// If arr[mid] == 2: swap arr[mid] and arr[high], then high-- (but don’t move mid yet)