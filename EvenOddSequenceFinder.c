#include<stdio.h>
#define z 24
void havana ( int t[], int n, int *s, int *c )
{
    int x = 0, k = 0;
    for ( int i = 0; i < n; i++ )
    {
        if ( t[i] % 2 == 0 )
        {
            x = 0;
            k++;
            if ( *c < k )
                *c = k;
        }        
        else
        {
            k = 0;
            x++;
            if ( *s < x )
                *s = x;
        }
    }
}
int main()
{
    int e = 0, o = 0;
    int t[z] = {2,0,4,5,3,1,9,7,6,4,2,12,80,90,77,34,0,1,21,43,178,911,33,1};
    havana ( t, z, &o, &e);
    printf(" the longest even sequence was made by %d even number\n and the longest alternating odd sequence is %d", e, o );
    return 0;
}
