#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int findIndex(int N, int lastAns, int x )
{
    return ((x ^ lastAns) % N);
}

int main() {
    int N, Q;
    //Read number of sequencies N
    cin >> N;
    //Read number of queries Q
    cin >> Q;
    int lastAns = 0;
    
    //Construct the sequences
    vector<int>* seqs = new vector<int>[N];
    
    //The query numbers
    int queryType, x, y;
    
    for(int q=0; q<Q; q++)
    {
        cin >> queryType;
        cin >> x;
        cin >> y;

        int index = findIndex(N, lastAns, x);
        if(queryType == 1)
        {
            seqs[index].push_back(y);
        }
        else
        {
            lastAns = seqs[index][y % seqs[index].size()];
            cout << lastAns << endl;
        }
    }
    
    delete seqs;
    return 0;
}
