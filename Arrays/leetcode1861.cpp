class Solution {
public:
    vector<vector<char>> rotateTheBox(vector<vector<char>>& boxGrid) {
        int m=boxGrid.size();
        int n=boxGrid[0].size();
        for(int i=0;i<m;i++)
        { 
            int lasthold=n-1;
            for(int j=n-1;j>=0;j--)
            {
                if(boxGrid[i][j]=='*')
                {
                    lasthold=j-1;
                }
                else if(boxGrid[i][j]=='#')
                {
                    swap(boxGrid[i][j],boxGrid[i][lasthold]);
                    lasthold--;
                }
            }
        }

        //rotate formula comes from tranapose+reverse rows fro clockwise 90 deg rot
        vector<vector<char>>copy(n,vector<char>(m,'.'));
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                copy[j][m-1-i]=boxGrid[i][j];
            }
        }
        return copy;
    }
};