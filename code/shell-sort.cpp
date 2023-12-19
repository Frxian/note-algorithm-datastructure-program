#include "common"
#include <span>

const int gaps[]{4, 2, 1};

void shellSort(int* arr, int N)
{
    // Interate gaps
    for (auto gap : gaps)//std::span(gaps))
    {
        /// From the second item to start
        for (int i = gap; i < N; i++)
        {
            int tmp = arr[i];

            /// Shift all items which is bigger than arr[i]
            int j = i;
            for (; j >= gap && arr[j - gap] > tmp; j -= gap)
            {
                arr[j] = arr[j - gap];
            }

            /// Put arr[i] to the apporiate position.
            arr[j] = tmp;
        }
    }
}

int main(void)
{
    int arr[]{12, 33, 3, 55, 11, 10, 99, 54};

    shellSort(arr, 8);

    for (auto i : arr)//std::span{arr})
    {
        OUT(i);
    }

    return 0;
}
