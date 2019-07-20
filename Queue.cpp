#include <iostream>

using namespace std;

struct node{
    int data;
    node *next;
};

node *depan, *belakang, *baru, *bantu;
int MAX_QUEUE = 10;
int jumlah = 0;

void init ();
void tanya();
bool isFull ();
bool isEmpty ();
void enqueue ();
void dequeue ();
void cetak ();

int main()
{
    cout << "Nama : Efrizal\n";
    cout << "Kelas : TI 02\n";
    cout << "--------Program Queue---------\n";

    init();
    tanya();

    return 0;
}

void init (){
    depan = NULL;
    belakang = NULL;
};

void tanya (){
    cout << "[1] Enqueue" << endl;
    cout << "[2] Dequeue" << endl;
    cout << "[3] Cetak" << endl;
    cout << "[4] Reset" << endl;
    cout << "[5] Jumlah isi Queue" << endl;
    cout << "[6] Jumlah node yang belum terisi" << endl;
    cout << "[7] Exit" << endl;
    int pilih;
    cout << "Pilihan : "; cin >> pilih;

    switch (pilih){
    char lanjut;
        case 1 : enqueue();
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

        case 2 : dequeue();
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
        cout << endl;
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
        depan = belakang = NULL;
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
        case 5 :
        cout << "Jumlah isi Queue : " << jumlah << endl;
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

        case 6 :
        cout << "Jumlah node yang belum disi : " << MAX_QUEUE - jumlah << endl;
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

        case 7 :
            cetak();
            break;

        default :
        cout << endl;
        cout << "Error!" << endl << endl;
            tanya();
    }
}

bool isFull (){
    if (jumlah == MAX_QUEUE){
        return true;
    }else{
        return false;
    }
};
bool isEmpty (){
    if (belakang == NULL){
        return true;
    }else{
        return false;
    }
};
void enqueue (){
    baru = new node;
    cout << "Data : "; cin >> baru -> data;
    baru -> next = NULL;

    if (isEmpty()){
        depan = baru;
        belakang = baru;
        belakang -> next = NULL;
        jumlah++;
    }else if (isFull()){
        cout << "Queue Penuh !!" << endl;
    }else{
        belakang -> next = baru;
        belakang = baru;
        jumlah++;
    }

};
void dequeue (){
    if (isEmpty()){
        cout<< "queue kosong"<<endl;
    }else {
        bantu = depan;
        depan = depan -> next;
        delete bantu;
        jumlah--;
    }
};
void cetak (){
    if(isEmpty()){
        cout<<"Queue Kosong!!"<<endl;
    }else {
        bantu = depan;
        while (bantu != NULL){
            cout<< bantu -> data<< " ";
            bantu = bantu-> next;
            jumlah++;
        }
    }

};
