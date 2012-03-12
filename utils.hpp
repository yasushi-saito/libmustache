
#ifndef MUSTACHE_UTILS_HPP
#define MUSTACHE_UTILS_HPP

#include <string>
#include <vector>

namespace mustache {



const std::string whiteSpaces(" \f\n\r\t\v");

const std::string specialChars("&\"'<>");

/**
 * Trim a string (right)
 * http://stackoverflow.com/a/479091
 * 
 * @param str The string to trim
 * @param trimChars The charaters to trim off
 */
void trimRight(std::string& str, const std::string& trimChars = whiteSpaces);

/**
 * Trim a string (left)
 * http://stackoverflow.com/a/479091
 * 
 * @param str The string to trim
 * @param trimChars The charaters to trim off
 */
void trimLeft(std::string& str, const std::string& trimChars = whiteSpaces);

/**
 * Trim a string
 * http://stackoverflow.com/a/479091
 * 
 * @param str The string to trim
 * @param trimChars The charaters to trim off
 */
void trim(std::string& str, const std::string& trimChars = whiteSpaces);

/**
 * Escape special HTML charcters. Not multibyte safe
 * 
 * @param str The string to escape
 */
void htmlspecialchars(std::string * str);

/**
 * Escape special HTML charcters and append to string. Not multibyte safe
 * 
 * @param str The string to escape
 */
void htmlspecialchars_append(std::string * str, std::string * buf);

/**
 * Explode a string
 * http://www.zedwood.com/article/106/cpp-explode-function
 * 
 * @param delimiter The delimiter to explode by
 * @param str The string to explode
 * @param arr The chunks are stored here
 */
void explode(const std::string &delimiter, const std::string &str, std::vector<std::string> * arr);

/**
 * Tokenize a string (strtok for std::string)
 * http://oopweb.com/CPP/Documents/CPPHOWTO/Volume/C++Programming-HOWTO-7.html
 * 
 * @param str The string to tokenize
 * @param delimiters The delimiters to tokenize by
 * @param tokens The tokens are stored here
 */
void stringTok(const std::string &str, const std::string &delimiters, std::vector<std::string> * tokens);



} // namespace Mustache

#endif
