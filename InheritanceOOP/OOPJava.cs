// // import java.util.ArrayList;
// // import java.util.Arrays;
// // import java.util.Collections;
// // import java.util.Comparator;
// // import java.util.InputMismatchException;
// // import java.util.Scanner;

// // class Person {
// //     private String ma, ten, ngaySinh, diaChi;

// //     public Person(String ma, String ten, String ngaySinh, String diaChi) {
// //         this.ma = ma;
// //         this.ten = ten;
// //         this.ngaySinh = ngaySinh;
// //         this.diaChi = diaChi;
// //     }
    
// //     @Override
// //     public String toString(){
// //         return this.ma + " " + this.ten + " " + this.ngaySinh + " " + this.diaChi;
// //     }
    
// //     public void chuanHoa(){
// //         String[] arr = this.ten.split("\\s+");
// //         String res = "";
// //         for(String x : arr){
// //             res += Character.toUpperCase(x.charAt(0));
// //             for(int j = 1; j < x.length(); j++){
// //                 res += Character.toLowerCase(x.charAt(j));
// //             }
// //             res += " ";
// //         }
// //         this.ten = res.substring(0, res.length() - 1);
// //         StringBuilder sb = new StringBuilder(this.ngaySinh);
// //         if(sb.charAt(1) == '/') sb.insert(0, "0");
// //         if(sb.charAt(4) == '/') sb.insert(3, "0");
// //         this.ngaySinh = sb.toString();
// //     }
// // }

// // class Student extends Person{
// //     private String lop;
// //     private double gpa;

// //     public Student(String lop, double gpa, String ma, String ten, String ngaySinh, String diaChi) {
// //         super(ma, ten, ngaySinh, diaChi);
// //         this.lop = lop;
// //         this.gpa = gpa;
// //     }
    
// //     @Override
// //     public String toString(){
// //         return super.toString() + " " + this.lop + " " + String.format("%.2f", this.gpa);
// //     }
// // }

// // class Lecturer extends Person{
// //     private String khoa;
// //     private int luong;

// //     public Lecturer(String khoa, int luong, String ma, String ten, String ngaySinh, String diaChi) {
// //         super(ma, ten, ngaySinh, diaChi);
// //         this.khoa = khoa;
// //         this.luong = luong;
// //     }
    
// //     @Override
// //     public String toString(){
// //         return super.toString() + " " + this.khoa + " " + this.luong;
// //     }
// // }


// // //SinhVien, GiaoVien, NhanVien : Subclass, derived class
// // //Nguoi : superclass, base class


// // public class Main {

// //     public static void main(String[] args) {
// //         ArrayList<Student> arr1 = new ArrayList<>();
// //         ArrayList<Lecturer> arr2 = new ArrayList<>();
// //         Scanner sc = new Scanner(System.in);
// //         int n = sc.nextInt();
// //         for(int i = 0; i < n; i++){
// //             sc.nextLine();
// //             String ma = sc.nextLine();
// //             String ten = sc.nextLine();
// //             String ngaySinh = sc.nextLine();
// //             String diaChi = sc.nextLine();
// //             if(ma.substring(0, 2).equals("GV")){
// //                 String khoa = sc.nextLine();
// //                 int luong = sc.nextInt();
// //                 Lecturer lec = new Lecturer(khoa, luong, ma, ten, ngaySinh, diaChi);
// //                 lec.chuanHoa();
// //                 arr2.add(lec);
// //             }
// //             else{
// //                 String lop = sc.nextLine();
// //                 double gpa = sc.nextDouble();
// //                 Student student = new Student(lop, gpa, ma, ten, ngaySinh, diaChi);
// //                 student.chuanHoa();
// //                 arr1.add(student);
// //             }
// //         }
// //         System.out.println("DANH SACH GIAO VIEN :");
// //         for(Lecturer x : arr2){
// //             System.out.println(x);
// //         }
// //         System.out.println("DANH SACH SINH VIEN :");
// //         for(Student x : arr1){
// //             System.out.println(x);
// //         }
// //     }
// // }
// Trường đại học XYZ cần quản lý các đối tượng là sinh viên và giáo viê
// n. Sinh viên gồm các thông tin : mã sinh viên, tên, ngày sinh, địa chỉ, lớp, điểm gpa.
//  Giáo viên gồm các thông tin : mã giáo viên, tên, ngày sinh, địa chỉ, khoa, lương, lớp mà giáo viên này phụ trách chủ nhiệm. T
//  hực hiện đọc các thông tin danh sách sinh viên và giáo viên từ bàn phím sau đó chuẩn hóa tên, 
//  ngày sinh và in ra danh sách sinh viên sau đó là danh sách giáo viên, biết rằng sinh viên sẽ có mã bắt đầu bằng SV 
//  (ví dụ SV112), giáo viên có mã bắt đầu bằng GV (ví dụ GV222) theo địa chỉ tìm kiếm.
// Input Format

// Dòng đầu tiên là N : số lượng giáo viên và sinh viên. Các dòng tiếp theo mô tả thông tin của giáo viên hoặc sinh viên, mỗi thông tin gồm 6 dòng, đối với sinh viên 6 dòng gồm : mã sinh viên, tên, ngày sinh, địa chỉ, lớp, điểm gpa, đối với giáo viên 6 dòng gồm : mã giáo viên, tên, ngày sinh, địa chỉ, khoa, lương, lớp mà giáo viên này phụ trách chủ nhiệm. Dòng cuối cùng của input là địa chỉ cần tìm kiếm.

// Constraints

// 1<=N<=1000;

// Output Format

// Đầu tiên in ra danh sách giáo viên, mỗi giáo viên in ra thông tin trên 1 dòng, các thông tin cách nhau một dấu cách, không cần in thông tin về lớp mà giáo viên này quản lý. Những dòng tiếp theo in ra danh sách sinh viên, mỗi sinh viên in thông tin trên 1 dòng, các thông tin cách nhau một dấu cách, gpa in 2 số sau dấu phẩy.

// Sample Input 0

// 7
// GV1
// trAN duC TuaN
// 7/4/1974
// Thai Binh
// ATTT
// 20000000
// CNTT1
// SV2
// trAN AnH MaNH
// 27/10/2004
// Ha Nam
// DTVT1
// 2.50
// SV3
// pham Phuong NAM
// 8/8/2004
// Thai Binh
// DTVT2
// 2.50
// GV4
// trAN AnH MaNH
// 24/5/1972
// Ha Nam
// ATTT
// 12000000
// DTVT2
// SV5
// trAN Phuong LoNG
// 8/12/2004
// Ha Nam
// ATTT3
// 2.50
// SV6
// Luong duC LoNG
// 23/1/2004
// Ha Noi
// DTVT2
// 3.20
// GV7
// Luong AnH TuaN
// 18/10/1972
// Ha Nam
// Co khi
// 25000000
// DTVT1
// Ha Noi
// Sample Output 0

// DANH SACH GIAO VIEN CO DIA CHI TAI Ha Noi :
// DANH SACH SINH VIEN CO DIA CHI TAI Ha Noi :
// SV6 Luong Duc Long 23/01/2004 Ha Noi DTVT2 3.20