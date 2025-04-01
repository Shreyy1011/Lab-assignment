class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        map<char,int> count;
        int i,j;
        
        for(i=0;i<9;i++)
        {
            
           for(j=0;j<9;j++)
           {
                count[board[i][j]]++;
           }
           for(j=0;j<9;j++)
           {
                if(count[board[i][j]]>1 && board[i][j]!='.')
                {
                    return false;
                }
           }
           count.clear();
        }
        for(j=0;j<9;j++)
        {
            
           for(i=0;i<9;i++)
           {
                count[board[i][j]]++;
           }
           for(i=0;i<9;i++)
           {
                if(count[board[i][j]]>1 && board[i][j]!='.')
                {
                    return false;
                }
           }
           count.clear();
        }
        for(i=0;i<3;i++)//1
        {
            for(j=0;j<3;j++)
            {
                count[board[i][j]]++;
            }
        }
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                if(count[board[i][j]]>1 && board[i][j]!='.')
            {
                return false;
            }
            }
        }
        
        count.clear();
        for(i=0;i<3;i++)//2
        {
            for(j=3;j<6;j++)
            {
                count[board[i][j]]++;
            }
        }
        for(i=0;i<3;i++)
        {
            for(j=3;j<6;j++)
            {
                 if(count[board[i][j]]>1 && board[i][j]!='.')
            {
                return false;
            }
        
            }
        }
       count.clear();
        for(i=0;i<3;i++)//3
        {
            for(j=6;j<9;j++)
            {
                count[board[i][j]]++;
            }
        }
        for(i=0;i<3;i++)
        {
            for(j=6;j<9;j++)
            {
                if(count[board[i][j]]>1 && board[i][j]!='.')
            {
                return false;
            }
            }
        }
        count.clear();
        for(i=0;i<3;i++)
        {
            for(j=3;j<6;j++)
            {
                 if(count[board[i][j]]>1 && board[i][j]!='.')
            {
                return false;
            }
        
            }
        }
        count.clear();
        
        for(i=3;i<6;i++)//4
        {
            for(j=0;j<3;j++)
            {
                count[board[i][j]]++;
            }
        }

        for(i=3;i<6;i++)//4
        {
            for(j=0;j<3;j++)
            {
    
            
                 if(count[board[i][j]]>1 && board[i][j]!='.')
            {
                return false;
            }
        
            
            }
        }
        count.clear();
        for(i=3;i<6;i++)//5
        {
            for(j=3;j<6;j++)
            {
                count[board[i][j]]++;
            }
        }
        for(i=3;i<6;i++)
        {
            for(j=3;j<6;j++)
            {
        if(count[board[i][j]]>1 && board[i][j]!='.')
            {
                return false;
            }
            }
        }
        count.clear();
        for(i=3;i<6;i++)//6
        {
            for(j=6;j<9;j++)
            {
                count[board[i][j]]++;
            }
        }
        for(i=3;i<6;i++)
        {
            for(j=6;j<9;j++)
            {
        if(count[board[i][j]]>1 && board[i][j]!='.')
            {
                return false;
            }
            }
        }
        count.clear();
        for(i=6;i<9;i++)//7
        {
            for(j=0;j<3;j++)
            {
                count[board[i][j]]++;
            }
        }
        for(i=6;i<9;i++)
        {
            for(j=0;j<3;j++)
            {
        if(count[board[i][j]]>1 && board[i][j]!='.')
            {
                return false;
            }
            }
        }
        count.clear();
        for(i=6;i<9;i++)//8
        {
            for(j=3;j<6;j++)
            {
                count[board[i][j]]++;
            }
        }
        for(i=6;i<9;i++)
        {
            for(j=3;j<6;j++)
            {
        if(count[board[i][j]]>1 && board[i][j]!='.')
            {
                return false;
            }
            }
        }
        count.clear();
        for(i=6;i<9;i++)//9
        {
            for(j=6;j<9;j++)
            {
                count[board[i][j]]++;
            }
        }
        for(i=6;i<9;i++)
        {
            for(j=6;j<9;j++)
            {
        if(count[board[i][j]]>1 && board[i][j]!='.')
            {
                return false;
            }
            }
        }
        count.clear();
        
        return true;

    }
};
