//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    // Function to count the frequency of all elements from 1 to N in the array.
    void frequencyCount(vector<int> &arr, int N, int P)
    {
        int i, j;
        for (i = 0; i < N;)
        {
            if (arr[i] > 0 && arr[i] <= N)
            {
                j = arr[i] - 1;
                if (arr[j] <= 0)
                {
                    arr[i] = 0;
                    arr[j]--;
                    i++;
                }
                else
                {
                    swap(arr[j], arr[i]);
                    arr[j] = -1;
                }
            }
            else if (arr[i] > N)
            {
                arr[i] = 0;
                i++;
            }
            else
            {
                i++;
            }
        }

        for (int i = 0; i < N; i++)
        {
            arr[i] = -arr[i];
        }
    }
};

//{ Driver Code Starts.

int main()
{
    vector<int> arr = {1,
                       2,
                       3,
                       4,
                       5};
    int N = 5, P = 5;
    Solution ob;
    ob.frequencyCount(arr, N, P);

    // printing array elements
    for (int i = 0; i < N; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}

// } Driver Code Ends