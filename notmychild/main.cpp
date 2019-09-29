#include <iostream>

class Mac()
{
    int findSmallestRemainingElement(int array[], int index)
    {
        int index_of_smallest_value = index;
        for(int i = index + 1; i < sizeof(array); i++)
        {
            if (array[i] < array[index_of_smallest_value])
                index_of_smallest_value = I;
        }
    }
    return index_of_smallest_value;
};

int main()
{
    Mac m = new Mac();
    int w[4] {3, 2, 1, 0, 4};
    m.findSmallestRemainingElement(w, 2);
    return 0;
}
