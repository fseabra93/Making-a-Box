#include <iostream>
using namespace std;

void sup_inf(int l){
  char hashtag = '#';
  for (int i=0; i<l; i++){
    cout << hashtag;
  } cout << endl;
}

void laterais(int l){
  char hashtag = '#';
  char espaco = ' ';
  cout << hashtag;
  for (int i=0; i<l-2; i++){
    cout << espaco;
  } cout << hashtag << endl;
}

int main() {
  int lado;
  cin >> lado;

  int imprimir_laterais = lado-2;

  sup_inf(lado);
  
  if (lado > 2){
    for (int i=0; i<imprimir_laterais; i++){
      laterais(lado);
    }
  }
  
  if (lado > 1){
    sup_inf(lado);
  }
  
}