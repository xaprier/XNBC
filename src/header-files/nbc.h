//
// Created by xaprier on 8/23/22.
//
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <string>

#ifndef QT_NBC_NBC_H
#define QT_NBC_NBC_H

class nbc {
   private:
   public:
    static std::string binToOct( const std::string &number );

    static std::string binToDec( std::basic_string<char> number );

    static std::string binToHex( const std::string &number );

    static std::string decToBin( std::basic_string<char> number );

    static std::string decToOct( std::basic_string<char> number );

<<<<<<< Updated upstream
	static std::string octToHex( const std::basic_string<char> &number );

=======
    static std::string decToHex( std::basic_string<char> number );

    static std::string octToBin( const std::string &number );

    static std::string octToDec( std::basic_string<char> number );

    static std::string octToHex( const std::basic_string<char> &number );
>>>>>>> Stashed changes
};

#endif  // QT_NBC_NBC_H