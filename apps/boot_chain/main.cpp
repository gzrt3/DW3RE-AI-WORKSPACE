#include "fate/boot_chain_probe.hpp"
#include <iostream>
#include <stdexcept>
#include <string_view>

int main(int argc, char** argv) {
    try {
        if (argc == 2 && std::string_view(argv[1]) == "--self-test") {
            return fate::bootchain::self_test();
        }
        if (argc != 3) {
            std::cerr << "Usage: fate_boot_chain <retail ELF> <evidence directory>\n";
            return 2;
        }
        return fate::bootchain::run(argv[1], argv[2]);
    } catch (const std::exception& error) {
        std::cerr << error.what() << '\n';
        return 3;
    }
}
