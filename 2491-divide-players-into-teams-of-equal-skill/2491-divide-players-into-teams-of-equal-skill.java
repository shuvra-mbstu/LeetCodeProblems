class Solution {
    public long dividePlayers(int[] skill) {
        Arrays.sort(skill);
        long res=0;
        int d=skill[0]+skill[skill.length-1];
        for(int i=0;i<skill.length/2;i++)
        {
            int s=skill[i];
            int e=skill[skill.length-1-i];
            if(d!=s+e)return -1;
            res+=(s*e);
        }
        return res;

    }
}