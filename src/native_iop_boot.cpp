#include "fate/native_iop_boot.hpp"
#include "fate/provenance.hpp"
#include "fate/native_iop_manifest.hpp"
#include "ps2_iop_transport.h"
#include <fstream>
#include <stdexcept>
#include <vector>

namespace fate {
void configure_native_iop_boot(PS2Runtime& runtime, const std::filesystem::path& iop_root)
{
    ps2x::iop::NativeIopRebootProfile reboot;
    reboot.command = "rom0:UDNL cdrom0:\\MODULES\\IOPRP253.IMG;1";
    reboot.prepareLoaderState = true;
    reboot.initialBootModes = {0x00040000u};
    // Selected UDNL PCs374/378/380 set ResetData mode3 and null command;
    // selected LOADCORE PCs12C..13C create mode4=3, with no mode5 record.
    reboot.bootModes = {0x00040003u};
    PS2RomProfile rom;
    rom.id = "scph39001-dw3xl-ioprp253";
    rom.provider = "verified-extracted-originals";
    rom.matcher.elfName = "SLUS_206.17";
    rom.matcher.entryPoint = 0x00100008u;
    for (const auto& entry : native_iop::manifest) {
        const auto path = iop_root / "boot" / (std::string(entry.name) + ".IRX");
        provenance::verify_file(path, entry.size, entry.sha256);
        std::vector<uint8_t> image(static_cast<size_t>(entry.size));
        std::ifstream file(path, std::ios::binary);
        if (!file.read(reinterpret_cast<char*>(image.data()), static_cast<std::streamsize>(image.size())))
            throw std::runtime_error("Cannot read verified IOP module: " + path.string());
        // ROM file reads retain the original bytes even for explicit HLE services.
        rom.files.emplace(entry.name, image);
        const std::string_view name(entry.name);
        const bool libraryImage = name == "SYSMEM" || name == "LOADCORE" || name == "INTRMANP" ||
            name == "THREADMAN" || name == "IOMAN" || name == "STDIO" ||
            name == "SIFMAN" || name == "SIFCMD" || name == "CDVDMAN" || name == "VBLANK" || name == "TIMEMANI";
        reboot.modules.push_back({"rom0:" + std::string(entry.name),
                                  entry.hle && !libraryImage ? std::vector<uint8_t>{} : std::move(image), libraryImage});
    }
    if (!PS2IopTransport::configureReboot(&runtime, std::move(reboot)))
        throw std::runtime_error("Native IOP reboot profile rejected");
    PS2RomDevice::registerProfile(std::move(rom));
    std::string error;
    if (!runtime.romDevice().configure({"SLUS_206.17",0x00100008u,0u}, &error))
        throw std::runtime_error("Original ROM mounting failed: " + error);
}
}
