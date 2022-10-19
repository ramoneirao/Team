#ifndef DIRETORIA_H
#define DIRETORIA_H

#include <iostream>
using std::cout;
using std::ostream;

#include <string>
using std::string;

#include <vector>
using std::vector;

class Diretoria
{
    friend ostream &operator<<( ostream &, const Diretoria & );

public:
    Diretoria( );
    Diretoria( const string &, const vector< string > & );
    Diretoria( const Diretoria & );
    ~Diretoria( );

    void printDiretoria( ) const;
    void printMembros( ) const;


    void addMembro( const Diretoria & ); 
	void addMembro( const string &, const vector< string > & );

private:

    string nameDiretor;

    vector< string > membros;

};

#endif // DIRETORIA_H