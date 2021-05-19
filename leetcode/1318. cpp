class Solution {
public:
    int minFlips(int a, int b, int c) {
        
        int flips=0;
        for(int i=0;i<32;++i){
            bool aCheck=(a&(1<<i));
            bool bCheck=(b&(1<<i));
            bool aOrB= (aCheck | bCheck);
            bool cCheck=(c&(1<<i));
            if(aOrB!=cCheck){
                if(cCheck==true){
                    ++flips;
                }
                else{
                    if(aCheck==true && bCheck==true)
                        flips+=2;
                    else 
                        ++flips;
                }
            }
            
        }
        return flips;
    }
};
