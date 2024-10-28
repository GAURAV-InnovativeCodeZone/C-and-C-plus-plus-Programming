// sum of a digit of any number

#include<iostream>
using namespace std;
int main()
{
    int n, sum = 0, rem;
	std::cout << "Enter the three digit number : ";
    std::cin >> n;
    while (n > 0)
    {
        rem = n % 10;
        sum = sum + rem;
        n = n / 10;
    }
    std::cout << "sum of three digit number is " << sum;
    return 0;
}
