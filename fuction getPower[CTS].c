double getPower(int X, int Y)
{
    if(Y >= 0)
    {
        return pow(X, Y);
    }
    else
    {
        if(Y%2!=0){
            return 1.0/pow(X,Y)/X/X;
        }else{
            return 1.0/pow(X, Y)/X;
        }
    }
}
