#include <iostream>
using namespace std;
class HanXin{
	private:
		int no3;
		int no5;
		int no7;
		int many;
	public:
		HanXin() {
			no3 = 0;
			no5 = 0;
			no7 = 0;
			many = 0;
		}
		void line3(int n1){
			no3 = n1;
		}
		void line5(int n2){
			no5 = n2;
		}	
		void line7(int n3){
			no7 = n3;
		}
		void howMany(){
			int i = 10;
			for(i; i <= 100; i++){
				if(i % 3 == no3 && i % 5 == no5 && i % 7 == no7)
					break;
			}
			if(i <= 100)
				many = i;
			else
				many = 0;
		}
		void showMany(){
			howMany();
			if(many == 0)
				std::cout << "Impossible" << endl;
			else
				std::cout << many << endl;
		}
};
int main() {
    int n, n1, n2, n3;
    std::cin >> n;
    for(int i = 0; i < n; ++i) {
        std::cin >> n1 >> n2 >> n3;
        HanXin hx;  //韩信
        hx.line3(n1);  //3人一排
        hx.line5(n2);   //5人一排
        hx.line7(n3);   //7人一排
        hx.showMany();
    }
}

