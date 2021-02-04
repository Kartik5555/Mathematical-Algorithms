#include <iostream>

using namespace std;

int cubes_of_natural_number(int a){

int sum_of_cubes = (((a*(a+1))*(a*(a+1)))/4);

return sum_of_cubes;

}

int main()
{
  int a;

  cin>>a;

  cout<<cubes_of_natural_number(a);

    return 0;
}
