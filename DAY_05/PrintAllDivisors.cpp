class Solution
{
public:
    long long sumOfDivisors(int N)
    {
        long sum=0;
        int k;
        int i=1;
        while(i<=N){
            k=N/i;
            sum=sum+i*k;
            i++;
        }
        return sum;
    }
};