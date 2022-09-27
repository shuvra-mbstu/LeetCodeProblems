class Solution {
public:
    string pushDominoes(string dominoes) {
      int n=dominoes.size();
      vector<int>forces(n);

        int force=0;
        
        //calculating net force by each 'R' domino from left to right
        for(int i=0;i<n;i++){
            
            if(dominoes[i]=='R'){
                force=n;
            }else if(dominoes[i]=='L'){
                force=0;
            }else{
                force=max(force-1,0);//decreasing the net force each time we encounter '.'
            }
            forces[i]+= force; //left to right positive force
        }
         //calculating net force by each 'L' domino from right to left
        for(int i=n-1;i>=0;i--){
            
            if(dominoes[i]=='L'){
                force=n;
            }else if(dominoes[i]=='R'){
                force=0;
            }else{
                force=max(force-1,0);//decreasing the net force each time we encounter '.'
            }
            forces[i]-=force;//right to left negative force
        }

        //calculating net force on each domino and the state will be L,R,. based on whether the net force is negative, positive or zeor respectively 
        for(int i=0;i<n;i++){
            if(forces[i]>0){
                dominoes[i]='R';
            }else if(forces[i]<0){
                dominoes[i]='L';
        }else{
            dominoes[i]='.';
        }
        }
        return dominoes;
    }
};