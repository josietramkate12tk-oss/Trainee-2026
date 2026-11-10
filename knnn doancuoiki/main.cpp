#include <iostream>
using namespace std;

void khoi_dong_logic();
void khoi_dong_ui();
void khoi_dong_data();
void khoi_dong_tester();

int main() {
    cout << "--- HE THONG TETRIS KHOI DONG ---" << endl;
    
    // goi cac ham o day.
    khoi_dong_ui();


    cout << "--- HOAN TAT ---" << endl;
    return 0;
}
// Định nghĩa thân hàm cho nhánh UI
void khoi_dong_ui() {
    cout << "ui\n";
}