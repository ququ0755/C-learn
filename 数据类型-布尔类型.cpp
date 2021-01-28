#include <iostream>
using namespace std;

int main(){
    
    //1 创建bool数据类型
    bool flag = true;//true代表真
    cout << flag << endl; //1

    flag = false;//false代表假
    cout << flag <<endl; //0

    
    //本质上1代表真，0代表假
    
    //查看bool内存空间
    
    cout << "size of bool = " << sizeof(bool) << endl;


    system("pause")


    return 0;

}
