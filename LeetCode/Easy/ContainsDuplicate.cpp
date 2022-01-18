class Solution
{
public:
    bool containsDuplicate( std::vector<int>& nums )
    {
        int numSize = nums.size();
        std::sort( nums.begin(), nums.end() );
        bool check = false;

        for ( int i = 0; i < numSize - 1; i++ )
        {
            if ( nums[i] == nums[i+1] )
            {
                check = true;
                break;
            }
        }

        return check;
    }
};
