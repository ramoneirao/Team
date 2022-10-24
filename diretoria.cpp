#include "diretoria.h"

Diretoria::Diretoria( )
:nameDiretor("Diretor")
{
        
}

Diretoria::Diretoria( const string &nameDiretor, const vector< string > &membros )
{
    this->nameDiretor = nameDiretor;
    this->membros.resize( membros.size() );
    for( int i = 0; i < this->membros.size( ); i++ )
         this->membros[ i ] = membros[ i ];

}
Diretoria::Diretoria( const Diretoria &DiretoriaOut )
{
    this->nameDiretor = DiretoriaOut.nameDiretor;
    this->membros.resize( DiretoriaOut.membros.size() );
    for( int i = 0; i < this->membros.size( ); i++ )
        this->membros[ i ] = DiretoriaOut.membros[ i ];
}

Diretoria::~Diretoria( )
{

}

void Diretoria::printMembros( ) const
{
    cout << "Lista de menbros:\n";
    for( int i = 0; i < this->membros.size( ); i++ )
        cout << this->membros[ i ] << '\n';
}

void Diretoria::printDiretoria( ) const
{
    cout << "Diretor: " << nameDiretor;
    cout << "\nMembros:\n";
    for( int i = 0; i < this->membros.size( ); i++ )
        cout << this->membros[ i ] << "\n";
}

ostream &operator<<( ostream &out, const Diretoria &diretoria )
{
    out << "Diretor: ";
    out << diretoria.nameDiretor << "\n";
    diretoria.printMembros();

    return out;
}
