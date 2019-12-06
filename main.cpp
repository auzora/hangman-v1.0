#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <cstring>
#include <string>
using namespace std;
void letterFill(const string& a, char& b, string& c, int& d);
char guess;
string used = "";
char isspace();
int main(){
    srand(time(NULL));
    char kota[5][10]={"jakarta","bandung","pekanbaru",
                      "medan","madura"};
    char makanan[5][10]={"cimol","sate","kebab",
                      "keripik","geprek"};
    char minuman[5][10]={"air putih","thai tea","taro",
                      "bandrek","jus jeruk"};
    int randIndex=rand()%5;
    int kotaIndex = strlen(kota[randIndex]);
    int makananIndex = strlen(makanan[randIndex]);
    int minumanIndex = strlen(minuman[randIndex]);
    string kotaRand = kota[randIndex];
    string makananRand = makanan[randIndex];
    string minumanRand = minuman[randIndex];
    char pil;
    bool cv;
    do{
        cout<<"Kategori mana yang akan anda mainkan: "<<endl;
        cout<<"1.Kota\n2.Makanan\n3.Minuman"<<endl;
        cout<<"Pilihan anda: "; cin>>pil;
        if(pil=='1'){
            cout<<"Anda memilih Kota\n"; cv=true;
        }
        else if(pil=='2'){
            cout<<"Anda memilih Makanan\n"; cv=true;
        }
        else if(pil=='3'){
            cout<<"Anda memilih Minuman\n"; cv=true;
        }
        else {
            cout<<"Pilihan anda tidak memenuhi kriteria\n"; cv=false;
            continue;
        }
    }while(!cv);
    //cout<< kotaRand <<endl; //this is temporary
    int chance = 5;
    if(pil=='1' && cv){
        string unknown(kotaRand.size(),'*');
        cout<<unknown<<endl;
        while(chance!=0){
            cout<<"Anda memiliki "<<chance<<" kesempatan"<<endl;
            char guesstemp;
            cout<<"Tebakan huruf anda: "; cin>>guess;
            if(used.find(guesstemp) != string::npos){
                cout<<"Huruf ini sudah ditebak sebelumnya";
                continue;
            }
            letterFill(kotaRand, guess, unknown, chance);
            cout<<unknown<<endl;

       }
    }
    else if(pil=='2' && cv){
        string unknown(makananRand.size(),'*');
        cout<<unknown<<endl;
        while(chance!=0){
            cout<<"Anda memiliki "<<chance<<" kesempatan"<<endl;
            char guesstemp;
            cout<<"Tebakan huruf anda: "; cin>>guess;
            if(used.find(guess) != string::npos){
                cout<<"Huruf ini sudah ditebak sebelumnya";
                continue;
            }
            letterFill(makananRand, guess, unknown, chance);
            cout<<unknown<<endl;

       }
    }
    else if(pil=='3' && cv){
        string unknown(minumanRand.size(),'*');
        cout<<unknown<<endl;
        while(chance!=0){
            cout<<"Anda memiliki "<<chance<<" kesempatan"<<endl;
            char guesstemp;
            cout<<"Tebakan huruf anda: "; cin>>guess;
            if(used.find(guesstemp) != string::npos){
                cout<<"Huruf ini sudah ditebak sebelumnya";
                continue;
            }
            letterFill(minumanRand, guess, unknown, chance);
            cout<<unknown<<endl;

       }
    }
    return 0;
}
void letterFill(const string& a, char& b, string& c, int&d){ //letterFill(kotaRand, guess, unknown, wrong);
    if(a.find(guess) != string::npos){
        cout<<"Benar, huruf "<<b<<" terdapat di dalam jawaban"<<endl;
        for(int i=0;i<a.length();++i){
            if(a[i] == b){
                c[i] = b;
            }
        }
    }
    else{
        cout<<"Huruf "<<b<<" tidak ada di dalam jawaban"<<endl;
        --d;
    }
}
char isspace(const string space[randIndex]){
    char c;
    int i=0;
    while(space[])
    return 
}