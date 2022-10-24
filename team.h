#ifndef TEAM_H
#define TEAM_H

#include <vector>
using std::vector;

#include <string>
using std::string;

#include "jogador.h"
#include "data.h"
#include "diretoria.h"

struct Tecnico {
	string nome;
	string nacionalidade; 
	int numTitulosAlcancados;

	void printTecnico( const Tecnico & );
};

class Team
{
    friend ostream &operator<<( ostream &, const Team & );

public:

	Team( );
	Team( const Team &);
	Team( string , const Data & = Data( 12, 8, 1904 ) );
	~Team( );
    
	static void informacoes( );
	
	void mostrarData( ) const;

	void printJogadores( ) const;
	
	void deletaTimesJogados(vector< string > &);

	void addJogador( const Jogador & ); 

	void addJogador( const string &, const string &, const vector< string > & );

	void addMembro( const Diretoria & ); 

	void addMembro( const string &, const vector< string > &);

private:

    string name;

    static int numTimes;

	vector< Jogador * > jogadores;

	vector < Diretoria * > membros;

	Data dataAtual;	

	const static Data RELEASEDATE;

};


#endif 