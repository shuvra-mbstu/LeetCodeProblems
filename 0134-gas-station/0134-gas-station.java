class Solution {
    public int canCompleteCircuit(int[] gas, int[] cost) {
        int count = 0, des=0, max=0, sum=0;
        
        for(int i=0; i<gas.length; i++){
            
            if(count<0){
                des=i;
                count=0;
            }
            count += (gas[i] - cost[i]);
            sum += (gas[i] - cost[i]);

        }
        if(sum <0) return -1;
        
        return des;
    }
}