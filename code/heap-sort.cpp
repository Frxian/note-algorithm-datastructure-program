#include "common"
#include <algorithm>
#include <span>



// Reconstruct max-heap
void shiftDown(std::span<int> arr, int start, int end)
{
    /// Exchange arr[start] with the max one of its children.
    /// Ensure the start node is not a leaf.
    if (start * 2 + 1 <= end)
    {
        int rightChild = end + 1;

        arr[start] < arr[start * 2 + 1] ? [&](){std::swap(arr[start], arr[start * 2 + 1]);return 0;}() : rightChild = start * 2 + 2;
        start = start * 2 + 1;

        //// If exists right child.
        if (rightChild <= end && arr[rightChild] > arr[(rightChild - 2) / 2])
        {
            std::swap(arr[start], arr[rightChild]);
            
            //// Update start to continuously reconstruct max-heap.
            start = rightChild;
        }
        
        //// Continue reconstruct.
        shiftDown(arr, start, end);
    }
}

// Construct max-heap
void heapify(std::span<int> arr, int N)
{
    for (int i = N - 1; i >= 0; i--)
    {
        shiftDown(arr, i, N - 1);
    }

    FOR_OUT(arr);
}

void heapSort(std::span<int> arr, int N)
{
    // Construct max-heap
    heapify(arr, N);

    // Extract the max item in max-heap into ordered-array.
    for (int i = N - 1; i > 0; i--)
    {
        std::swap(arr[i], arr[0]);

        /// Reconstruct max-heap.
        shiftDown(arr, 0, i);
    }
}

int main(void)
{
    int arr[]{3, 6, 99, 13, 50, 30, 22, 44};
    heapSort(arr, 8);

    // FOR_OUT(arr);

    return 0;
}
