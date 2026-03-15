#include <iostream>
using namespace std;
class addition {
    private:
    int num1, num2, sum;
    
    public:
        void getData() {
            cout<<"Enter two number"<<endl;
            cin>>num1>>num2;

        }
        void getSum_dis() {
            sum = num1 + num2;
            cout<<"Sum = "<<sum<<endl;

        }


};
int main(){
    addition obj;

    obj.getData();
    obj.getSum_dis();
    
return 0;
}