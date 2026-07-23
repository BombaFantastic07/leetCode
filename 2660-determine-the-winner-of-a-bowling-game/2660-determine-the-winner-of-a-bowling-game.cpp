class Solution {
public:
    int isWinner(vector<int>& player1, vector<int>& player2) {
        int sum1 = 0 , sum2 = 0 , flag1 = 0 , flag2 = 0;
        for(int i = 0; i < player1.size() ; i++){
            if(flag1>0){
                sum1+=2*player1[i];
                flag1--;
            }
            else{
                sum1+=player1[i];
            }
            if(flag2>0){
                sum2+=2*player2[i];
                flag2--;
            }
            else{
                sum2+=player2[i];
            }
            if(player1[i]==10) flag1 = 2;
            if(player2[i]==10) flag2 = 2;
        }
        if(sum1==sum2) return 0;
        else if(sum1>sum2) return 1;
        else return 2;
    }
};