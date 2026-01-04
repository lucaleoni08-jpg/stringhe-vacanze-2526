#include <iostream>
#include <string>
#include <ctime>
using namespace std;

const string FraseGlobale="Fiorentina";

char primoCarattereMaiuscolo(char s) {
        s = toupper(s);
    return s;
}
bool controlloVocali(char E2){
string Vocali="aeiou";
for(int i=0;i<5;i++){
    if(E2==Vocali[i]){

    return false;
        }
    }
    return true;
}



char generaE2(){
    char E2;

do{
E2=rand()%26+97;
}while(controlloVocali(E2)==false);


    return  primoCarattereMaiuscolo(E2);
    }

char generaE67(){
    char E67;
E67=rand()%26+97;
    return  primoCarattereMaiuscolo(E67);
    }


int generaNumeroRandom(){
int E=rand()%10;
return E;
}
class TargaCasuale{

public:
    string targa;

string generaTarga(){

targa="";

char E1=FraseGlobale[3];
char E2=generaE2();
int E3=generaNumeroRandom();
int E4=generaNumeroRandom();
int E5=generaNumeroRandom();
char E6=generaE67();
char E7=generaE67();
    targa.append(1, E1);
    targa.append(1, E2);
    targa.append(to_string(E3));
    targa.append(to_string(E4));
    targa.append(to_string(E5));
    targa.append(1, E6);
    targa.append(1, E7);
}

string generaTargaAgg() {
        string copia = targa;
        copia.replace(1, 1, "%");
        copia.replace(5, 1, "%");
        return copia;
    }
string generaTarga2(){
     string copia2 = targa;
for(int i=2;i<5;i++){
copia2.replace(i,1,"X");
}
return copia2;

}
string invertiTarga2(){
    string invertita = "";

    for(int i = targa.length() - 1; i >= 0; i--){      //metodo 2
        invertita += targa.substr(i, 1);

    }
return invertita;
}
string invertiTarga4(){
string invertita2=targa;
for(int i=0;i<3;i++){
    char app=invertita2.at(i);
    invertita2.at(i)=invertita2.at(6-i);
    invertita2.at(6-i)=app;

}

return invertita2;

}
void funzione3(char p){


int a=targa.find(p);
if (a<7 && a>0){

cout<<"char trovato alla posizione "<<a+1<<endl;
} else{
cout<<"char non trovato"<<endl;
        }
    }
void funzione5(int I){

string num=to_string(I);
int a=targa.find(num);
if (a<5 && a>1){

cout<<"int trovato alla posizione "<<a+1<<endl;
} else{
cout<<"char non trovato"<<endl;
}


}
};
int main()
{

    int risp;
    char p;
    int I;
    TargaCasuale t;
srand(time(NULL));
p=rand()%26+65;
I=rand()%9+1;
t.generaTarga();

do{
cout<<"La targa e': "<<t.targa<<endl;
cout<<"Char generato: "<<p<<endl;
cout<<"Int generato: "<<I<<endl;
cout<<"----------"<<endl;
cout<<"Seleziona 1:targa con %(alla 2 e penultima posizione)"<<endl;
cout<<"Seleziona 2:targa invertita con substr()"<<endl;
cout<<"Seleziona 3:targa e char"<<endl;
cout<<"Seleziona 4:targa con X al posto dei numeri"<<endl;
cout<<"Seleziona 5:targa invertita con at()"<<endl;
cout<<"Seleziona 6:targa e int"<<endl;
cout<<"Seleziona 7:Uscita"<<endl;
cin>>risp;
switch(risp){

case 1:

   cout<<"targa aggiornata: "<<t.generaTargaAgg()<<endl;
   cout<<"----------"<<endl;
    break;

case 2:

cout<<"targa invertita "<<t.invertiTarga2()<<endl;
cout<<"----------"<<endl;
    break;

case 3:

        t.funzione3(p);
        cout<<"----------"<<endl;
    break;

case 4:

    cout<<"targa aggiornata: "<<t.generaTarga2()<<endl;
    cout<<"----------"<<endl;
    break;

case 5:

    cout<<"targa invertita "<<t.invertiTarga4()<<endl;
    cout<<"----------"<<endl;
    break;

case 6:
         t.funzione5(I);
         cout<<"----------"<<endl;
    break;
}
}while(risp!=7);
system("cls");
    return 0;
}
