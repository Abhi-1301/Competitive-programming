#include <iostream>
 
using namespace std;
 
void solve()
{
    int n;
    cin >> n;
    
    int answer = n/4 + (n%4 >= 2);
    cout << answer << endl;
}
 
int main()
{
    int no_of_test_cases;
    cin >> no_of_test_cases;
    
    while(no_of_test_cases--)
        solve();
        
    return 0;
}
