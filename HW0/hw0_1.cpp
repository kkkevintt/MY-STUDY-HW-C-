//輸入與輸出用 <iostream>
#include <iostream> 
//可以省略 std:: 前缀
using namespace std;

void dinner(int wen, int ren);
void stroll(int wen, int ren);
void bathroom(int wen, int ren);

//cout = result 
//cin = user input 
int main()
{
    //cin = scn 
    int scn, wen, ren;
    while (true)
    {
        cout << "please enter 0-4\n";
        cout << "0 : break while ,1 : dinner \n";
        cout << "2 : take a walk ,3 : bathroom\n";
        //0到四 選地方或取消
        cin >> scn;
        //cin = scn 
        if (scn == 0)
        {
            cout << "the end !! no i say no\n";
            break;
        }
        else if (scn == 1)
        {
            cout << "please enter wens mon\n";
            cin >> wen;
            cout << "please enter rens mon\n";
            cin >> ren;
            dinner(wen, ren);
        }
        else if (scn == 2)
        {
            cout << "1 = wen ok , 0 = wennie not ok\n";
            cin >> wen;
            cout << "1 = ren ok , 0 = ren not ok\n";
            cin >> ren;
            stroll(wen, ren);//漫步
        }
        else
        {
            cout << "1 = wen ok , 0 = wennie not ok\n";
            cin >> wen;
            cout << "1 = ren ok , 0 = ren not ok\n";
            cin >> ren;
            bathroom(wen, ren);
        }
        cout << "\n\n";
    }
    return 0;
}

void dinner(int wen, int ren)
{
    //And 為同時擁有 &&
    if ((wen == ren) && (ren != 0))
    {
        cout << "both have money but i believe you bring enough\n";
        cout << "lets go fucking dinner\n";
    }
    else
    {
        cout << "可能無法\n";
    }
}

void stroll(int wen, int ren)
{
    if ((wen == 1) || (ren == 1))
    {
        cout << "兩個en其中一個要\n";
        cout << "lets go to walk and 課金\n";
    }
    else
    {
        cout << "maybe 大家在睡覺可能要改天\n";
    }
}

void bathroom(int wen, int ren)
{
    if ((wen == 1) ^ (ren == 1))
    {
        cout << "//有一個人上\n";
        cout << "慢慢來\n";
    }
    else
    {
        cout << "都不要上阿(原句)\n";
        cout << "世說可以憶起去學校上壓表哥\n";
    }
}
