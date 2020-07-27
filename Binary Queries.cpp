#include <cstdio>
#include <vector>
 
using namespace std;
 
int main()
{
    int no_of_bits, no_of_queries;
    scanf("%d %d", &no_of_bits, &no_of_queries);
 
    vector <int> number(no_of_bits + 1);
    for(int i = 1; i <= no_of_bits; i++)
        scanf("%d", &number[i]);
 
    while(no_of_queries--)
    {
        const int PARITY_CHECK = 0, FLIP = 1;
 
        int query_type;
        scanf("%d", &query_type);
 
        if(query_type == PARITY_CHECK)
        {
            int left, right;
            scanf("%d %d", &left, &right);
 
            printf(number[right] == 1 ? "ODD\n" : "EVEN\n");
        }
        else if(query_type == FLIP)
        {
            int position;
            scanf("%d", &position);
 
            number[position] ^= 1;
        }
    }
 
    return 0;
}