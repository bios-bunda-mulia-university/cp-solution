#include <iostream>


class Solution
{
public:
    bool isPalindrome(int number)
    {
        if (number < 0)
            return false;

        int div = 1;

        while (number / div >= 10)
            div *= 10;

        while (number != 0)
        {
            int left = number / div;
            int right = number % 10;

            if (left != right)
                return false;
                
            number = (number % div) / 10;
            div /= 100;
        }
        return true;
    }
};

int main()
{
    Solution s;
    std::cout << s.isPalindrome(2882) << std::endl;
    return 0;
}