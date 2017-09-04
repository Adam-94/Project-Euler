#include <iostream>

int main()
{
    int a = 1, b = 1, c = 0, sum = 0;

    while(a <= 4000000)
    {
        if(a % 2 == 0)
            sum += a;

        c = a;
        a += b;
        b = c;

        std::cout << "B: " << b << "\t\t\t" << "\t\t\t" << "Sum: " << sum << std::endl;
    }
    return 0;
}
