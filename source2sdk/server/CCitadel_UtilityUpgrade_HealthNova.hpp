#pragma once
#include "source2sdk/server/CCitadel_Item.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xc00
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_UtilityUpgrade_HealthNova : public server::CCitadel_Item
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xb20[0xe0];
        // No schema binary for binding
    };
    #pragma pack(pop)
    
    static_assert(sizeof(CCitadel_UtilityUpgrade_HealthNova) == 0xc00);
};
