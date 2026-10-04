#pragma once
#include <filesystem>
class PS2Runtime;
namespace fate {
// Configure the identified XL startup profile from verified extracted bytes.
// Throws on unavailable or changed input; performs no guest execution.
void configure_native_iop_boot(PS2Runtime& runtime,
                               const std::filesystem::path& iop_root);
}
