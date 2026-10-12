// first(not).cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

/*int main()
{
    int FirstNumber, SecondNumber, result;

    std::cout << "FirstNumber";
    std::cin >> FirstNumber;
        std::cout << "SecondNumber";
        std::cin >> SecondNumber;
        result = FirstNumber + SecondNumber;
        std::cout << "result : " << result << "\n";
        return 0;
}*/

#include <iostream>

/*int main()
{

        int FirstNumber, SecondNumber;

        std::cin >> FirstNumber;

        std::cin >> SecondNumber;

        std::cout << "FirstNumber + SecondNumber : " << FirstNumber + SecondNumber << "\n";

        std::cout << "FirstNumber - SecondNumber : " << FirstNumber - SecondNumber << "\n";

        std::cout << "FirstNumber * SecondNumber : " << FirstNumber * SecondNumber << "\n";

        std::cout << "FirstNumber / SecondNumber : " << FirstNumber / SecondNumber << "\n";

        std::cout << "FirstNumber % SecondNumber : " << FirstNumber % SecondNumber << "\n";
    return 0;
}*/

#include <iostream>

/*int main()
{

    double a, b, P, S;
    std::cin >> a;
        std::cin >> b;
        P = 2 * (a + b);
        S = a * b;
        std::cout << "P : " << P << "\n";
        std::cout << "S : " << S << "\n";
        return 0;
}*/

#include <iostream>
/*
int main()
{
    double c, d,e,avg;
    std::cout << "c";
    std::cin >> c;
    std::cout << "d";
    std::cin >> d;
    std::cout << "e";
    std::cin >> e;
    avg = (c + d + e) / 3;
    std::cout << "avg : " << avg << "\n";
    return 0;
}*/
#include <iostream>
/*
int main()
{
    int seconds,minutes,hours;
    std::cout << "seconds";
    std::cin >> seconds;

    hours = seconds / 3600;
    minutes = (seconds % 3600) / 60;
    seconds = seconds % 60;
    std::cout << hours << ":" << minutes << ":" << seconds;
    return 0;
}*/

#include <iostream>
/*
int main()
{
    double C,F;
    std::cout << "C";
    std::cin >> C;
    F = C * 9 / 5 + 32;
    std::cout << F;
    return 0;
}*/

#include <iostream>
/*
int main()
{
    const double PI = 3.14159;
    double r,L,S;
    std::cin >> r;
    L = 2 * PI * r;
    S = PI * r * r;
    std::cout << "L : " << L << "\n";
    std::cout << "S : " << S << "\n";
    return 0;
}*/

#include <iostream>
/*
int main()
{
   int n,z,x,c,v,sum,product;
   std::cin >> n;
  z = n / 1000;
  x = n / 100 % 10;
  c = n / 10 % 10;
  v = n % 10;
  sum = z + x + c + v;
  std::cout << sum << "\n";
  product = z * x * c * v;
  std::cout << product;

   return 0;
}*/

#include <iostream>

int main()
{
    const double TAX = 0.13;
    double gpm, hours, prem, dirtyMoney, pureMoney, nalog;

    std::cout << "gpm: ";
    std::cin >> gpm;

    std::cout << "hours: ";
    std::cin >> hours;

    std::cout << "prem: ";
    std::cin >> prem;

    dirtyMoney = gpm * hours + prem;
    nalog = dirtyMoney * TAX;
    pureMoney = dirtyMoney - nalog;

    std::cout << "dirtyMoney : " << dirtyMoney << "\n";
    std::cout << "nalog : " << nalog << "\n";
    std::cout << "pureMoney : " << pureMoney << "\n";

    return 0;
}