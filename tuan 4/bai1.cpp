int maxThree(int a, int b, int c)
{
    int result = a;
    if(result < b)result = b;
    if(result < c)result = c;
    return result;
}