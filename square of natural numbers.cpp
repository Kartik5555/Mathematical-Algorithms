#include <iostream>

using namespace std;

int calculate_sum_square (int b){

int sum_of_square = (b*(b+1)*((2*b)+1))/6;

return sum_of_square;

}

int main()
{

  int b;

  cin>>b;

  cout<<calculate_sum_square(b);

    return 0;
}
