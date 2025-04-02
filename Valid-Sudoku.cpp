class Solution
{
public:
    bool isValidSudoku(vector<vector<char>> &board)
    {
        for (int i = 0; i < 9; i++)
        {
            int arr[10] = {0};
            for (int j = 0; j < 9; j++)
            {
                if (board[i][j] >= '1' && board[i][j] <= '9')
                {
                    arr[board[i][j] - '0']++;
                    
                    if (arr[board[i][j] - '0'] > 1)
                        return 0;
                }
                else if(board[i][j] != '.')
                {
                    return 0;
                }
            }
        }
        for (int i = 0; i < 9; i++)
        {
            int arr[10] = {0};
            for (int j = 0; j < 9; j++)
            {
                if (board[j][i] >= '1' && board[j][i] <= '9')
                {
                    arr[board[j][i] - '0']++;
                    
                    if (arr[board[j][i] - '0'] > 1)
                        return 0;
                }
                else if(board[j][i] != '.')
                {
                    return 0;
                }
            }
        }
        for (int t = 0; t < 3; t++)
        {
            for (int k = 0; k < 3; k++)
            {
                int arr[10] = {0};
                for (int i = t*3; i < t*3 + 3; i++)
                {
                    for (int j = k*3; j < k*3 + 3; j++)
                    {
                        if(board[i][j] != '.')
                        {
                            arr[board[i][j] - '0']++;
                            if (arr[board[i][j]-'0'] > 1)
                            {
                                cout << i << j;
                                    return 0;

                            }
                        }
                    }
                }
            }
        }
        return 1;
    }
};
