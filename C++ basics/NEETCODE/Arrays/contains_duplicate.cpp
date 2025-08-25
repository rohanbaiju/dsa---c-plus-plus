//Contains Duplicate
//Given an integer array nums, return true if any value appears more than once in the array, otherwise return false.
//Recommended Time & Space Complexity
//You should aim for a solution with O(n) time and O(n) space, where n is the size of the input array.






//BRUTE FORCE METHOD 1

/*#include <iostream>
#include <vector> // Using std::vector is safer and more flexible than C-style arrays

int main() {
    int n;
    std::cout << "Enter size of array: ";
    std::cin >> n;

    // Use a std::vector, which can dynamically resize. It's modern C++.
    std::vector<int> nums(n); 
    
    std::cout << "Enter " << n << " elements of array: ";
    for (int i = 0; i < n; i++) {
        std::cin >> nums[i];
    }

    // This boolean will act as a flag. We assume no duplicates at first.
    bool foundDuplicate = false; 

    // --- The Core Logic (O(n^2)) ---
    
    // Outer loop: Pick a number, one by one.
    // We go from the first element up to the second-to-last.
    for (int i = 0; i < n; i++) {
        
        // Inner loop: Compare the picked number (nums[i]) with all the elements AFTER it.
        // We start j from 'i + 1' to avoid comparing an element with itself.
        for (int j = i + 1; j < n; j++) {
            
            // The check: If the number we picked is the same as another number down the line...
            if (nums[i] == nums[j]) {
                // ...we've found a duplicate! Set our flag to true.
                foundDuplicate = true;
                // Since we found what we're looking for, we can stop the inner loop.
                break; 
            }
        }
        
        // If the flag was set to true by the inner loop, we can also stop the outer loop.
        if (foundDuplicate) {
            break;
        }
    }

    // After the loops are finished, check the flag and print the final result ONCE.
    if (foundDuplicate) {
        std::cout << "true" << std::endl;
    } else {
        std::cout << "false" << std::endl;
    }

    return 0;
}

*/

//Correction 2: The Optimal Hash Set Approach - O(n) Time
//This is the goal solution. The strategy is: go through the list once, and use a "memory" (a hash set) to keep track of the numbers you've already seen.

#include <iostream>
#include <vector>
#include <unordered_set> // Include the header for the hash set data structure

int main() {
    int n;
    std::cout << "Enter size of array: ";
    std::cin >> n;

    std::vector<int> nums(n);
    
    std::cout << "Enter " << n << " elements of array: ";
    for (int i = 0; i < n; i++) {
        std::cin >> nums[i];
    }

    bool foundDuplicate = false;

    // --- The Core Logic (O(n)) ---

    // 1. Create our "memory". An unordered_set is a hash set.
    // It's like a magic box where adding and checking for a number is super fast (O(1) on average).
    std::unordered_set<int> seen;

    // 2. Loop through each number in the array just ONCE.
    for (int num : nums) {
        
        // 3. Ask the magic box: "Have we seen this number before?"
        // The .count() function returns 1 (true) if the number is in the set, and 0 (false) if not.
        if (seen.count(num)) {
            
            // If the answer is yes, we found a duplicate!
            foundDuplicate = true;
            // We can stop immediately.
            break; 
        }
        
        // 4. If the number was NOT in the box, add it now.
        // This puts the current number into our memory for future checks.
        seen.insert(num);
    }

    // Finally, print the result.
    if (foundDuplicate) {
        std::cout << "true" << std::endl;
    } else {
        std::cout << "false" << std::endl;
    }

    return 0;
}

//Time Complexity: O(n) because we only loop through the n elements once. Each hash set operation (.count and .insert) is O(1) on average.
//- Space Complexity: O(n) because in the worst-case scenario (an array with all unique elements), our seen set would have to store all n numbers.