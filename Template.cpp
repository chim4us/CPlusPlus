#include <iostream>

using namespace std;

template <class T>
class MathTools{

  public:
   T multiply(T a, T b){
    return a*b;
   }
   T divide(T a, T b){
    return a/b;
   }
   T add(T a, T b){
    return a+b;
   }
   T subtract(T a, T b){
    return a-b;
   }
};

typedef MathTools<int> IntTools;
typedef MathTools<double> DoubleTools;

int main()
{
 IntTools intMathTools;
 DoubleTools doubleMathTools;

 cout<<doubleMathTools.add(3.7,2.1);

 return 0;
}
