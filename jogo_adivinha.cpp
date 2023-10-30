#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main(){

int num=0;
   srand((unsigned) time(0));
   int numSorte = 1+(rand()%100);
   string name;
   int numTentativasMaximas = 5;
   int numTentativas = 0;
   
   
   cout << "Insere o teu nome:" << endl;
   cin >> name;
   
   while(numSorte != num &&
       numTentativas <
       numTentativasMaximas){
     cout << "Qual o número da sorte? ";
     cin >> num;
     numTentativas++;
     if(numSorte > num){
     cout << "O número da sorte é maior do que: " << num << endl;
     }else if(numSorte < num){
     cout << "O número da sorte é menor do que: " << num << endl;
     }else{
     cout << "Parabéns, você acertou!" << endl;
     break;
    }
  
  
  if (numTentativas  == numTentativasMaximas){
      cout << "Quase acertas-te" << name << "!" << endl;
      cout << "O número da sorte era:" << numSorte << endl;
  }
     }
  cout << "Fim do jogo, agora vá trabalha!" << endl;
 
return 0;
}