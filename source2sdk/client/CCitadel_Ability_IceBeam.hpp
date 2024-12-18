#pragma once
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class C_BaseEntity;
};

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x1358
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "Vector m_vBeamAimPos"
    #pragma pack(push, 1)
    class CCitadel_Ability_IceBeam : public client::C_CitadelBaseAbility
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xca0[0x618]; // 0xca0
        entity2::GameTime_t m_flNextDamageTick; // 0x12b8        
        Vector m_vStart; // 0x12bc        
        Vector m_vEnd; // 0x12c8        
        [[maybe_unused]] std::uint8_t pad_0x12d4[0x3c]; // 0x12d4
        // m_vecEntitiesHit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<client::C_BaseEntity>> m_vecEntitiesHit;
        char m_vecEntitiesHit[0x18]; // 0x1310        
        // metadata: MNetworkEnable
        Vector m_vBeamAimPos; // 0x1328        
        [[maybe_unused]] std::uint8_t pad_0x1334[0x4]; // 0x1334
        // metadata: MNetworkEnable
        // metadata: MNetworkEncoder "qangle"
        // metadata: MNetworkChangeCallback "OnBeamAnglesChanged"
        QAngle m_angBeamAngles; // 0x1338        
        [[maybe_unused]] std::uint8_t pad_0x1344[0xc]; // 0x1344
        bool m_bNeedsBeamReset; // 0x1350        
        [[maybe_unused]] std::uint8_t pad_0x1351[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_IceBeam because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_IceBeam) == 0x1358);
};
