#include<iostream>

using namespace std;

int assign = 50;

int main()
{
int assign = 500;
{
int assign = 5000;
cout << "assign " << assign << '\n'; //assign = 5000
cout << "::assign " << ::assign << '\n';  //assign = 50
}
cout << "assign " << assign << '\n'; //assign = 500
cout << "::assign " << ::assign << '\n';  //assign = 50


}
