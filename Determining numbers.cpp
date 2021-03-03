#include <iostream>
#include <vector> 
#include <algorithm>
 
#define all(v) (v).begin(), (v).end()
using namespace std;
 
int main()
{
    int no_of_elements;
    cin >> no_of_elements;
    
    const int MAX = 1e6 + 5;
    vector <int> A(no_of_elements + 1, 0);
    vector <int> frequency(MAX + 1, 0);
    for(int i = 1; i <= no_of_elements; i++)
    {
        cin >> A[i];
        
        frequency[A[i]]++;
    }
    
    vector <int> answer;
    for(int i = 1; i <= no_of_elements; i++)
    {
        if(frequency[A[i]] == 1)
        {
            answer.push_back(A[i]);
        }
    }
    
    sort(all(answer));
    
    for(int i = 0; i < answer.size(); i++)
    {
        cout << answer[i] << " ";
    }
    
    return 0;
}
