class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int num1 = nums1.size(), num2 = nums2.size();

        int previous = -10000000, current = -10000000, num = (num1 + num2), i=0, j=0, coun=0;

        
        for(int ii=0; ii< num; ii++){
            
            if(i<num1 && j<num2){
                previous = current;

                coun ++;
                if(nums1[i]<nums2[j]){
                current = nums1[i];
               i++;
                }
                else{
                current = nums2[j];
                    j++;
                }
            }
            else {
                           if(j<num2 && nums2[j]>= current){
                previous = current;
                current = nums2[j];
                j++;
               coun++;
            }
                           if(i<num1&& nums1[i]>= current){
                previous = current;
                current = nums1[i];
                i++;
               coun++;
            }
            }
                
            if(coun>num/2) break;

        }
        return num%2==1 ? current : (double)(previous + current)/2;
    }
};