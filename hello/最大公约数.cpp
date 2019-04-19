#include<iostream>
using namespace std;
class Number {
private:
	int val;
public:
	Number(int v) : val(v){}
	Number maxDivisor(Number n) {
		int temp; 
		int a = val;
		int b = n.val;
		if (a < b) {
			temp = a;a = b;b = temp;
		}
		while (b != 0)
		{
			temp = a % b;              
			a = b;
			b = temp;
		}
		Number no2(a);
		return no2;
	}
	void show() {
		std::cout << val << endl;
	}
};
int main() {
	int n, n1, n2;
	std::cin >> n;
	for (int i = 0; i < n; ++i) {
		std::cin >> n1 >> n2;
		Number no1(n1), no2(n2);
		Number no3 = no1.maxDivisor(no2);  //最大公约数
		no3.show();
	}
	//system("PAUSE");
	return 0;
}
