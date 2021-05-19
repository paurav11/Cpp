#include <iostream>
using namespace std;
int count=0;
class test
{
public:
    test()
    {
        ++count;
        cout<<"Object number "<<count<<" created."<<endl;
    }
    ~test()
    {
        cout<<"Object number "<<count<<" destroyed."<<endl;
        count--;
    }
};

int main()
{
    {
      test t1;
      {
       test t2;
       test t3;
      }
    }
    return 0;
}
