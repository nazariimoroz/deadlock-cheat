#pragma once
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CBaseEntity.hpp"
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
    // Size: 0x680
    // Has VTable
    #pragma pack(push, 1)
    class CLogicAuto : public server::CBaseEntity
    {
    public:
        entity2::CEntityIOOutput m_OnMapSpawn; // 0x4e8        
        entity2::CEntityIOOutput m_OnDemoMapSpawn; // 0x510        
        entity2::CEntityIOOutput m_OnNewGame; // 0x538        
        entity2::CEntityIOOutput m_OnLoadGame; // 0x560        
        entity2::CEntityIOOutput m_OnMapTransition; // 0x588        
        entity2::CEntityIOOutput m_OnBackgroundMap; // 0x5b0        
        entity2::CEntityIOOutput m_OnMultiNewMap; // 0x5d8        
        entity2::CEntityIOOutput m_OnMultiNewRound; // 0x600        
        entity2::CEntityIOOutput m_OnVREnabled; // 0x628        
        entity2::CEntityIOOutput m_OnVRNotEnabled; // 0x650        
        CUtlSymbolLarge m_globalstate; // 0x678        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CLogicAuto because it is not a standard-layout class
    static_assert(sizeof(CLogicAuto) == 0x680);
};
