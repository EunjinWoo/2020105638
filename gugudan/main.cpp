#include <iostream>

using namespace std;

int main()
{
    for(int i=1; i<=9; i++){//9�ܱ��� �Ϸ��� 8->9�� ����
        for(int j=1; j<=9; j++){
            cout << i << "*" << j << "=" << i*j << "\n";
        }
    }
    return 0;
}
