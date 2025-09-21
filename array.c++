#include <iostream>
#include <vector>
using namespace std;

void heapify(vector<int>& nums, int n, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && nums[left] > nums[largest])
        largest = left;

    if (right < n && nums[right] > nums[largest])
        largest = right;

    if (largest != i) {
        int temp = nums[i];
        nums[i] = nums[largest];
        nums[largest] = temp;
        heapify(nums, n, largest);
    }
}

void heapSort(vector<int>& nums) {
    int n = nums.size();

    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(nums, n, i);

    for (int i = n - 1; i > 0; i--) {
        int temp = nums[0];
        nums[0] = nums[i];
        nums[i] = temp;
        heapify(nums, i, 0);
    }
}

int main() {
    
    vector<int> nums;
    nums.push_back(5);
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(1);

    heapSort(nums);

    cout << "Sorted array: ";
    for (size_t i = 0; i < nums.size(); ++i)
        cout << nums[i] << " ";
    cout << endl;

    return 0;
}