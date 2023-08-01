using System;
using System.Collections.Generic;

class Person
{
    protected internal string name, date, address;

    public Person(string name, string date, string address)
    {
        this.name = name;
        this.date = date;
        this.address = address;
    }

    public void ChuanHoaTen()
    {
        string[] str = name.Split(' ');
        string result = "";
        for (int i = 0; i < str.Length; i++)
        {
            string st = str[i].ToLower();
            st = char.ToUpper(st[0]) + st.Substring(1);
            result += st + " ";
        }
        result = result.Trim();
        name = result;
    }

    public void ChuanHoaNS()
    {
        string[] parts = date.Split('/');
        string day = parts[0].PadLeft(2, '0');
        string month = parts[1].PadLeft(2, '0');
        string year = parts[2];
        date = $"{day}/{month}/{year}";
    }
}

class Student : Person
{
    private string masv, lop;
    private double gpa;

    public Student(string masv, string lop, double gpa, string name, string date, string address)
        : base(name, date, address)
    {
        this.masv = masv;
        this.lop = lop;
        this.gpa = gpa;
    }

    public void Infor()
    {
        Console.WriteLine($"{masv} {name} {date} {address} {lop} {gpa:F2}");
    }
}

class Teacher : Person
{
    private string magv, khoa;
    private double luong;

    public Teacher(string magv, string khoa, double luong, string name, string date, string address)
        : base(name, date, address)
    {
        this.magv = magv;
        this.khoa = khoa;
        this.luong = luong;
    }

    public void Infor()
    {
        Console.WriteLine($"{magv} {name} {date} {address} {khoa} {luong}");
    }
}

class Solution
{
    static void Main(string[] args)
    {
        int n = int.Parse(Console.ReadLine());
        List<Person> pers = new List<Person>();

        for (int i = 0; i < n; i++)
        {
            string chucVu = Console.ReadLine();
            string k = chucVu.Substring(0, 2);

            if (k == "SV")
            {
                string masv = chucVu;
                string name = Console.ReadLine();
                string date = Console.ReadLine();
                string address = Console.ReadLine();
                string lop = Console.ReadLine();
                double gpa = double.Parse(Console.ReadLine());

                Student st = new Student(masv, lop, gpa, name, date, address);
                st.ChuanHoaTen();
                st.ChuanHoaNS();
                pers.Add(st);
            }
            else
            {
                string magv = chucVu;
                string name = Console.ReadLine();
                string date = Console.ReadLine();
                string address = Console.ReadLine();
                string khoa = Console.ReadLine();
                double luong = double.Parse(Console.ReadLine());

                Teacher tc = new Teacher(magv, khoa, luong, name, date, address);
                tc.ChuanHoaTen();
                tc.ChuanHoaNS();
                pers.Add(tc);
            }
        }

        Console.WriteLine("DANH SACH GIAO VIEN :");
        foreach (Person p in pers)
        {
            if (p is Teacher)
            {
                Teacher a = (Teacher)p;
                a.Infor();
            }
        }

        Console.WriteLine("DANH SACH SINH VIEN :");
        foreach (Person p in pers)
        {
            if (p is Student)
            {
                Student a = (Student)p;
                a.Infor();
            }
        }
    }
}

// import java.util.ArrayList;
// import java.util.Arrays;
// import java.util.Collections;
// import java.util.Comparator;
// import java.util.InputMismatchException;
// import java.util.Scanner;

// class Person {
//     private String ma, ten, ngaySinh, diaChi;

//     public Person(String ma, String ten, String ngaySinh, String diaChi) {
//         this.ma = ma;
//         this.ten = ten;
//         this.ngaySinh = ngaySinh;
//         this.diaChi = diaChi;
//     }
    
//     @Override
//     public String toString(){
//         return this.ma + " " + this.ten + " " + this.ngaySinh + " " + this.diaChi;
//     }
    
//     public void chuanHoa(){
//         String[] arr = this.ten.split("\\s+");
//         String res = "";
//         for(String x : arr){
//             res += Character.toUpperCase(x.charAt(0));
//             for(int j = 1; j < x.length(); j++){
//                 res += Character.toLowerCase(x.charAt(j));
//             }
//             res += " ";
//         }
//         this.ten = res.substring(0, res.length() - 1);
//         StringBuilder sb = new StringBuilder(this.ngaySinh);
//         if(sb.charAt(1) == '/') sb.insert(0, "0");
//         if(sb.charAt(4) == '/') sb.insert(3, "0");
//         this.ngaySinh = sb.toString();
//     }
// }

// class Student extends Person{
//     private String lop;
//     private double gpa;

//     public Student(String lop, double gpa, String ma, String ten, String ngaySinh, String diaChi) {
//         super(ma, ten, ngaySinh, diaChi);
//         this.lop = lop;
//         this.gpa = gpa;
//     }
    
//     @Override
//     public String toString(){
//         return super.toString() + " " + this.lop + " " + String.format("%.2f", this.gpa);
//     }
// }

// class Lecturer extends Person{
//     private String khoa;
//     private int luong;

//     public Lecturer(String khoa, int luong, String ma, String ten, String ngaySinh, String diaChi) {
//         super(ma, ten, ngaySinh, diaChi);
//         this.khoa = khoa;
//         this.luong = luong;
//     }
    
//     @Override
//     public String toString(){
//         return super.toString() + " " + this.khoa + " " + this.luong;
//     }
// }


// //SinhVien, GiaoVien, NhanVien : Subclass, derived class
// //Nguoi : superclass, base class


// public class Main {

//     public static void main(String[] args) {
//         ArrayList<Student> arr1 = new ArrayList<>();
//         ArrayList<Lecturer> arr2 = new ArrayList<>();
//         Scanner sc = new Scanner(System.in);
//         int n = sc.nextInt();
//         for(int i = 0; i < n; i++){
//             sc.nextLine();
//             String ma = sc.nextLine();
//             String ten = sc.nextLine();
//             String ngaySinh = sc.nextLine();
//             String diaChi = sc.nextLine();
//             if(ma.substring(0, 2).equals("GV")){
//                 String khoa = sc.nextLine();
//                 int luong = sc.nextInt();
//                 Lecturer lec = new Lecturer(khoa, luong, ma, ten, ngaySinh, diaChi);
//                 lec.chuanHoa();
//                 arr2.add(lec);
//             }
//             else{
//                 String lop = sc.nextLine();
//                 double gpa = sc.nextDouble();
//                 Student student = new Student(lop, gpa, ma, ten, ngaySinh, diaChi);
//                 student.chuanHoa();
//                 arr1.add(student);
//             }
//         }
//         System.out.println("DANH SACH GIAO VIEN :");
//         for(Lecturer x : arr2){
//             System.out.println(x);
//         }
//         System.out.println("DANH SACH SINH VIEN :");
//         for(Student x : arr1){
//             System.out.println(x);
//         }
//     }
// }