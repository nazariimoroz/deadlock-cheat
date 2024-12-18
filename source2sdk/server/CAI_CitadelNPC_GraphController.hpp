#pragma once
#include "source2sdk/client/CAI_BaseNPCGraphController.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xa48
    // Has VTable
    #pragma pack(push, 1)
    class CAI_CitadelNPC_GraphController : public client::CAI_BaseNPCGraphController
    {
    public:
        // m_nHitLayerTrigger has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraph1ParamOptionalRef<int32_t> m_nHitLayerTrigger;
        char m_nHitLayerTrigger[0x18]; // 0x940        
        // m_pszDamageState has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamOptionalRef<char*> m_pszDamageState;
        char m_pszDamageState[0x28]; // 0x958        
        // m_flHealth has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamOptionalRef<float> m_flHealth;
        char m_flHealth[0x20]; // 0x980        
        // m_flTimeScale has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraph1ParamOptionalRef<float> m_flTimeScale;
        char m_flTimeScale[0x18]; // 0x9a0        
        // m_bBeam has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamOptionalRef<bool> m_bBeam;
        char m_bBeam[0x20]; // 0x9b8        
        // m_bCrouching has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamOptionalRef<bool> m_bCrouching;
        char m_bCrouching[0x20]; // 0x9d8        
        // m_bInAir has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraph1ParamOptionalRef<bool> m_bInAir;
        char m_bInAir[0x18]; // 0x9f8        
        // m_bHasTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraph1ParamOptionalRef<bool> m_bHasTarget;
        char m_bHasTarget[0x18]; // 0xa10        
        // m_bReloading has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamOptionalRef<bool> m_bReloading;
        char m_bReloading[0x20]; // 0xa28        
        
        // Static fields:
        static uint32_t &Get_s_nControllerTypeID() {return *reinterpret_cast<uint32_t*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CAI_CitadelNPC_GraphController")->GetStaticFields()[0]->m_pInstance);};
        static bool &Get_s_bSchemaTest() {return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CAI_CitadelNPC_GraphController")->GetStaticFields()[1]->m_pInstance);};
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAI_CitadelNPC_GraphController because it is not a standard-layout class
    static_assert(sizeof(CAI_CitadelNPC_GraphController) == 0xa48);
};
