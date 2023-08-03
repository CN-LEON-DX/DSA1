#include <bits/stdc++.h>
#include <string.h>
using  namespace std;


string standardize(string str){
    for (char &x : str){
        x = tolower(x);
    }
    return str;
}
int main(){
    ifstream input;
    ofstream output;
    input.open("D:/MYGIT/DSA1/HandleFile/Ex2/SinhVien.txt", ios::out);
    output.open("Email.txt");
    int step = 1;
    if  (input.is_open() && output.is_open()){
        string str;
        while (getline(input, str)){
            string result = "";
            stringstream ss(str);
            vector<string> vt;
            string k = "";
            
            if (step%2==1){
                while (ss >> k){
                    vt.push_back(k);
                }
                result += standardize(vt[vt.size()-1]);
                for (int i = 0;i<vt.size()-1;i++){
                    string ele = vt[i];
                    result += tolower(ele[0]);
                }
                result += "@land.edu.vn";
            }else{
                while (getline(ss, k, '/')){
                    result += to_string(stoi(k));
                }
            }
            step++;
            output << result << "\n";
        }
    }
    else{
        cout << "Can't open this file or folder !";
    }
    input.close();
    output.close();
    return 0;
}