#include <iostream>
using namespace std;

int main()
{
    //Deklarasi
    int a,b, c, d,g,h,x,y,hasil1,hasil2,kemungkinan1,kemungkinan2,kemungkinan3,kemungkinan4,kemungkinan5;
    string tanda1, tanda2;
    //Inisialisasi Seluruh Variabel
    cout<<"Masukkan tanda kurang dari atau lebih dari : ";
    cin>>tanda1;
    cout<< "ax + by  "<<tanda1<<" hasil1"<<endl;
    cout<<"Nilai a : ";
    cin>>a;
    cout<<"Nilai b : ";
    cin>>b;
    cout<<"Nilai hasil1 : ";
    cin>>hasil1;
    cout<<"Masukkan tanda kurang dari atau lebih dari : ";
    cin>>tanda2;
    cout<<"cx + dy "<<tanda2<<" hasil2"<<endl;
    cout<<"Nilai c : ";
    cin>>c;
    cout<<"Nilai d : ";
    cin>>d;
    cout<<"Nilai hasil2 : ";
    cin>>hasil2;
    cout<<"f(x)  = gx + hy"<<endl;
    cout<<"Nilai g : ";
    cin>>g;
    cout<<"Nilai h : ";
    cin>>h;
    //Proses dan Finalisasi untuk menentukan segala kemungkinan nilai x dan y
    cout<<"\n\nKemungkinan nilai x dan y "<<endl;
    cout<<"Dari persamaan ax + by >= hasil1 "<<endl;
    cout<<"  1. x = "<<0<<" dan y = "<<hasil1/b<<endl;
    cout<<"  2. x = "<<hasil1/a<<" dan y = "<<0<<endl;
    cout<<"Dari persamaan cx + dy >= hasil2"<<endl;
    cout<<"  1. x = "<<0<<" dan y = "<<hasil2/d<<endl;
    cout<<"  2. x = "<<hasil2/c<<" dan y = "<<0<<endl;
    cout<<"Dari kedua persamaan"<<endl;
        if (a>b || c>d ){
            y=((a*hasil2)-(c*hasil1))/((-c*b)+(a*d));
            x=(hasil1-(b*y))/a;
            cout<<"  y = "<<y<<endl;
            cout<<"  x = "<<x<<endl<<endl;
        }
        else{
            x=((b*hasil2)-(d*hasil1))/((-d*a)+(b*c));
            y=(hasil1-(a*x))/b;
            cout<<"  x = "<<x<<endl;
            cout<<"  y = "<<y<<endl;
        }
        //Proses dan Finalisasi untuk menetukan nilai maksimum
            kemungkinan1=g*x +h*y;
            kemungkinan2=g*(hasil1/a)+h*0;
            kemungkinan3=g*0 + h *(hasil1/b);
            kemungkinan4=g*(hasil2/c)+h*0;
            kemungkinan5=g*0 + h * (hasil2/d);
    cout<<endl;
    /*Suatu kondisi dimana tanda1(tanda pada persamaan 1) & tanda2(tanda pada persamaan 2) sama2 bernilai >= atau jika tanda1(tanda pada persamaan1)
    bernilai >= & tanda2 bernilai <= atau sebaliknya. */
    if (tanda1==">=" && tanda2=="<=" || tanda1==">=" && tanda2==">=" || tanda1=="<=" && tanda2==">="){
            /*Beberapa kondisi untuk menentukan nilai maksimum sesuai daerah hasil dari kondisi tanda diatas */
            if (kemungkinan1 > kemungkinan2 && kemungkinan1 > kemungkinan3 && kemungkinan1 > kemungkinan4 && kemungkinan1>kemungkinan5){
                cout<<"Hasil maksimal ==> f(x) max = "<<kemungkinan1<<endl;
            }
            else if (kemungkinan2>kemungkinan3 && kemungkinan2>kemungkinan4 && kemungkinan2>kemungkinan5 && kemungkinan2>kemungkinan1){
                cout<<"Hasil maksimal ==> f(x) max = "<<kemungkinan2<<endl;
            }
            else if (kemungkinan3>kemungkinan4 && kemungkinan3>kemungkinan5 && kemungkinan3>kemungkinan1 && kemungkinan3>kemungkinan2){
                cout<<"Hasil maksimal ==> f(x) max = "<<kemungkinan3<<endl;
            }
            else if (kemungkinan4>kemungkinan5 && kemungkinan4>kemungkinan1 && kemungkinan4>kemungkinan2 && kemungkinan4>kemungkinan3){
                cout<<"Hasil maksimal ==> f(x) max = "<<kemungkinan4<<endl;
            }
            else if (kemungkinan5>kemungkinan1 && kemungkinan5>kemungkinan2 && kemungkinan5>kemungkinan3 && kemungkinan5>kemungkinan4){
                cout<<"Hasil maksimal ==> f(x) max = "<<kemungkinan5<<endl;
            }
        }
    /*Suatu kondisi jika tanda1 & tanda2 sama2 bernilai <= */
    else if (tanda1=="<=" && tanda2=="<="){
            /*Beberapa kondisi untuk menentukan hasil maksimum sesuai daerah dari kondisi daerah diatas */
            if((hasil1/a)<=(hasil1/b) && (hasil2/c)<=(hasil2/d)){
                    if (kemungkinan1 > kemungkinan2 && kemungkinan1 > kemungkinan4 ){
                        cout<<"Hasil maksimal ==> f(x) max = "<<kemungkinan1<<endl;
                    }
                    else if (kemungkinan2>kemungkinan4 && kemungkinan2>kemungkinan1){
                        cout<<"Hasil maksimal ==> f(x) max = "<<kemungkinan2<<endl;
                    }
                    else if (kemungkinan4>kemungkinan1 && kemungkinan4>kemungkinan2){
                        cout<<"Hasil maksimal ==> f(x) max = "<<kemungkinan4<<endl;
                    }
                }
            else if((hasil1/a)<=(hasil1/b) && (hasil2/c)>=(hasil2/d)){
                    if (kemungkinan1 > kemungkinan2 && kemungkinan1 > kemungkinan5 ){
                        cout<<"Hasil maksimal ==> f(x) max = "<<kemungkinan1<<endl;
                    }
                    else if (kemungkinan2>kemungkinan5 && kemungkinan2>kemungkinan1){
                        cout<<"Hasil maksimal ==> f(x) max = "<<kemungkinan2<<endl;
                    }
                    else if (kemungkinan5>kemungkinan1 && kemungkinan5>kemungkinan2){
                        cout<<"Hasil maksimal ==> f(x) max = "<<kemungkinan5<<endl;
                    }
                }
            else if((hasil1/a)>=(hasil1/b) && (hasil2/c)<=(hasil2/d)){
                    if (kemungkinan1 > kemungkinan3 && kemungkinan1 > kemungkinan4 ){
                        cout<<"Hasil maksimal ==> f(x) max = "<<kemungkinan1<<endl;
                    }
                    else if (kemungkinan3>kemungkinan4 && kemungkinan3>kemungkinan1){
                        cout<<"Hasil maksimal ==> f(x) max = "<<kemungkinan3<<endl;
                    }
                    else if (kemungkinan4>kemungkinan1 && kemungkinan4>kemungkinan3){
                        cout<<"Hasil maksimal ==> f(x) max = "<<kemungkinan4<<endl;
                    }
                }
            else if((hasil1/a)>=(hasil1/b) && (hasil2/c)>=(hasil2/d)){
                    if (kemungkinan1 > kemungkinan3 && kemungkinan1 > kemungkinan5 ){
                        cout<<"Hasil maksimal ==> f(x) max = "<<kemungkinan1<<endl;
                    }
                    else if (kemungkinan3>kemungkinan5 && kemungkinan3>kemungkinan1){
                        cout<<"Hasil maksimal ==> f(x) max = "<<kemungkinan3<<endl;
                    }
                    else if (kemungkinan5>kemungkinan1 && kemungkinan5>kemungkinan3){
                        cout<<"Hasil maksimal ==> f(x) max = "<<kemungkinan5<<endl;
                    }
                }
    }
            return 0;
}
