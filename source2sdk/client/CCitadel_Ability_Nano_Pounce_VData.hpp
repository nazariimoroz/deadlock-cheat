#pragma once
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/client/CitadelAbilityVData.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x1a30
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadel_Ability_Nano_Pounce_VData : public client::CitadelAbilityVData
    {
    public:
        // metadata: MPropertyStartGroup "Modifiers"
        // m_LeapModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_LeapModifier;
        char m_LeapModifier[0x10]; // 0x1560        
        // m_ActiveBuff has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_ActiveBuff;
        char m_ActiveBuff[0x10]; // 0x1570        
        // m_SlowModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_SlowModifier;
        char m_SlowModifier[0x10]; // 0x1580        
        // m_DoublePounceModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_DoublePounceModifier;
        char m_DoublePounceModifier[0x10]; // 0x1590        
        // metadata: MPropertyStartGroup "Visuals"
        // m_AttackParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_AttackParticle;
        char m_AttackParticle[0xe0]; // 0x15a0        
        // m_FlashParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_FlashParticle;
        char m_FlashParticle[0xe0]; // 0x1680        
        // m_CastParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_CastParticle;
        char m_CastParticle[0xe0]; // 0x1760        
        // m_ExplodeSlowParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ExplodeSlowParticle;
        char m_ExplodeSlowParticle[0xe0]; // 0x1840        
        // m_PrimaryHitParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_PrimaryHitParticle;
        char m_PrimaryHitParticle[0xe0]; // 0x1920        
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_AttackSound; // 0x1a00        
        CSoundEventName m_strExplodeSound; // 0x1a10        
        // metadata: MPropertyStartGroup "Gameplay"
        float m_flAttackTimePhase01; // 0x1a20        
        float m_flAttackTimePhase02; // 0x1a24        
        float m_flAllyMinTargetRange; // 0x1a28        
        float m_flTargetVerticalOffset; // 0x1a2c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Nano_Pounce_VData because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_Nano_Pounce_VData) == 0x1a30);
};
