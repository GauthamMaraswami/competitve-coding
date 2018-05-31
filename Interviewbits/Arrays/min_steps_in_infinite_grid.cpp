

    int getsteps(int x1,int y1,int x2,int y2,int steps)
    {
        if(x1==x2&&y1==y2)
        {
            return steps;
        }
       else if(x1==x2&&y1<y2)
        {
            steps=getsteps(x1,y1+1,x2,y2,steps+1);
        }
        else if(x1==x2&&y1>y2)
        {
          steps=getsteps(x1,y1-1,x2,y2,steps+1);   
        }
        else if(x1<x2&&y1<y2)
        {
            steps=getsteps(x1+1,y1+1,x2,y2,steps+1);
        }
        else if(x1<x2&&y1>y2)
        {
          steps=getsteps(x1+1,y1-1,x2,y2,steps+1);   
        }
        else if(x1>x2&&y1<y2)
        {
            steps=getsteps(x1-1,y1+1,x2,y2,steps+1);
        }
        else if(x1>x2&&y1>y2)
        {
          steps=getsteps(x1-1,y1-1,x2,y2,steps+1);   
        }
        else if(x1<x2&&y1==y2)
        {
            steps=getsteps(x1+1,y1,x2,y2,steps+1);
        }
        else if(x1>x2&&y1==y2)
        {
          steps=getsteps(x1-1,y1,x2,y2,steps+1);   
        }
        return steps;
        
        
        
    }
    int getsteps1(int x1,int y1,int x2,int y2,int steps)
    {
            steps=max(abs(x1-x2),abs(y1-y2));
            return steps;
    }
    int Solution::coverPoints(vector<int> &A, vector<int> &B) {
        int steps=0;
        int initposx=A[0];
        int initposy=B[0];
        for(int i=1;i<A.size();++i)
        {
            steps+=getsteps1(initposx,initposy,A[i],B[i],0);
            initposx=A[i];
            initposy=B[i];
        }
        return steps;
        
    }


