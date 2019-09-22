#include <iostream>
#include <vector>

using namespace std;

template <typename T>

int size_in_bits(const T& a)
{
    return sizeof(a)*8;
}

void Print(const vector<int>& my_vector)
{
    cout << "Vector content: { ";
    for(const int& num : my_vector)
        cout << num << " ";
    cout << " }\n\n";
}

int main() {
    cout << size_in_bits(21) << endl;
    cout << size_in_bits('f') << endl;
    cout << size_in_bits(32.1f) << endl;
    cout << size_in_bits(32.1) << endl;

    vector<int> numbers;
    int value = 0;

    cout << "Pushing back..\n";
    while(value >=0)
    {
        cout << "Enter number: ";
        cin >> value;
        if (value >= 0)
            numbers.push_back(value);
    }

    Print(numbers);
}
