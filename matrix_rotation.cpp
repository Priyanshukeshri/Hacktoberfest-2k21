// C++ program for
// the above approach
#include <bits/stdc++.h>
using namespace std;

// Function to print the matrix mat
// with N rows and M columns
void print(vector<vector<int> > mat,
		int N, int M)
{
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cout << mat[i][j] << " ";
		}

		cout << "\n";
	}
}

// Function to rotate the matrix
// by 90 degree clockwise
void rotate(vector<vector<int> > mat)
{
	// Number of rows
	int N = mat.size();

	// Number of columns
	int M = mat[0].size();

	// Swap all the elements along main diagonal
	// in the submatrix min(N, M) * min(N, M)
	for (int i = 0; i < min(N, M); i++) {
		for (int j = i; j < min(N, M); j++) {

			// Swap mat[i][j] and mat[j][i]
			swap(mat[i][j], mat[j][i]);
		}
	}

	// If N is greater than M
	if (N > M) {

		// Push all the unswapped elements
		// of ith column to ith row
		for (int i = 0; i < M; i++) {
			for (int j = min(N, M); j < N; j++) {
				mat[i].push_back(mat[j][i]);
			}
		}
	}
	else {
		// Resize mat to have M rows
		mat.resize(M, {});

		// Push all the unswapped elements
		// of ith column to ith row
		for (int i = min(N, M); i < M; i++) {
			for (int j = 0; j < N; j++) {
				mat[i].push_back(mat[j][i]);
			}
		}
	}

	// Reverse each row of the matrix
	for (int i = 0; i < M; i++) {
		reverse(mat[i].begin(), mat[i].end());
	}

	// Print the final matrix
	print(mat, M, N);
}

// Driver Code
int main()
{
	// Input
	vector<vector<int> > mat = { { 1, 2, 3 },
								{ 4, 5, 6 },
								{ 7, 8, 9 },
								{ 10, 11, 12 } };

	// Function Call
	rotate(mat);

	return 0;
}
