#include "mgr.h"
#include "db.h"
#include<iostream>
using namespace std;
int main()
{
    system("color 9f");
    Mgr mgr;
    mgr.init();
    mgr.start();
    mgr.exit();
    return 0;
}
