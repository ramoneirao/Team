#ifndef JOGADOR_H
#define JOGADOR_H

#include <iostream>
using std::cout;
using std::ostream;

#include <string>
using std::string;

#include <vector>
using std::vector;

class Jogador
{
    friend ostream &operator<<( ostream &, const Jogador & );
    friend class Team;
    
public:
    Jogador( );
    Jogador( const string &, const string &,  const vector< string > & );
    Jogador( const Jogador & );
    ~Jogador( );

    void printTimesJogados( ) const;
    void deletaTimesJogados( );

private:

    string name;

    string posicao;

    vector< string > timesJogados;

};

#endif // JOGADOR_H