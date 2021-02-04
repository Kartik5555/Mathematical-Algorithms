#include <iostream>

using namespace std;

int calculate_sum (int a){

int sum_of_natural_number = ((a*(a+1))/2);

return sum_of_natural_number;

}

int main(){

int a;
  
cin>>a>>endl;

cout<<calculate_sum(a)<<endl;

return 0;
}

