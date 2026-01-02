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

string generaTarga(){

string targa="";

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
   return targa;
}



string generaTarga1(string targa){
int y = targa.length();
targa.replace(1,1,"%");
targa.replace(5,1,"%");

return targa;

}
string invertiTarga(string targa){
for(int i=0;i<3;i++){
    char app=targa[i];                                 //metodo 1
    targa[i]=targa[6-i];
    targa[6-i]=app;

}

return targa;

}
string invertiTarga2(string targa){
    string invertita = "";

    for(int i = targa.length() - 1; i >= 0; i--){      //metodo 2
        invertita += targa.substr(i, 1);
    }

    return invertita;
}
void funzione3(string targa, char p){


int a=targa.find(p);
if (a<7 && a>0){

cout<<"char trovato alla posizione "<<a<<endl;
} else{
cout<<"char non trovato"<<endl;
}


}

int main()
{
    string targa;
    int risp;
    char p='F';

srand(time(NULL));
targa=generaTarga();
cout<<"La targa e': "<<targa<<endl;

do{
cout<<"Seleziona 1:targa con %(alla 2 e penultima posizione)"<<endl;
cout<<"Seleziona 2:targa invertita"<<endl;
cout<<"Seleziona 3:targa e char"<<endl;
cout<<"Seleziona 4:Uscita"<<endl;
cin>>risp;
switch(risp){

case 1:
   cout<<"targa aggiornata: "<<generaTarga1(targa)<<endl;;
break;

case 2:

cout<<invertiTarga2(targa)<<endl;
    break;


case 3:
        funzione3(targa,p);

    break;





}
}while(risp!=4);
    return 0;
}
