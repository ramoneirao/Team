#include<iostream>
using std::cout;
using std::endl;

#include "team.h"
#include "team.cpp"
#include "data.h"
#include "data.cpp"
#include "jogador.h"
#include "jogador.cpp"
#include "diretoria.h"
#include "diretoria.cpp"

int main()
{
   Team time1("Botafogo");
   cout << "- Botafogo\n";
   
   Tecnico tecnico1;
   tecnico1.nome = "Luis Castro";
   tecnico1.nacionalidade = "Portugal";
   tecnico1.numTitulosAlcancados = 0;

   cout << "\n";
   printTecnico(tecnico1);

   vector< string > membros{ string("Membro 1"), string("Membro 2") };
   Diretoria diretoria ("Diretor", membros);

   diretoria.printDiretoria( );
   cout << "\n";

   vector< string > timesJogados{ string("Real Madrid"), string("Botafogo") };
   Jogador player01( "Seedorf", "meio-campista", timesJogados );

   time1.addJogador( player01 );
   time1.deletaTimesJogados(timesJogados);

   timesJogados.push_back( string("Remo") );
   time1.addJogador( "Leandro Carvalho", "atacante", timesJogados );

   time1.printJogadores( );
   time1.deletaTimesJogados(timesJogados);

   Team time2( time1 );
   cout << "- Copia \n";
   
   Tecnico tecnico2;
   tecnico2.nome = "Tecnico";
   tecnico2.nacionalidade = "Brasil";
   tecnico2.numTitulosAlcancados = 0;

   printTecnico(tecnico2);
   
   timesJogados.push_back( string("Paysandu") );
   time2.addJogador( "Luis Angel", "Zagueiro", timesJogados );

   time2.printJogadores( );

   cout << "- Usando o friend ostream &operator\n";
   cout << time2;
      
   return 0;
}