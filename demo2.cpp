// author - newguo@sonaspy.cn
// coding - utf_8

#include <bits/stdc++.h>

#define test() freopen("in", "r", stdin)

using namespace std;
int bsearch(int array[], int n, int v)
{
    int left, right, middle;
    left = 0, right = n - 1;
    while (left <= right)
    {
        middle = left + (right - left) / 2;
        cout << middle << endl;
        if (array[middle] > v)
            right = middle - 1;
        else if (array[middle] < v)
            left = middle + 1;
        else
            return middle;
    }
    return -1;
}
int main(int argc, char const *argv[])
{
    /* code */
    //test();
    int a[8] = {15, 9, 7, 8, 20, -1, 7, 4};
    make_heap(a, a + 8, greater<int>());
    for (int i = 0; i < 8; i++)
        cout << a[i] << " ";
    return 0;
}