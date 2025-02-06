class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int x = arr1.size();
        int y =arr2.size();
        int cnt  = x ;

        for(int i =0 ; i< x ;i++ )
        {
            for(int j =0 ; j<y ; j++)
            {
                if(abs(arr1[i] - arr2[j]) <= d)
                {
                    cnt--;
                    break;
                }
            }
        }
        return cnt;
    }
};