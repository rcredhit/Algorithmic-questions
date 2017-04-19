// first line takes size of the array (<=1000000)
// second line takes space separated integers
// output gives the length of the longest increasing subsequence

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n],seq[n];
    int i,j,longest = 0;
    cin>>a[0];
    seq[0] = 1;
    for(i=1;i<n;i++)
    {
        seq[i] = 1;
        cin>>a[i];
        for(j=0;j<i;j++)
        {
            if(a[i]>a[j])
                if(seq[i]<seq[j]+1)
                    seq[i] = seq[j]+1;
        }
        if(longest<seq[i])
            longest = seq[i];
    }
    cout<<longest;
    return 0;
}
