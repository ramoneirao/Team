# include "Team.h"
# include <iostream>
using std::cout;

int Team::numTimes = 0; 
const Data Team::RELEASEDATE = Data( 12, 8, 1904 );

Team::Team( )
:name( "Botafogo" ), dataAtual( )
{
	numTimes++;	
}

Team::Team( string NAME, const Data &data )
:name(NAME), dataAtual(data)
{
	numTimes++;	
}

Team::Team( const Team &sp )
:name( "Botafogo" ), dataAtual(sp.dataAtual)
{
	numTimes++;
	
	jogadores.resize( sp.jogadores.size( ) );
	for( int i = 0; i < jogadores.size( ); i++ )
		jogadores[ i ] = new Jogador( *sp.jogadores[ i ] ); 

}

Team::~Team( )
{
	numTimes--;

	for( int i = 0; i < jogadores.size( ); i++ )
		delete jogadores[ i ];

}

void Team::informacoes( )
{
	cout << "A data de fundacao do time é: ";
	RELEASEDATE.print( );
	cout << '\n';		 
}

void Team::deletaTimesJogados(vector< string > &timesJogados ) 
{ 
    timesJogados.clear();
}

void Team::addJogador( const Jogador &newJogador )
{
	jogadores.push_back( new Jogador( newJogador ) );	
}

void Team::addJogador( const string &name, const string &posicao, const vector< string > &timesJogados )
{
	jogadores.push_back( new Jogador( name, posicao, timesJogados ) );	
}

void Team::addMembro( const Diretoria &newMembro )
{
	membros.push_back( new Diretoria( newMembro ) );	
}

void Team::addMembro( const string &name, const vector< string > &Membros)
{
	membros.push_back( new Diretoria( name, Membros ) );
}

void Team::printJogadores( ) const
{
	cout << "- Jogadores do times\n\n";
	for( int i = 0; i < jogadores.size( ); i++ )
		cout << *jogadores[ i ] << "\n";
}

ostream &operator<<( ostream &out, const Team &smarty )
{
	out << "\nDados do time " << smarty.name << "\n";
	out << "A data de fundacao do time: ";
	smarty.RELEASEDATE.print( );
	out << '\n';

	out << "\n- Jogadores do times\n\n";
	for( int i = 0; i < smarty.jogadores.size( ); i++ )
		out << *smarty.jogadores[ i ] << "\n";

    return out;
}

// print do struct 
void printTecnico( const Tecnico &p )
{
	cout << "- Tecnico do time\n";
    cout << "Nome: " << p.nome << "\n";
    cout << "Nacionalidade: " << p.nacionalidade << "\n"; 
    cout << "Numero de titulos conquistadoes pelo time: "  << p.numTitulosAlcancados << "\n\n";
}
