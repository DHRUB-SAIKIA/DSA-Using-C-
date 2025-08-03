#include <iostream>
#include <cmath>
using namespace std;
class ArmstrongNumberChecker 
{
private:
    int number;

    int countDigits() 
	{
        int count = 0;
        int temp = number;

        while (temp != 0) 
		{
            temp /= 10;
            count++;
        }

        return count;
    }

public:
    ArmstrongNumberChecker(int n) : number(n) {}

    bool isArmstrongNumber() 
	{
        int numDigits = countDigits();
        int sum = 0;
        int temp = number;

        while (temp != 0) 
		{
            int digit = temp % 10;
            sum += pow(digit, numDigits);
            temp /= 10;
        }

        return (sum == number);
    }
};

int main() 
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    ArmstrongNumberChecker checker(num);

    if (checker.isArmstrongNumber()) 
	{
        cout << num << " is an Armstrong number." <<endl;
    } else 
	{
        cout << num << " is not an Armstrong number." <<endl;
    }

    return 0;
}