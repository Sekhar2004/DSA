#include <vector>
using namespace std;

int removeDuplicates(vector<int> &arr, int n)
 {
    if (n == 0 || n == 1) 
	{
        return n; 
    }

    int index = 0;

    for (int i = 0; i < n - 1; i++) 
	{
        if (arr[i] != arr[i + 1])
		{
            arr[index++] = arr[i]; 
        }
    }

    arr[index++] = arr[n - 1]; 

    return index; 
}
