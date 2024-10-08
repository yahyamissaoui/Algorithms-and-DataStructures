#include <iostream>
#include <vector>
using namespace std;

// Binary Search function
int binarySearch(const vector<int>& arr, int target) {
 int left = 0;
 int right = arr.size() - 1;

 while (left <= right) {
     int mid = left + (right - left) / 2; // To prevent overflow

     // Check if target is present at mid
     if (arr[mid] == target)
         return mid;

     // If target is greater, ignore the left half
     if (arr[mid] < target)
         left = mid + 1;

     // If target is smaller, ignore the right half
     else
         right = mid - 1;
 }

 // Target is not present in the array
 return -1;
}
