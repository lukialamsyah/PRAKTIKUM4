#include <iostream>

using namespace std;

int main()
{
    int max, a;
    max = 0;

    do {
        cout<<"masukan bilangan (masukan 0 untuk berhenti :" ;
        cin>>a;
        if (max<a)
            max = a;
    } while (a != 0);
    cout<<"Bilangan terbesar adalah : "<< max << endl;
    return 0;

}
