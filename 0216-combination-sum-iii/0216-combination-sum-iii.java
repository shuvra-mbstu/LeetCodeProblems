class Solution {
    public List<List<Integer>> combinationSum3(int k, int n) {
        List<List<Integer>> list = new ArrayList<>();
        if(n==1)
        {
            return list;
        }
        backtracking(list,new ArrayList<Integer>(),k,n,1);
        return list;
    }
    public void backtracking(List<List<Integer>> list,List<Integer> l1 ,int k,int n,int i)
    {
        if(l1.size()==k && n==0)
        {
            list.add(new ArrayList<>(l1));
            return;
        }
        if(k<0 || n<0)
        {
            return;
        }
        for(int start=i;i<=9;i++)
        {
            l1.add(i);
            backtracking(list,l1,k,n-i,i+1);
            l1.remove(l1.size()-1);
        }
       
    }
}