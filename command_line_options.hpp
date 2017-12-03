//
// Created by Londre Blocker on 12/3/17.
//

#ifndef SANDBOX_COMMAND_LINE_OPTIONS_HPP
#define SANDBOX_COMMAND_LINE_OPTIONS_HPP

#include <string>
#include <boost/program_options.hpp>
namespace po = boost::program_options;

// -------------------------------------------------------------------------
// Handle command line options
//
// Options:
//  [-h|--help]                     Show help menu
//  [-v|--version]                  Display version information
//  [-t|--time]                     User-supplied run time (default= 100.0)
//  [-G|--gflag]                    G flag
//  [-R|--rflag]                    R flag
//  [-J|--jflag]                    J flag
//  [-f|--file] ARG (std:string)    Input file
//  [--value]                       User value
// -------------------------------------------------------------------------
namespace bestro {
class CommandLineOptions {
public:
    enum StatusReturn {
        OPTS_SUCCESS = 0,
        OPTS_VERSION = 1,
        OPTS_HELP = 2,
        OPTS_FAILURE = 3
    };

    CommandLineOptions();

    ~CommandLineOptions();

    StatusReturn parse(int argc, char *argv[]);
    inline const std::string &getInputFile() const;
    inline double getUserTime() { return myUserTime; }
    inline double getUserValue() { return myUserValue; }
    inline bool getGflag() { return myGflag; }
    inline bool getRflag() { return myRflag; }
    inline bool getJflag() { return myJflag; }

protected:
    void setup();

    bool validateFiles();

private:
    CommandLineOptions(const CommandLineOptions &rhs);
    CommandLineOptions &operator=(const CommandLineOptions &rhs);
    po::options_description myOptions;
    std::string myInputFile;
    double myUserTime;
    int myUserValue;
    bool myGflag;
    bool myRflag;
    bool myJflag;
};
}
#endif //SANDBOX_COMMAND_LINE_OPTIONS_HPP
