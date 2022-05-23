
// Copyright (c) 2022 Vrund Patel

#include <iostream>
#include <cmath>

using namespace std;

class Calculator
{
    private:

        char mOperation;
        double firstNum;
        double secNum;
        int powNum;
        int num;

        void takeInput()
        {

            cout << "Enter first number: ";
            cin >> firstNum;
            cout << "Enter second number: ";
            cin >> secNum;

        }

        void takeExponentialInput()
        {

            cout << "Enter base number: ";
            cin >> firstNum;
            cout << "Enter power number: ";
            cin >> powNum;

        }

        void takeFactorialInput()
        {

            cout << "Enter number: ";
            cin >> num;

        }
    
        double add(double firstNum, double secNum) 
        {

            return firstNum + secNum;

        }

        double subtract(double firstNum, double secNum)
        {
            
            return firstNum - secNum;

        }

        double multiply(double firstNum, double secNum)
        {

            return firstNum * secNum;

        }

        double divide(double firstNum, double secNum)
        {

            return firstNum / secNum;

        }

        double exponential(double base, int power)
        {

            double result = 1;

            for(int i = 1; i <= power; ++i){

                result *= base; 

            }

            return result;

        }

        int factorial(int num)
        {

            int result = 1;

            for (int i = 1; i <= num; ++i) {

                result *= i;

            }

            return result;

        }
    
    public:

        Calculator()
        : mOperation(0)
        {

            cout << "Calculator starting ...\n\n";

        }

        virtual ~Calculator()
        {

            cout << "\n\nCalculator exiting\n";

        }
        
        void Operate();

};

void Calculator::Operate()
{

            cout << "The calculator performs the following operations: " << endl;
            cout << "Addition '+', Subtraction '-', Multiplication '*', Division '/', Exponential '^', Factorial '!'. \n" << endl;
            cout << "Enter operation: ";
            cin >> mOperation;

            double result = 0;

            switch (mOperation)
            {

            case '+':

                takeInput();

                result = add(firstNum, secNum);

                break;

            case '-':

                takeInput();

                result = subtract(firstNum, secNum);
                
                break;

            case '*':

                takeInput();

                result = multiply(firstNum, secNum);
                
                break;

            case '/':

                takeInput();

                result = divide(firstNum, secNum);
                
                break;

            case '^':

                takeExponentialInput();

                result = exponential(firstNum, powNum);

                break;

            case '!':

                takeFactorialInput();
                
                result = factorial(num);

                break;
            
            default:

                cout << "Not valid operator." << endl;
                
            }

            cout << "Solution: " << result << endl;

}

int main()
{

    cout << endl;

    {

        Calculator calc;
        calc.Operate();

    }

    cout << endl;
    cout << endl;
    cout << endl;

    return 0;

}
