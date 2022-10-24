#include "Jogador.h"

Jogador::Jogador( )
:name("Ramon"), posicao("Atacante")
{
        
}

Jogador::Jogador( const string &name, const string& posicao,  const vector< string > &timesJogados )
{
    this->name = name;
    this->posicao = posicao;
    
    this->timesJogados.resize( timesJogados.size() );
    for( int i = 0; i < this->timesJogados.size( ); i++ )
         this->timesJogados[ i ] = timesJogados[ i ];

}

Jogador::Jogador( const Jogador &jogadorOut )
{
    this->name = jogadorOut.name;
    this->posicao = jogadorOut.posicao;

    this->timesJogados.resize( jogadorOut.timesJogados.size() );
    for( int i = 0; i < this->timesJogados.size( ); i++ )
        this->timesJogados[ i ] = jogadorOut.timesJogados[ i ];
}

Jogador::~Jogador( )
{

}

 void Jogador::printTimesJogados( ) const
{
    cout << "Lista de times jogados:\n";
    for( int i = 0; i < this->timesJogados.size( ); i++ )
        cout << this->timesJogados[ i ] << "\n";
}

ostream &operator<<( ostream &out, const Jogador &jogador )
{
    out << "Nome do Jogador: ";
    out << jogador.name << "\n"; 
    out << "Posicao do jogador: ";
    out << jogador.posicao << "\n";
    jogador.printTimesJogados( );

    return out;
}
