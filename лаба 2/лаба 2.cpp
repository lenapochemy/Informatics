#include <iostream>
#include <cstring>
using namespace std;
int main() {

    string st;
    getline(cin,st); // ������ ���������

    if(int(st.size()) != 7) {cout << "invalid input";
                    return 0;}

    for(int i=0; i<int(st.size()); i++ ){
        if(st[i] != '0' && st[i] != '1') {
            cout << "invalid input";
            return 0;
            }
        }

// ��������� ��������� �� ����:
//  r1 = st[0]  r2 = st[1]  i1 = st[2]  r3 = st[3]
//  i2 = st[4]  i3 = st[5]  i4 = st[6]

    int s1,s2,s3,s;
// ������� ����������� ����� � �������:
    s1 = (st[0] + st[2] + st[4] + st[6]) % 2;
    s2 = (st[1] + st[2] + st[5] + st[6]) % 2;
    s3 = (st[3] + st[4] + st[5] + st[6]) % 2;

    s = s3*4 + s2*2 + s1*1;
// ���� s=0, �� ��������� ��� ������, ����� ������ � s ����, �� ���� ���������

    if(s == 0) {cout << "no error" << endl;
            cout << "right message: " << st << endl;
            cout << "only information bites: " << st[2] << st[4] << st[5] << st[6] << endl;
        }

        else { //���������� ������:
                if(st[s-1] == '0') st[s-1] = '1';
                else st[s-1] = '0';
// ������� ������������ ��������� � ����� ���������� ����
            cout << "error in " << s << " bite" << endl;
            cout << "right message: " << st << endl;
            cout << "only information bites: " << st[2] << st[4] << st[5] << st[6] << endl;
        }

return 0;
}
