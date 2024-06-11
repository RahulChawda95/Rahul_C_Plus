#include <iostream>
using namespace std;

class Numbers {
    private:
        int num1, num2;
    public:
        Numbers(int n1, int n2) {
            num1 = n1;
            num2 = n2;
        }
        friend void swap(Numbers &n);
        void display() {
            cout << "A : " << num1 << endl;
            cout << "B : " << num2 << endl;
        }
};

void swap(Numbers &n) {
    int temp = n.num1;
    n.num1 = n.num2;
    n.num2 = temp;
}

int main() {
	int a,b;
	cout<<"\n\n\t\t Enter A :- ";
	cin>>a;
	cout<<"\n\n\t\t Enter B :- ";
	cin>>b;
	
    Numbers n(a, b);
    cout << "Before swapping: " << endl;
    n.display();
    swap(n);
    cout << "After swapping: " << endl;
    n.display();
    return 0;
}
