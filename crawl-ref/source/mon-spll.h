/*
 *  Modified for Crawl Reference by $Author$ on $Date$
 */

#ifndef MON_SPLL_H
#define MON_SPLL_H


/* *********************************************************************

    this will do as long as ( 0 >= (template/sec numbers) <= 255 )

    !!!NOTE!!! for simplicity, these templates assume that most monsters
    capable of casting more powerful summonings can also cast Abjuration.

    Template Format:

        {  WHICH TEMPLATE,
             bolt spell,
             enchantment,
             self-enchantment,          // 50% tried after others fail
             misc(1) spell,
             misc(2) spell,             // MS_DIG must be here to work!
             emergency spell            // only when fleeing
        }

    see: mon-util::mons_spell_list() and
         monstuff::handle_spell() for usage details.

********************************************************************* */


    {  MST_ORC_WIZARD_I,
       MS_MMISSILE,
       MS_SLOW,
       MS_HASTE,
       MS_MMISSILE,
       MS_BLINK,
       MS_BLINK  },

    {  MST_ORC_WIZARD_II,
       MS_FLAME,
       MS_CONFUSE,
       MS_INVIS,
       MS_MMISSILE,
       MS_NO_SPELL,
       MS_CONFUSE  },

    {  MST_ORC_WIZARD_III,
       MS_FROST,
       MS_CANTRIP,
       MS_HASTE,
       MS_FLAME,
       MS_MMISSILE,
       MS_INVIS  },

    {  MST_GUARDIAN_NAGA,
       MS_TELEPORT_OTHER,
       MS_TELEPORT_OTHER,
       MS_HEAL,
       MS_VENOM_BOLT,
       MS_SLOW,
       MS_HEAL  },

    {  MST_LICH_I,
       MS_COLD_BOLT,
       MS_PARALYSIS,
       MS_SUMMON_DEMON_GREATER,
       MS_ANIMATE_DEAD,
       MS_IRON_BOLT,
       MS_TELEPORT  },

    {  MST_LICH_II,
       MS_FIRE_BOLT,
       MS_CONFUSE,
       MS_HASTE,
       MS_NEGATIVE_BOLT,
       MS_SUMMON_DEMON_GREATER,
       MS_BANISHMENT  },

    {  MST_LICH_III,
       MS_NEGATIVE_BOLT,
       MS_ANIMATE_DEAD,
       MS_SUMMON_UNDEAD,
       MS_FROST,
       MS_CRYSTAL_SPEAR,
       MS_SUMMON_UNDEAD  },

    {  MST_LICH_IV,
       MS_ORB_ENERGY,
       MS_COLD_BOLT,
       MS_INVIS,
       MS_ANIMATE_DEAD,
       MS_IRON_BOLT,
       MS_INVIS  },

    {  MST_BURNING_DEVIL,
       MS_HELLFIRE_BURST,
       MS_HELLFIRE_BURST,
       MS_NO_SPELL,
       MS_HELLFIRE_BURST,
       MS_HELLFIRE_BURST,
       MS_HELLFIRE_BURST  },

    {  MST_VAMPIRE,
       MS_VAMPIRE_SUMMON,
       MS_CONFUSE,
       MS_INVIS,
       MS_NO_SPELL,
       MS_VAMPIRE_SUMMON,
       MS_VAMPIRE_SUMMON },

    {  MST_VAMPIRE_KNIGHT,
       MS_VAMPIRE_SUMMON,
       MS_PARALYSIS,
       MS_HASTE,
       MS_INVIS,
       MS_VAMPIRE_SUMMON,
       MS_HEAL  },

    {  MST_VAMPIRE_MAGE,
       MS_NEGATIVE_BOLT,
       MS_SUMMON_UNDEAD,
       MS_INVIS,
       MS_ANIMATE_DEAD,
       MS_ANIMATE_DEAD,
       MS_TELEPORT },

    {  MST_EFREET,
       MS_FIRE_BOLT,
       MS_NO_SPELL,
       MS_NO_SPELL,
       MS_FIREBALL,
       MS_NO_SPELL,
       MS_NO_SPELL  },

    {  MST_BRAIN_WORM,
       MS_BRAIN_FEED,
       MS_NO_SPELL,
       MS_NO_SPELL,
       MS_BRAIN_FEED,
       MS_NO_SPELL,
       MS_NO_SPELL  },

    {  MST_GIANT_ORANGE_BRAIN,
       MS_BRAIN_FEED,
       MS_MUTATION,
       MS_LEVEL_SUMMON,
       MS_CONFUSE,
       MS_BLINK,
       MS_TELEPORT  },

    {  MST_RAKSHASA,
       MS_FAKE_RAKSHASA_SUMMON,
       MS_BLINK,
       MS_INVIS,
       MS_FAKE_RAKSHASA_SUMMON,
       MS_BLINK,
       MS_TELEPORT  },

    {  MST_GREAT_ORB_OF_EYES,
       MS_PARALYSIS,
       MS_DISINTEGRATE,
       MS_NO_SPELL,
       MS_SLOW,
       MS_CONFUSE,
       MS_TELEPORT_OTHER  },

    {  MST_ORC_SORCERER,
       MS_FIRE_BOLT,
       MS_NEGATIVE_BOLT,
       MS_SUMMON_DEMON,
       MS_PARALYSIS,
       MS_ANIMATE_DEAD,
       MS_TELEPORT  },

    {  MST_STEAM_DRAGON,
       MS_STEAM_BALL,
       MS_STEAM_BALL,
       MS_NO_SPELL,
       MS_STEAM_BALL,
       MS_STEAM_BALL,
       MS_NO_SPELL  },

    {  MST_HELL_KNIGHT_I,
       MS_NO_SPELL,
       MS_PAIN,
       MS_HASTE,
       MS_NO_SPELL,
       MS_NO_SPELL,
       MS_HASTE  },

    {  MST_HELL_KNIGHT_II,
       MS_NO_SPELL,
       MS_FIRE_BOLT,
       MS_NO_SPELL,
       MS_NO_SPELL,
       MS_NO_SPELL,
       MS_BLINK  },

    {  MST_NECROMANCER_I,
       MS_COLD_BOLT,
       MS_NEGATIVE_BOLT,
       MS_NO_SPELL,
       MS_ANIMATE_DEAD,
       MS_ANIMATE_DEAD,
       MS_TELEPORT  },

    {  MST_NECROMANCER_II,
       MS_FIRE_BOLT,
       MS_PAIN,
       MS_INVIS,
       MS_ANIMATE_DEAD,
       MS_ANIMATE_DEAD,
       MS_BLINK  },

    {  MST_WIZARD_I,
       MS_MMISSILE,
       MS_PARALYSIS,
       MS_HASTE,
       MS_LIGHTNING_BOLT,
       MS_CONFUSE,
       MS_TELEPORT  },

    {  MST_WIZARD_II,
       MS_VENOM_BOLT,
       MS_ORB_ENERGY,
       MS_INVIS,
       MS_CONFUSE,
       MS_SLOW,
       MS_TELEPORT  },

    {  MST_WIZARD_III,
       MS_PARALYSIS,
       MS_CRYSTAL_SPEAR,
       MS_BLINK,
       MS_FIRE_BOLT,
       MS_COLD_BOLT,
       MS_HEAL  },

    {  MST_WIZARD_IV,
       MS_STONE_ARROW,
       MS_STING,
       MS_BLINK,
       MS_LIGHTNING_BOLT,
       MS_BANISHMENT,
       MS_HEAL  },

    {  MST_WIZARD_V,
       MS_PARALYSIS,
       MS_FLAME,
       MS_INVIS,
       MS_TELEPORT_OTHER,
       MS_FIREBALL,
       MS_TELEPORT_OTHER  },

    {  MST_ORC_PRIEST,
       MS_PAIN,
       MS_NO_SPELL,
       MS_CANTRIP,
       MS_SMITE,
       MS_NO_SPELL,
       MS_HEAL  },

    {  MST_ORC_HIGH_PRIEST,
       MS_PAIN,
       MS_SUMMON_DEMON,
       MS_SUMMON_DEMON,
       MS_SMITE,
       MS_ANIMATE_DEAD,
       MS_HEAL  },

    {  MST_MOTTLED_DRAGON,
       MS_STICKY_FLAME,
       MS_STICKY_FLAME,
       MS_NO_SPELL,
       MS_STICKY_FLAME,
       MS_STICKY_FLAME,
       MS_NO_SPELL  },

    {  MST_ICE_FIEND,
       MS_COLD_BOLT,
       MS_COLD_BOLT,
       MS_NO_SPELL,
       MS_TORMENT,
       MS_NO_SPELL,
       MS_SUMMON_DEMON  },

    {  MST_SHADOW_FIEND,
       MS_COLD_BOLT,
       MS_NEGATIVE_BOLT,
       MS_NO_SPELL,
       MS_TORMENT,
       MS_NO_SPELL,
       MS_SUMMON_DEMON  },

    {  MST_TORMENTOR,
       MS_PAIN,
       MS_NO_SPELL,
       MS_NO_SPELL,
       MS_PAIN,
       MS_NO_SPELL,
       MS_TORMENT  },

    {  MST_STORM_DRAGON,
       MS_LIGHTNING_BOLT,
       MS_LIGHTNING_BOLT,
       MS_NO_SPELL,
       MS_LIGHTNING_BOLT,
       MS_LIGHTNING_BOLT,
       MS_NO_SPELL  },

    {  MST_WHITE_IMP,
       MS_FROST,
       MS_NO_SPELL,
       MS_NO_SPELL,
       MS_NO_SPELL,
       MS_NO_SPELL,
       MS_NO_SPELL  },

    {  MST_YNOXINUL,
       MS_NO_SPELL,
       MS_IRON_BOLT,
       MS_SUMMON_UFETUBUS,
       MS_NO_SPELL,
       MS_SUMMON_UFETUBUS,
       MS_NO_SPELL  },

    {  MST_NEQOXEC,
       MS_MUTATION,
       MS_NO_SPELL,
       MS_NO_SPELL,
       MS_BRAIN_FEED,
       MS_SUMMON_DEMON_LESSER,
       MS_NO_SPELL  },

    {  MST_HELLWING,
       MS_NO_SPELL,
       MS_NO_SPELL,
       MS_NO_SPELL,
       MS_TELEPORT_OTHER,
       MS_ANIMATE_DEAD,
       MS_TELEPORT  },

    {  MST_SMOKE_DEMON,
       MS_STICKY_FLAME,
       MS_STEAM_BALL,
       MS_NO_SPELL,
       MS_SMITE,
       MS_NO_SPELL,
       MS_NO_SPELL  },

    {  MST_CACODEMON,
       MS_SUMMON_DEMON_LESSER,
       MS_SUMMON_DEMON_LESSER,
       MS_SUMMON_DEMON_LESSER,
       MS_MUTATION,
       MS_DIG,
       MS_SUMMON_DEMON  },

    {  MST_GREEN_DEATH,
       MS_POISON_ARROW,
       MS_POISON_BLAST,
       MS_NO_SPELL,
       MS_VENOM_BOLT,
       MS_SUMMON_DEMON_LESSER,
       MS_BLINK  },

    {  MST_BALRUG,
       MS_FIRE_BOLT,
       MS_FIREBALL,
       MS_NO_SPELL,
       MS_STICKY_FLAME,
       MS_SMITE,
       MS_TELEPORT  },

    {  MST_BLUE_DEATH,
       MS_LIGHTNING_BOLT,
       MS_COLD_BOLT,
       MS_NO_SPELL,
       MS_SUMMON_DEMON_LESSER,
       MS_LEVEL_SUMMON,
       MS_TELEPORT_OTHER  },

    {  MST_GERYON,
       MS_SUMMON_BEAST,
       MS_SUMMON_BEAST,
       MS_NO_SPELL,
       MS_SUMMON_BEAST,
       MS_NO_SPELL,
       MS_SUMMON_BEAST  },

    {  MST_DISPATER,
       MS_SUMMON_DEMON_GREATER,
       MS_IRON_BOLT,
       MS_SUMMON_DEMON,
       MS_LIGHTNING_BOLT,
       MS_HELLFIRE,
       MS_SUMMON_DEMON_GREATER  },

    {  MST_ASMODEUS,
       MS_FIRE_BOLT,
       MS_HELLFIRE,
       MS_SUMMON_DEMON,
       MS_SUMMON_DEMON_GREATER,
       MS_NEGATIVE_BOLT,
       MS_TELEPORT  },

    {  MST_ERESHKIGAL,
       MS_NEGATIVE_BOLT,
       MS_COLD_BOLT,
       MS_SUMMON_DEMON,
       MS_PAIN,
       MS_PARALYSIS,
       MS_HEAL  },

    {  MST_ANTAEUS,
       MS_COLD_BOLT,
       MS_LIGHTNING_BOLT,
       MS_NO_SPELL,
       MS_NO_SPELL,
       MS_NO_SPELL,
       MS_NO_SPELL  },

    {  MST_MNOLEG,
       MS_SUMMON_DEMON,
       MS_SMITE,
       MS_INVIS,
       MS_MUTATION,
       MS_LEVEL_SUMMON,
       MS_TELEPORT  },

    {  MST_LOM_LOBON,
       MS_LIGHTNING_BOLT,
       MS_COLD_BOLT,
       MS_HEAL,
       MS_SUMMON_DEMON,
       MS_TELEPORT,
       MS_TELEPORT  },

    {  MST_CEREBOV,
       MS_FIRE_BOLT,
       MS_IRON_BOLT,
       MS_NO_SPELL,
       MS_FIREBALL,
       MS_SUMMON_DEMON_LESSER,
       MS_NO_SPELL  },

    {  MST_GLOORX_VLOQ,
       MS_POISON_ARROW,
       MS_SLOW,
       MS_SUMMON_DEMON,
       MS_NEGATIVE_BOLT,
       MS_SUMMON_DEMON,
       MS_NO_SPELL  },

    {  MST_TITAN,
       MS_LIGHTNING_BOLT,
       MS_NO_SPELL,
       MS_HEAL,
       MS_NO_SPELL,
       MS_NO_SPELL,
       MS_HEAL  },

    {  MST_GOLDEN_DRAGON,
       MS_FIRE_BOLT,
       MS_COLD_BOLT,
       MS_NO_SPELL,
       MS_NO_SPELL,
       MS_POISON_BLAST,
       MS_NO_SPELL  },

    {  MST_DEEP_ELF_SUMMONER,
       MS_BLINK,
       MS_SUMMON_DEMON_LESSER,
       MS_SUMMON_UFETUBUS,
       MS_VAMPIRE_SUMMON,
       MS_SUMMON_DEMON,
       MS_TELEPORT  },

    {  MST_DEEP_ELF_CONJURER_I,
       MS_FIRE_BOLT,
       MS_COLD_BOLT,
       MS_CANTRIP,
       MS_LIGHTNING_BOLT,
       MS_STICKY_FLAME,
       MS_TELEPORT  },

    {  MST_DEEP_ELF_CONJURER_II,
       MS_STICKY_FLAME,
       MS_ORB_ENERGY,
       MS_INVIS,
       MS_STONE_ARROW,
       MS_NEGATIVE_BOLT,
       MS_TELEPORT  },

    {  MST_DEEP_ELF_PRIEST,
       MS_PAIN,
       MS_CANTRIP,
       MS_HEAL,
       MS_SMITE,
       MS_ANIMATE_DEAD,
       MS_HEAL  },

    {  MST_DEEP_ELF_HIGH_PRIEST,
       MS_SUMMON_DEMON,
       MS_HELLFIRE_BURST,
       MS_HEAL,
       MS_SMITE,
       MS_ANIMATE_DEAD,
       MS_HEAL  },

    {  MST_DEEP_ELF_DEMONOLOGIST,
       MS_SUMMON_DEMON,
       MS_BANISHMENT,
       MS_SUMMON_DEMON,
       MS_SUMMON_DEMON_GREATER,
       MS_SUMMON_DEMON_LESSER,
       MS_TELEPORT  },

    {  MST_DEEP_ELF_ANNIHILATOR,
       MS_LIGHTNING_BOLT,
       MS_CRYSTAL_SPEAR,
       MS_BLINK,
       MS_IRON_BOLT,
       MS_POISON_ARROW,
       MS_TELEPORT  },

    {  MST_DEEP_ELF_SORCERER,
       MS_NEGATIVE_BOLT,
       MS_BANISHMENT,
       MS_HASTE,
       MS_SUMMON_DEMON,
       MS_HELLFIRE,
       MS_TELEPORT  },

    {  MST_DEEP_ELF_DEATH_MAGE,
       MS_NEGATIVE_BOLT,
       MS_NEGATIVE_BOLT,
       MS_HEAL,
       MS_ANIMATE_DEAD,
       MS_ANIMATE_DEAD,
       MS_TELEPORT  },

    {  MST_KOBOLD_DEMONOLOGIST,
       MS_SUMMON_DEMON_LESSER,
       MS_SUMMON_DEMON,
       MS_CANTRIP,
       MS_SUMMON_DEMON_LESSER,
       MS_SUMMON_DEMON,
       MS_CANTRIP  },           // this should be cute -- bwr

    {  MST_NAGA,
       MS_POISON_SPLASH,
       MS_POISON_SPLASH,
       MS_NO_SPELL,
       MS_NO_SPELL,
       MS_NO_SPELL,
       MS_NO_SPELL  },

    {  MST_NAGA_MAGE,
       MS_VENOM_BOLT,
       MS_ORB_ENERGY,
       MS_HASTE,
       MS_POISON_ARROW,
       MS_TELEPORT_OTHER,
       MS_TELEPORT  },

    {  MST_CURSE_SKULL,
       MS_SUMMON_UNDEAD,
       MS_SUMMON_UNDEAD,
       MS_NO_SPELL,
       MS_TORMENT,
       MS_SUMMON_UNDEAD,
       MS_NO_SPELL  },

    {  MST_SHINING_EYE,
       MS_MUTATION,
       MS_MUTATION,
       MS_NO_SPELL,
       MS_NO_SPELL,
       MS_NO_SPELL,
       MS_NO_SPELL  },

    {  MST_FROST_GIANT,
       MS_COLD_BOLT,
       MS_COLD_BOLT,
       MS_NO_SPELL,
       MS_NO_SPELL,
       MS_NO_SPELL,
       MS_NO_SPELL  },

    {  MST_ANGEL,
       MS_NO_SPELL,
       MS_NO_SPELL,
       MS_HEAL,
       MS_NO_SPELL,
       MS_HEAL,
       MS_HEAL  },

    {  MST_DAEVA,
       MS_SMITE,
       MS_NO_SPELL,
       MS_NO_SPELL,
       MS_SMITE,
       MS_SMITE,
       MS_NO_SPELL  },

    {  MST_SHADOW_DRAGON,
       MS_NEGATIVE_BOLT,
       MS_NEGATIVE_BOLT,
       MS_NO_SPELL,
       MS_NO_SPELL,
       MS_NEGATIVE_BOLT,
       MS_NO_SPELL  },

    {  MST_SPHINX,
       MS_CONFUSE,
       MS_PARALYSIS,
       MS_HEAL,
       MS_SMITE,
       MS_SLOW,
       MS_HEAL  },

    {  MST_MUMMY,
       MS_SUMMON_DEMON,
       MS_SMITE,
       MS_NO_SPELL,
       MS_TORMENT,
       MS_SUMMON_UNDEAD,
       MS_SUMMON_UNDEAD },

    {  MST_ELECTRIC_GOLEM,
       MS_LIGHTNING_BOLT,
       MS_LIGHTNING_BOLT,
       MS_BLINK,
       MS_LIGHTNING_BOLT,
       MS_LIGHTNING_BOLT,
       MS_BLINK  },

    {  MST_ORB_OF_FIRE,
       MS_FIRE_BOLT,
       MS_FIRE_BOLT,
       MS_NO_SPELL,
       MS_MUTATION,
       MS_FIREBALL,
       MS_FIREBALL  },

    {  MST_SHADOW_IMP,
       MS_PAIN,
       MS_NO_SPELL,
       MS_ANIMATE_DEAD,
       MS_ANIMATE_DEAD,
       MS_NO_SPELL,
       MS_NO_SPELL  },

    {  MST_GHOST,    // actual spells taken from struct (see mon-util.cc),
       MS_NO_SPELL,          // this line: splist[x] = ghost.values[x + 14] -- dlb
       MS_NO_SPELL,
       MS_NO_SPELL,
       MS_NO_SPELL,
       MS_NO_SPELL,
       MS_NO_SPELL  },

    {  MST_HELL_HOG,
       MS_STICKY_FLAME,
       MS_STICKY_FLAME,
       MS_NO_SPELL,
       MS_NO_SPELL,
       MS_NO_SPELL,
       MS_NO_SPELL  },

    {  MST_SWAMP_DRAGON,
       MS_POISON_BLAST,
       MS_POISON_BLAST,
       MS_NO_SPELL,
       MS_POISON_BLAST,
       MS_POISON_BLAST,
       MS_NO_SPELL  },

    {  MST_SWAMP_DRAKE,
       MS_MARSH_GAS,
       MS_MARSH_GAS,
       MS_NO_SPELL,
       MS_MARSH_GAS,
       MS_MARSH_GAS,
       MS_NO_SPELL  },

    {  MST_SERPENT_OF_HELL,
       MS_HELLFIRE,
       MS_HELLFIRE,
       MS_NO_SPELL,
       MS_HELLFIRE,
       MS_HELLFIRE,
       MS_NO_SPELL  },

    {  MST_BOGGART,
       MS_CONFUSE,
       MS_SLOW,
       MS_INVIS,
       MS_BLINK,
       MS_LEVEL_SUMMON,
       MS_LEVEL_SUMMON  },

    {  MST_EYE_OF_DEVASTATION,
       MS_ENERGY_BOLT,
       MS_ENERGY_BOLT,
       MS_NO_SPELL,
       MS_ENERGY_BOLT,
       MS_ENERGY_BOLT,
       MS_NO_SPELL  },

    {  MST_QUICKSILVER_DRAGON,
       MS_QUICKSILVER_BOLT,
       MS_QUICKSILVER_BOLT,
       MS_NO_SPELL,
       MS_QUICKSILVER_BOLT,
       MS_QUICKSILVER_BOLT,
       MS_NO_SPELL  },

    {  MST_IRON_DRAGON,
       MS_METAL_SPLINTERS,
       MS_METAL_SPLINTERS,
       MS_NO_SPELL,
       MS_METAL_SPLINTERS,
       MS_METAL_SPLINTERS,
       MS_NO_SPELL  },

    {  MST_SKELETAL_WARRIOR,
       MS_ANIMATE_DEAD,
       MS_NO_SPELL,
       MS_ANIMATE_DEAD,
       MS_NO_SPELL,
       MS_NO_SPELL,
       MS_NO_SPELL  },

    {  MST_MYSTIC,
       MS_BRAIN_FEED,
       MS_SMITE,
       MS_INVIS,
       MS_CONFUSE,
       MS_PARALYSIS,
       MS_HEAL  },

    {  MST_DEATH_DRAKE,
       MS_MIASMA,
       MS_MIASMA,
       MS_NO_SPELL,
       MS_MIASMA,
       MS_MIASMA,
       MS_NO_SPELL  },

    {  MST_DRAC_SCORCHER,
       MS_FIRE_BOLT,
       MS_STICKY_FLAME,
       MS_NO_SPELL,
       MS_FIREBALL,
       MS_HELLFIRE,
       MS_HELLFIRE_BURST },

    {  MST_DRAC_CALLER,
       MS_NO_SPELL,
       MS_SUMMON_DRAKES,
       MS_SUMMON_DRAKES,
       MS_NO_SPELL,
       MS_NO_SPELL,
       MS_SUMMON_DRAKES },

    {  MST_DRAC_SHIFTER,
       MS_BANISHMENT,
       MS_BLINK_OTHER,
       MS_BLINK,
       MS_NO_SPELL,
       MS_BLINK_OTHER,
       MS_CONTROLLED_BLINK },

    // Curse toe menu should be kept full, because otherwise the toe spends
    // too much time crawling around.
    {  MST_CURSE_TOE,
       MS_SUMMON_UNDEAD,
       MS_SUMMON_MUSHROOMS, // fungal theme
       MS_SUMMON_MUSHROOMS,
       MS_TORMENT,
       MS_SUMMON_UNDEAD,
       MS_TORMENT  },

#endif
