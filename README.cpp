// Num-read
// leetcode.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include<vector>
#include <iostream>
std::vector<int> nums{ 2,7,11,15 };

int main()
{
    std::cout << "Hello World!\n";
    for (int x = 0; x <= 3; x++) {
        for (int f = 0; f <= 3; f++) {
            if (nums[x] + nums[f] == 13) {
                std::cout << x << "," << f << std::endl;
            }
        }
    }
}
