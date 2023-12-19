#include <iostream>

int main(void)
{
    int a[]{4, 9, 10, 3, 5, 11, 2};
    int N = 7;
    int b[]{4, 9, 10, 3, 5, 4, 2, 11};
    int k = 11;
    int i = 0;

    // Set a sentinel in array
    while (k != b[i++]){}

    std::cout << "res: " << (b[--i] == k && i != N);

    return 0;
}
