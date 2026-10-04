#include "fate/formats/hud_ui.hpp"

namespace fate::formats::hud_ui {

Tim2CatalogEntry inspect_tim2_for_catalog(std::span<const std::byte> bytes) {
    const auto info = tim2::parse(bytes);
    Tim2CatalogEntry e{};
    e.width = info.picture.width;
    e.height = info.picture.height;
    e.image_type = info.picture.image_type;
    e.pixel_format = info.picture.pixel_format_name();
    e.csm1 = info.picture.uses_csm1();
    e.role = UiRole::Unknown;
    e.format_status = EvidenceStatus::Fact;
    e.role_status = EvidenceStatus::Unknown;
    return e;
}

} // namespace fate::formats::hud_ui
