class Solution {
    public boolean checkIfExist(int[] arr) {
        Map<Integer, Boolean> map = new HashMap<>();
        
        for(int i=0; i<arr.length; i++){
            if(map.containsKey(2*arr[i]) || (map.containsKey(arr[i]/2) && arr[i]%2 == 0)) return true;
            
            map.put(arr[i], true);
        }
        
        return false;
    }
}