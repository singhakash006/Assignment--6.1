#include<bits/stdc++.h>
using namespace std;

void towerOfHanoi(int n, char base1, char base2,char base3)
{
    if (n == 0) {
        return;
    }
    towerOfHanoi(n - 1, base1, base2, base3);
    cout << "Move disk " << n << " from rod " << base1
         << " to rod " << base2 << endl;
    towerOfHanoi(n - 1, base3, base2, base1);
}
 
// Driver code
int main()
{
    int N ;
 cin>>N;
    
    towerOfHanoi(N, 'A', 'C', 'B');
    return 0;
}
