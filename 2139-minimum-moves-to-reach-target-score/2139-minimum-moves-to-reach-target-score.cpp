class Solution {
public:
    int minMoves(int target, int maxDoubles) {
        int x = 0;
        int count = 0 ;
         
        
        while(target!=1 and maxDoubles>0){
       
        
        if(target%2==0 ){
            target = target/2;
            count++;
            maxDoubles--;
        }
        else{
            target = target - 1;
            count++;
            
        }
        }
         return count + (target-1);
        
        
    }
};