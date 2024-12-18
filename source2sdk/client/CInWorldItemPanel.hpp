#pragma once
#include "source2sdk/client/C_PointClientUIWorldPanel.hpp"
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
    // Registered alignment: 0x10
    // Alignment: 0x10
    // Standard-layout class: false
    // Size: 0xad0
    // Has VTable
    #pragma pack(push, 1)
    class CInWorldItemPanel : public client::C_PointClientUIWorldPanel
    {
    public:
        // m_hTrackedEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hTrackedEntity;
        char m_hTrackedEntity[0x4]; // 0xac0        
        int32_t m_nTrackedEntity; // 0xac4        
        [[maybe_unused]] std::uint8_t pad_0xac8[0x8];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CInWorldItemPanel because it is not a standard-layout class
    static_assert(sizeof(CInWorldItemPanel) == 0xad0);
};
