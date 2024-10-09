class Solution {
    public int minFlips(int a, int b, int c) {
        int ans=0;
        int i=0;

        // check bit positon from 0 to 32
        while(i<32){
            if((a%2==c%2 || b%2==c%2) && c%2==1){
                //do nothing
            }
            else if(c%2==0){
                if(a%2==1)
                    ans++;
                if(b%2==1)
                    ans++;
            }
            else{
                ans++;
            }
            //shift right
            a=a>>1; 
            b=b>>1;
            c=c>>1;
            i++;  
        }
        return ans;
    }
}