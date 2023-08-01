#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
struct sinhVien{
    string name, date, address;
    int diem1, diem2, diem3;
    int sumPoint = 0;
    void nhap(){
        getline(cin, name);
        getline(cin, date);
        getline(cin, address);
        cin >> diem1 >> diem2 >> diem3;
        sumPoint = diem1 + diem2 + diem3;
    }
    void hien(){
        cout << name << " " << date << " " << address << " " << sumPoint <<" " << checkAccept() << endl;
    }
    int getsumPoint(){
        return sumPoint;
    }
    string checkAccept(){
        if (sumPoint >=24){
            return "DO";
        }
        return "TRUOT";
    }
};

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n; cin >> n;
    vector<sinhVien> sv;
    for (int i = 0;i<n;i++){
        cin.ignore();
        sinhVien k = sinhVien();
        k.nhap();
        sv.push_back(k);
    }
    int max_point = 0;
    for (sinhVien x : sv){
        max_point = max(max_point, x.getsumPoint());
    }
    cout << "DANH SACH THU KHOA :" << endl;
    for (sinhVien x : sv){
        if (max_point == x.getsumPoint()) {
             cout << x.name << " " << x.date << " " << x.address << " " << x.getsumPoint() << endl;
        }
    }
    cout << "KET QUA XET TUYEN:" << endl;
    for (sinhVien x : sv){
        x.hien();
    }
    
    return 0;
}
