#include <iostream>
#include <stdlib.h>
using namespace std;

struct node {
    int data;
    node *next;
};

node *top, *bottom, *bantu , *baru, *hapus;

int MAX_STACK = 12;
int jumlah = 0;

void init();
bool isEmpty ();
bool isFull ();
void tanya();
void push ();
void pop ();
void cetak ();

int main (){

    cout << "Nama : Efrizal\n";
    cout << "Kelas : TI 02\n";
    cout << "--------Program Stack---------\n";

    init();
    tanya();

    return 0;
};

void init(){
    top = NULL;
    bottom = NULL;
};
bool isEmpty (){
    if (top == NULL){
        return true;
    }else{
        return false;
    }
};

bool isFull (){
    if (jumlah == MAX_STACK){
        return true;
    }else{
        return false;
    }
};

void tanya (){
    cout << "[1] Push" << endl;
    cout << "[2] Pop" << endl;
    cout << "[3] Cetak" << endl;
    cout << "[4] Exit" << endl;
    int pilih;
    cout << "Pilihan : "; cin >> pilih;

    switch (pilih){
    char lanjut;
        case 1 : push();
        cout << "Lanjut ? [y/n] : " ; cin >> lanjut;
        cout << endl;
        if (lanjut == 'y'){
            tanya();
        }else if (lanjut == 'n'){
            cetak();
        }else{
            cout << "Error" << endl << endl;
            tanya();
        }
            break;

        case 2 : pop();
        cout << "Lanjut ? [y/n] : " ; cin >> lanjut;
        cout << endl;
        if (lanjut == 'y'){
            tanya();
        }else if (lanjut == 'n'){
            cetak();
        }else{
            cout << "Error" << endl << endl;
            tanya();
        }
            break;

        case 3 : cetak();
        cout << "Lanjut ? [y/n] : " ; cin >> lanjut;
        cout << endl;
        if (lanjut == 'y'){
            tanya();
        }else if (lanjut == 'n'){
            cetak();
        }else{
            cout << "Error" << endl << endl;
            tanya();
        }
            break;

        case 4 :
            cetak();
            break;

        default :
        cout << endl;
        cout << "Error!" << endl << endl;
            tanya();
    }
}

void push (){
    baru = new node;
    cout << "Push : "; cin >> baru -> data;
    baru -> next = NULL;

    if (isEmpty()){
        top = baru;
        bottom = baru;
        top -> next = NULL;
        jumlah++;
    }else if (isFull()){
        cout << "Stack sudah penuh !!" << endl;
    }else{
        baru -> next = top;
        top = baru;
        jumlah++;
    }
};
void pop (){
    if(isEmpty()){
        cout << "Stack kosong !!"<<endl;
    }else{
        hapus=top;
        top=top->next;
        delete hapus;
    }

};
void cetak (){
    if (isEmpty()){
        cout << "Stack kosong !!" << endl;
    }else{
        bantu = top;
        cout << "Hasil : " << endl;
        while (bantu != NULL){

            cout << bantu -> data << endl;
            bantu = bantu -> next;
        }
        cout << "NULL" << endl;;
    }
};
