#pragma once
#include "source2sdk/server/CPhysicsProp.hpp"
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
    // Size: 0xdb8
    // Has VTable
    #pragma pack(push, 1)
    class CItemParachute : public server::CPhysicsProp
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xda0[0x18];
        // Datamap fields:
        // CHandle< CBaseEntity > m_hAttachedEntity; // 0xda0
        // int32_t m_eObjectivePosition; // 0xdb4
        // No schema binary for binding
    };
    #pragma pack(pop)
    
    static_assert(sizeof(CItemParachute) == 0xdb8);
};
