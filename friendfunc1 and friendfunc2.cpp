#include <iostream>
using namespace std;
class FriendFunc {
private:
    int n1, n2, n3, n4, n5;
public:
    void input() {
        cout << "Enter 5 numbers: ";
        cin >> n1 >> n2 >> n3 >> n4 >> n5;
    }
    friend float avg2(FriendFunc obj);
    friend float avg3(FriendFunc obj);
};
float avg2(FriendFunc obj) {
    return (obj.n1 + obj.n2) / 2.0;
}
float avg3(FriendFunc obj) {
    return (obj.n3 + obj.n4 + obj.n5) / 3.0;
}
int main() {
    FriendFunc obj;
    obj.input();
    cout << "Average of first 2 numbers: " << avg2(obj) << endl;
    cout << "Average of last 3 numbers: " << avg3(obj) << endl;
    cout<<"Name:Rida Shehzad"<<endl;
    cout<<"RollNo:030"<<endl;
    return 0;
}


