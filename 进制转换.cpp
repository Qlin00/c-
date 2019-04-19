
#include <iostream>

using namespace std;
class Number{
	private:
		int val;
		int j;//���� 
	public:
		Number(int v, int t) : val(v), j(t){}
		Number converto(int n2){
			int temp[100]; int count = 0;
			int t = val;
			while(t){
				temp[count++] = t % n2;
				t /= n2;
			}
			int sum = 0;
			for(int i = count - 1; i >= 0; i--){
				sum = sum * 10 + temp[i];
			}	
			Number no3(sum, n2);
			return no3;
		}
		void show(){
			std:: cout << val << endl;
		}
};
int main() {
    int n, n1, n2;
    std::cin >> n;
    for(int i = 0; i < n; ++i) {
        std::cin >> n1 >> n2;
        Number no1(n1, 10);     //n1��10����������
        Number no3 = no1.converto(n2);  //no3��n2���Ƶ�������
        no3.show();     //������
    }
    return 0;
}
