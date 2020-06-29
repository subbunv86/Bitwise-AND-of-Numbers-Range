// Bitwise AND of Numbers Range.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
class Solution {
public:
	int rangeBitwiseAnd(int m, int n) 
	{
		int nCount = 0;
		int nRet = 0;
		while (m != n)
		{
			m=m >> 1;
			n=n >> 1;
			nCount++;
		}
		while (nCount != 0)
		{
			m = m << 1;
			nCount--;
		}
		return m;
	}
};
int main()
{
	Solution slnObj;
    std::cout << slnObj.rangeBitwiseAnd(5,7);
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
