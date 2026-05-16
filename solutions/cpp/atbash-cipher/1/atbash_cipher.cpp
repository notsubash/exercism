#include "atbash_cipher.h"
#include <string>
#include <cctype>

namespace atbash_cipher {

// TODO: add your solution here
    char atbash_char(char c){
        if (std::isalpha(c)){
            return 'z' - (std::tolower(c) - 'a');
        }
        if (std::isdigit(c)){
            return c;
        }
        return 0;
    }

    std::string encode(std::string plainText){
        std::string cipher{};
        int count{0};

        for (char c : plainText){
            char encoded = atbash_char(c);
            if (encoded ==0){
                continue;
            }
            if (count > 0 && count % 5 ==0){
                cipher += ' ';
            }
            cipher += encoded;
            ++count;
        }
        return cipher;
    }

    std::string decode(std::string cipherText){
        std::string plain{};

        for (char c : cipherText){
            if (c == ' '){
                continue;
            }
            char decoded = atbash_char(c);
            if (decoded != 0){
                plain += decoded;
            }
        }
        return plain;
    }

}  // namespace atbash_cipher
