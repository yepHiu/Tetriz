#include <iostream>
#include <thread>
#include <chrono>
#include <terminal_contrl.h>

using namespace std;

int main(void)
{
    // tc代码测试
    // tc::EraseScreen();
    // tc::SetFontColor(214);
    // cout<<"helloworld"<<endl;
    // tc::ResetMode();
    // tc::SetBackColor(214);
    // cout<<"  ";
    // tc::ResetMode();
    // cout<<endl;
    // cout<<flush;

    tc::HideCursor();
    int i=0;
    while (1) {
        tc::EraseScreen();
        tc::MoveTo(i, 10);
        tc::SetBackColor(214);
        cout<<"  ";
        tc::ResetMode();
        cout<<flush;   
        this_thread::sleep_for(1s);// us ms s
        i++;
    }
    return 0;
}