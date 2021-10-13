#include <bits/stdc++.h>
using namespace std;

/*
    Input:
    n1 = 6; A = {1, 5, 10, 20, 40, 80}
    n2 = 5; B = {6, 7, 20, 80, 100}
    n3 = 8; C = {3, 4, 15, 20, 30, 70, 80, 120}

    Output: 20 80

    Explanation: 20 and 80 are the only
    common elements in A, B and C.
*/


class Solution
{
public:
    vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
    {
        vector<int > arr;
        n1--; n2--; n3--;
        while (n1 >= 0 && n2 >= 0 && n3 >= 0) {
            if (A[n1] == B[n2] && B[n2] == C[n3]) {
                arr.push_back(A[n1]);
                n1--; n2--; n3--;
            }
            else if (A[n1] > B[n2] && A[n1] > C[n3]) n1--;
            else if (A[n1] > B[n2] && A[n1] == C[n3]) {
                n1--;
                n3--;
            }
            else if (B[n2] > C[n3] && B[n2] > A[n1]) n2--;
            else if (B[n2] > C[n3] && B[n2] == A[n1]) {
                n2--;
                n1--;
            }
            else if (C[n3] > A[n1] && C[n3] >= B[n2]) n3--;
            else if (C[n3] > A[n1] && C[n3] == B[n2]) {
                n3--;
                n2--;
            }

        }
        if (arr.size() == 0) {
            arr.push_back(-1);
            return arr;
        }
        reverse(arr.begin(), arr.end());
        vector<int > :: iterator i;
        for (auto i = arr.begin() + 1; i != arr.end(); )
        {
            if (*(i - 1) == (*i)) {
                arr.erase(i);
            }
            else ++i;
        }
        return arr;
    }
};


int main ()
{
    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;
    int A[n1];
    int B[n2];
    int C[n3];
    for (int i = 0; i < n1; i++) cin >> A[i];
    for (int i = 0; i < n2; i++) cin >> B[i];
    for
    (int i = 0; i < n3; i++) cin >> C[i];

    Solution ob;

    vector <int> res = ob.commonElements (A, B, C, n1, n2, n3);
    if (res.size () == 0)
        cout << -1;
    for (int i = 0; i < res.size (); i++)
        cout << res[i] << " ";
    cout << endl;
}
