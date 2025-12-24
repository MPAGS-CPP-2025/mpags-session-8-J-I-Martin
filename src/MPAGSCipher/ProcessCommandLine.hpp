#ifndef MPAGSCIPHER_PROCESSCOMMANDLINE_HPP
#define MPAGSCIPHER_PROCESSCOMMANDLINE_HPP

#include <string>
#include <vector>

/**
 * \brief ProgramSettings combines the user input information for processing.
 * 
 * It contains all data, including help and version flags, filenames, cipher key,
 * and mode of operation.
 * 
 * Use it like
 * \code{.cpp}
 * ProgramSettings settings;
 * \endcode
 * 
 * \since 0.1.0
 */
struct ProgramSettings {
    bool helpRequested = false;       /// if we should print help message
    bool versionRequested = false;    /// if we should print version
    std::string inputFile = "";       /// the input file path to read from
    std::string outputFile = "";      /// the output file path to write to
    std::string cipherKey =
        "";                 /// the cipher key (numeric character in string)
    bool encrypt = true;    /// mode of operation
};

/**
 * \brief Process the command line arguments
 * 
 * \param cmdLineArgs The user input string
 * \param settings The ProgramSettings struct to write the args into
 * 
 * \return true or false depending on if parsed successfully or errored
 */

bool processCommandLine(const std::vector<std::string>& cmdLineArgs,
                        ProgramSettings& settings);

#endif    // MPAGSCIPHER_PROCESSCOMMANDLINE_HPP
