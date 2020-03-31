// Contains solution function to the really good set matrix zeroes problem


void setZeroes(vector<vector<int>>& matrix) {
    int r=matrix.size(),c=matrix[0].size();
    bool k,l;
    k=l=false;
    for(int i=0;i<r;++i)
        if(matrix[i][0]==0)
            l=true;
    for(int i=0;i<c;++i)
        if(matrix[0][i]==0)
            k=true;


    for(int i=1;i<r;++i)
        for(int j=1;j<c;++j)
            if(matrix[i][j]==0)
                matrix[0][j]=matrix[i][0]=0;
    for(int i=1;i<r;++i)
        for(int j=1;j<c;++j)
            if(matrix[0][j]==0||matrix[i][0]==0)
                matrix[i][j]=0;
    if(l)
        for(int i=0;i<r;++i)
            matrix[i][0]=0;
    if(k)
        for(int i=0;i<c;++i)
            matrix[0][i]=0;
}

// To make the code run faster

static int __ = []() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);
	return 0;
}();
