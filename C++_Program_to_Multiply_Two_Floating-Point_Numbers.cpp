#include <iostream>
using namespace std;
class multiply{
    private:
    float n1,n2,result;

    public:
        void getData() {
            cout<<"Enter two floating value"<<endl;
            cin>>n1>>n2;
        }
        void cal_dis() {
            result = n1 * n2;
            cout<<"Multiply = "<<result<<endl;
        }


};
int main(){
    multiply obj;
    obj.getData();
    obj.cal_dis();
return 0;
}