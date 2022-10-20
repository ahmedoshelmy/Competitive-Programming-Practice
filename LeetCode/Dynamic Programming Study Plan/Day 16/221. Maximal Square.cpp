typedef vector<int> vi;
typedef vector<vi> vvi; 
class Solution {
public:
    vvi pre_c ,pre_r ; 
    int maximalSquare(vector<vector<char>>& matrix) {
        int n = matrix[0].size() ,m = matrix.size();
        pre_c = pre_r = vvi(m,vi(n)); 
        for (int i = 0; i <m; ++i) {
            pre_r[i][0] = matrix[i][0] == '1' ;
            for (int j = 1; j < n; ++j) {
                pre_r[i][j] = pre_r[i][j-1] + (matrix[i][j] == '1');
            }
        }
        for (int i = 0; i <n; ++i) {
            pre_c[0][i] = matrix[0][i] == '1' ;
            for (int j = 1; j < m; ++j) {
                pre_c[j][i] = pre_c[j-1][i] + (matrix[j][i] == '1');
            }
        }int ans =0 ;
        vvi dp(m , vector<int>(n));
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if(matrix[i][j]=='0') continue; 
                dp[i][j] = 1; ans = max(ans ,1);
                if(i&&j){
                    if(dp[i-1][j-1]){
                        for (int k = dp[i-1][j-1]; k >=1 ; --k) {
                            int c =pre_c[i][j] - pre_c[i-k][j] + (matrix[i-k][j]=='1');
                            int r = pre_r[i][j] - pre_r[i][j-k] + (matrix[i][j-k]=='1') ;
                            if(r ==k+1 && c ==k+1) {
                                dp[i][j] = k+1,ans =max(ans,((k+1)*(k+1)));
                                break ;
                            }
                        }
                    }
                }
            }
            cout<<endl;
        }
        return ans;
    }
};
