#include <iostream>

using namespace std;

void increase(int& a){
    a++;
    
    cout << "Function after increase is " << a << endl;
}

int main()
{
 int increNum = 5;
 increase(increNum);
 
 cout <<"AFter called is " << increNum;

 return 0;
}
