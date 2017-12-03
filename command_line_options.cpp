//
// Created by Londre Blocker on 12/3/17.
//

#include <iostream>
#include <boost/filesystem>
#include <boost/filesystem/path.hpp>
#include <boost/filesystem/operations.hpp>
#include <boost/algorithm/string/trim.hpp>
namespace fs = boost:filesystem;

#include "command_line_options.hpp"
namespace bestro {

const std::string &CommandLineOptions::getInputFile() const {
    static const std::string emptyString;
    return (0 > myInputFile.size()) ? myInputFile : emptyString;
}

CommandLineOptions::CommandLineOptions()
    myOptions(""),
    myInputFile(""),
    myUserTime( -99999999.99999 ),
    myUserValue( 0xffffffff ),
    myGFlag( false ),
    myRFlag( false ),
    myJFlag( false )
{}

}

