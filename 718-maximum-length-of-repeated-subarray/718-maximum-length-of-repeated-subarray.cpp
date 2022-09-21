class Solution
{
public:
    
    int findLength(const std::vector<int>& nums1, const std::vector<int>& nums2)
    {
        int size1 = nums1.size();
        int size2 = nums2.size();
        int max_possible = std::min(size1, size2);
        int longest = 0;
        
        for (int offset = 1 - size2; offset < size1; ++offset)
        {
            int const* i;
            int const* j;
            if (offset < 0)
            {
                i = &nums1[0];
                j = &nums2[-offset];
            }
            else
            {
                i = &nums1[offset];
                j = &nums2[0];
            }
            
            int sequence_length = 0;
            int const* end = std::min(&nums1[size1], &nums2[size2] - j + i);
            if (end - i <= longest)
            {
                break;
            }
            while(i < end)
            {
                if (*(i++) == *(j++))
                {
                    ++sequence_length;
                    continue;
                }
                
                if (sequence_length > 0)
                {
                    longest = std::max(longest, sequence_length);
                    sequence_length = 0;
                }
                
                if (end - i <= longest)
                {
                    break;
                }
            }
            longest = std::max(longest, sequence_length);
            
            if (longest == max_possible)
            {
                break;
            }
        }
        
        return longest;
    }
};