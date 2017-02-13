#include <cmath>
#include <cstdio>
#include <cstring>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

#define MAX_STR_LENGTH 20

int main() {
    int N, Q;
    cin >> N;
    char strings[N][MAX_STR_LENGTH];
    for(int i=0; i<N; i++)
    {
        cin >> strings[i];
    }
    cin >> Q;
    char query[MAX_STR_LENGTH + 1];
    for(int i=0; i<Q; i++)
    {
        cin >> query;
        int count = 0;
        for(int j=0; j<N; j++)
        {
            if(strcmp(strings[j], query) == 0)
            {
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}
