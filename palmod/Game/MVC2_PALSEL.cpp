#include "StdAfx.h"
#include "Game_MVC2_D.h"
#include "mvc2_a_def.h"

int CGame_MVC2_D::GetFirstExtraValueFromExtraPaletteId(int nExtraPaletteIdint, int nStartOfRange, int nPalettePositionIncrements, int nRangeLength)
{
    int nExtraAdjustedStart = nStartOfRange + EXTRA_OMNI;
    return nExtraAdjustedStart + ((nExtraPaletteIdint - nExtraAdjustedStart) % nPalettePositionIncrements);
}

BOOL CGame_MVC2_D::UpdatePalImg(int Node01, int Node02, int Node03, int Node04)
{
    //Reset palette sources
    ClearSrcPal();

    if (Node01 == -1)
    {
        return FALSE;
    }

    //Reset the extra amount
    nExtraAmt = 6; // BUGBUG: This is apparently an artifact of an earlier system.  It can be replaced with setting nAmt 
                   // in calls to CreateExtraPal.

    int nSpecOffs;
    BOOL bLoadDefPal = TRUE;
    bool fImgIsFromNewImgDatRange = false;

    sDescNode* NodeGet = GetMainTree()->GetDescNode(Node01, Node02, Node03, Node04);

    if (NodeGet == NULL)
    {
        return FALSE;
    }

    UINT16 uUnitId = NodeGet->uUnitId;
    UINT16 uPalId = NodeGet->uPalId;

    //Change the image id if we need to
    nTargetImgId = -1;
    nImgUnitId = uUnitId;

    //Get rid of any palettes if there are any
    BasePalGroup.FlushPalAll();

    switch (uUnitId)
    {
    case indexCPS2Sprites_Ryu: // Ryu
    {
        if ((uPalId == 0x2) ||
            (uPalId == 0xA) ||
            (uPalId == 0x12) ||
            (uPalId == 0x1A) ||
            (uPalId == 0x22) ||
            (uPalId == 0x2A))
        {
            // Reuse the Ken Shoryuken sprite
            bLoadDefPal = FALSE;

            nImgUnitId = indexCPS2Sprites_Ken;
            nTargetImgId = 0x02;

            ClearSetImgTicket(CreateImgTicket(nImgUnitId, nTargetImgId));

            CreateDefPal(NodeGet, 0);

            SetSourcePal(0, uUnitId, 0, 6, 8);

            break;
        }

        if ((SpecSel(&nSpecOffs, uPalId, 6, 8)) ||
            (SpecSel(&nSpecOffs, uPalId, 7, 8)))
        {
            // super shadow trail...?
            nTargetImgId = 0;
            break;
        }

        break;
    }
    case indexCPS2Sprites_Zangief: //Zangief
    {
        if (
            // MechaGief
            CreateExtraPal(uUnitId, uPalId, 0x11, 1, 11) ||
            // atomic suplex sprite
            CreateExtraPal(uUnitId, uPalId, 0x17, 3, 12, 0, 3) ||
            // mech atomix suplex sprite
            CreateExtraPal(uUnitId, uPalId, 0x29, 3, 12, 0, 3)
            )
        {
            break;
        }

        break;
    }

    case indexCPS2Sprites_Guile:
    {
        if ((SpecSel(&nSpecOffs, uPalId, 6, 8)) ||
            (SpecSel(&nSpecOffs, uPalId, 7, 8)))
        {
            // super shadow trail...?
            nTargetImgId = 0;
            break;
        }

        break;
    }

    case indexCPS2Sprites_Morrigan: //Morrigan
    {
        if (SpecSel(&nSpecOffs, uPalId, 6, 8))
        {
            // unknown core palette highlight
            nTargetImgId = 0;
            break;
        }

        if (CreateExtraPal(uUnitId, uPalId, 0x3A, 3, 11, 0, 2) // super gun
            || CreateExtraPal(uUnitId, uPalId, 0x4B, 9, 12, 0, 2) // lilith phase-in
            || CreateExtraPal(uUnitId, uPalId, 0x4D, 9, 13, 0, 7) // morrigan phase-in
            || CreateExtraPal(uUnitId, uPalId, 0x81, 1, 14)) // taunt pose
        {
            break;
        }

        break;
    }

    case indexCPS2Sprites_Anakaris:
    {
        if ((SpecSel(&nSpecOffs, uPalId, 6, 8)) ||
            (SpecSel(&nSpecOffs, uPalId, 7, 8)))
        {
            // super shadow trail...?
            nTargetImgId = 0;
            break;
        }

        break;
    }
    case indexCPS2Sprites_Strider:
    {
        // Core sprite join
        if (SpecSel(&nSpecOffs, uPalId, 0, 8))
        {
            bLoadDefPal = FALSE;

            //Create the img ticket
            ClearSetImgTicket(
                CreateImgTicket(uUnitId, 0,
                    CreateImgTicket(uUnitId, 1,
                        CreateImgTicket(uUnitId, 2
                            )))
            );

            //Set each palette
            sDescNode* NodeGet[] = {
                GetMainTree()->GetDescNode(uUnitId, nSpecOffs, 0, -1),
                GetMainTree()->GetDescNode(uUnitId, nSpecOffs, 1, -1),
                GetMainTree()->GetDescNode(uUnitId, nSpecOffs, 2, -1)
            };

            //Set each palette
            CreateDefPal(NodeGet[0], 0);
            CreateDefPal(NodeGet[1], 1);
            CreateDefPal(NodeGet[2], 2);

            SetSourcePal(0, uUnitId, 0, 6, 8);
            SetSourcePal(1, uUnitId, 1, 6, 8);
            SetSourcePal(2, uUnitId, 2, 6, 8);
            break;
        }

        break;
    }
    case indexCPS2Sprites_Cyclops:
    {
        // these are shared, not per character
        if ((uPalId >= (0x19 + EXTRA_OMNI)) &&
            (uPalId <= (0x1D + EXTRA_OMNI)))
        {
            SetExtraImg(11, uUnitId, uPalId);
            break;
        }

        if (CreateExtraPal(uUnitId, uPalId, 0x29, 8, 12, 0, 8) ||
            CreateExtraPal(uUnitId, uPalId, 0x59, 2, 13) ||// super pose
            CreateExtraPal(uUnitId, uPalId, 0x5A, 2, 13) // tinted super pose
            )
        {
            break;
        }


        break;
    }
    case indexCPS2Sprites_Wolverine:
    {
        if (SpecSel(&nSpecOffs, uPalId, 0, 8) || // core sprite
            SpecSel(&nSpecOffs, uPalId, 6, 8))   // unknown highlight

        {
            bLoadDefPal = FALSE;

            //Create the img ticket
            ClearSetImgTicket(
                CreateImgTicket(uUnitId, 0,
                    CreateImgTicket(uUnitId, 1, NULL)
                )
            );

            //Set each palette
            sDescNode* NodeGet[2] = {
                GetMainTree()->GetDescNode(uUnitId, nSpecOffs, uPalId % 8, -1),
                GetMainTree()->GetDescNode(uUnitId, nSpecOffs, (uPalId + 1) % 8, -1)
            };

            //Set each palette
            CreateDefPal(NodeGet[0], 0);
            CreateDefPal(NodeGet[1], 1);

            SetSourcePal(0, uUnitId, uPalId % 8, 6, 8);
            SetSourcePal(1, uUnitId, (uPalId + 1) % 8, 6, 8);

            break;
        }

        if (SpecSel(&nSpecOffs, uPalId, 7, 8))
        {
            // unknown core palette highlight
            nTargetImgId = 1;
            break;
        }

        nExtraAmt = 1;
        CreateExtraPal(uUnitId, uPalId, 0x11, 1, 11);

        break;
    }

    case indexCPS2Sprites_Iceman:
    {
        if (SpecSel(&nSpecOffs, uPalId, 1, 8) || SpecSel(&nSpecOffs, uPalId, 2, 8))
        {
            SetExtraImg(0, uUnitId, uPalId);
        }

        nExtraAmt = 4;
        if (CreateExtraPal(uUnitId, uPalId, 0x09, 1, 11))
        {
            break;
        }

        nExtraAmt = 0x4A - 0x21 + 1;
        CreateExtraPal(uUnitId, uPalId, 0x21, 1, 0);

        break;
    }
    case indexCPS2Sprites_Rogue:
    {
        if (SpecSel(&nSpecOffs, uPalId, 6, 8))
        {
            // unknown core palette highlight
            nTargetImgId = 0;
            break;
        }

        if (CreateExtraPal(uUnitId, uPalId, 0x1D, 1, 11)) // win pose
        {
            break;
        }

        if (CreateExtraPal(uUnitId, uPalId, 0x11, 2, 4, 0, 2)) // Extra dash shadows
        {
            break;
        }
        break;
    }

    case indexCPS2Sprites_CapAm: //Captain America
    {
        // Handle his shield
        if (SpecSel(&nSpecOffs, uPalId, 0, 8))
        {
            bLoadDefPal = FALSE;

            //Create the img ticket
            ClearSetImgTicket(
                CreateImgTicket(uUnitId, 0,
                    CreateImgTicket(uUnitId, 1, NULL, 0, 0)
                )
            );

            //Set each palette
            sDescNode* NodeGet[2] = {
                GetMainTree()->GetDescNode(uUnitId, nSpecOffs, 0, -1),
                GetMainTree()->GetDescNode(uUnitId, nSpecOffs, 1, -1)
            };

            //Set each palette
            CreateDefPal(NodeGet[0], 0);
            CreateDefPal(NodeGet[1], 1);

            SetSourcePal(0, uUnitId, 0, 6, 8);
            SetSourcePal(1, uUnitId, 1, 6, 8);
        }
        break;
    }

    case indexCPS2Sprites_Spidey: //Spider-Man
    {
        if (SpecSel(&nSpecOffs, uPalId, 6, 8))
        {
            // unknown core palette highlight
            nTargetImgId = 0;
            break;
        }

        if (
               CreateExtraPal(uUnitId, uPalId, 0x09, 0x10, 11, 0, 8)
            || CreateExtraPal(uUnitId, uPalId, 0x11, 0x10, 12)
            || CreateExtraPal(uUnitId, uPalId, 0x12, 0x10, 13)
            || CreateExtraPal(uUnitId, uPalId, 0x13, 0x10, 14)
            || CreateExtraPal(uUnitId, uPalId, 0x14, 0x10, 15)
            )
        {
            break;
        }

        break;
    }

    case indexCPS2Sprites_Hulk:
    {
        if (SpecSel(&nSpecOffs, uPalId, 6, 8))
        {
            // unknown core palette highlight
            nTargetImgId = 0;
            break;
        }

        // Gamma crush
        nExtraAmt = 1;
        CreateExtraPal(uUnitId, uPalId, 0x0A, 1, 11);
        break;
    }

    case indexCPS2Sprites_DrDoom: //Dr Doom
    {
        // Turning off throne/doom joint display:
            // If we show it backwards the lead palette is throne 0xA, which means you can't paste ACTs into body 0x9
            // If we show it forwards I'm currently unclear on how to keep the sprites in reverse order while keeping the palettes in forward order.
        /* if ((uPalId == (0x09 + EXTRA_OMNI)) || // throne
            (uPalId == (0x25 + EXTRA_OMNI)) ||
            (uPalId == (0x41 + EXTRA_OMNI)) ||
            (uPalId == (0x5D + EXTRA_OMNI)) ||
            (uPalId == (0x79 + EXTRA_OMNI)) ||
            (uPalId == (0x95 + EXTRA_OMNI)))
        {
            bLoadDefPal = FALSE;

            //Create the img ticket
            ClearSetImgTicket(
                CreateImgTicket(uUnitId, 0xC,
                    CreateImgTicket(uUnitId, 0xB, NULL, 13, 16)
                )
            );

            sDescNode* DoomPoseNode[2] = {
                GetMainTree()->GetDescNode(Node01, Node02, Node03 + 1, -1),
                GetMainTree()->GetDescNode(Node01, Node02, Node03, -1)

            };

            //Set each palette
            CreateDefPal(DoomPoseNode[0], 0);
            CreateDefPal(DoomPoseNode[1], 1);

            SetSourcePal(0, uUnitId, 0xA + EXTRA_OMNI, 6, 0x1C);
            SetSourcePal(1, uUnitId, 0x9 + EXTRA_OMNI, 6, 0x1C);
        }
        else */ if (
               CreateExtraPal(uUnitId, uPalId, 0x09, 0x1C, 11)
            || CreateExtraPal(uUnitId, uPalId, 0x0A, 0x1C, 12)
            || CreateExtraPal(uUnitId, uPalId, 0x0B, 0x1C, 13)
            || CreateExtraPal(uUnitId, uPalId, 0x0C, 0x1C, 14)
            )
        {
            break;
        }

        break;
    }

    case indexCPS2Sprites_Tron:
    {
        if (SpecSel(&nSpecOffs, uPalId, 0, 8))
        {
            bLoadDefPal = FALSE;

            //Create the img ticket
            ClearSetImgTicket(
                CreateImgTicket(indexCPS2Sprites_Tron, 0,
                    CreateImgTicket(indexCPS2Sprites_Tron, 1,
                        CreateImgTicket(indexCPS2Sprites_Tron, 3)
                    )
                )
            );

            sDescNode* NodeGet[] = {
                GetMainTree()->GetDescNode(uUnitId, nSpecOffs, 0, -1),
                GetMainTree()->GetDescNode(uUnitId, nSpecOffs, 1, -1),
                GetMainTree()->GetDescNode(uUnitId, nSpecOffs, 3, -1)
            };

            //Set each palette
            CreateDefPal(NodeGet[0], 0);
            CreateDefPal(NodeGet[1], 1);
            CreateDefPal(NodeGet[2], 2);

            SetSourcePal(0, uUnitId, 0, 6, 8);
            SetSourcePal(1, uUnitId, 1, 6, 8);
            SetSourcePal(2, uUnitId, 3, 6, 8);
            break;
        }

        nExtraAmt = 1;

        if (
               CreateExtraPal(uUnitId, uPalId, 0x11, 1, 11) // food cart
            || CreateExtraPal(uUnitId, uPalId, 0x13, 1, 12) // lunch!
            || CreateExtraPal(uUnitId, uPalId, 0x14, 1, 13) // rings
            || CreateExtraPal(uUnitId, uPalId, 0x15, 1, 14) // drill jet flame
            )
        {
            break;
        }

        break;
    }

    case indexCPS2Sprites_Jill: //Jill Valentine
    {
        nExtraAmt = 1;

        if (SpecSel(&nSpecOffs, uPalId, 0, 8) && (nSpecOffs < 6)) // Jill and weapons
        {
            bLoadDefPal = FALSE;

            //Create the img ticket
            ClearSetImgTicket(
                CreateImgTicket(indexCPS2Sprites_Jill, 0,
                    CreateImgTicket(indexCPS2Sprites_Jill, 1, NULL, 0, 0)
                )
            );

            sDescNode* NodeGet[2] = {
                GetMainTree()->GetDescNode(uUnitId, nSpecOffs, 0, -1),
                GetMainTree()->GetDescNode(uUnitId, nSpecOffs, 1, -1)
            };

            //Set each palette
            CreateDefPal(NodeGet[0], 0);
            CreateDefPal(NodeGet[1], 1);

            SetSourcePal(0, uUnitId, 0, 6, 8);
            SetSourcePal(1, uUnitId, 1, 6, 8);
            break;
        }
        else  if (
               CreateExtraPal(uUnitId, uPalId, 0x09, 1, 11)  // ? not present
            || CreateExtraPal(uUnitId, uPalId, 0x0A, 1, 12)  // healing
            || CreateExtraPal(uUnitId, uPalId, 0x0B, 1, 2)   // flame zombie
            )
        {
            break;
        }

        break;
    }

    case indexCPS2Sprites_Hayato:
    {
        if (SpecSel(&nSpecOffs, uPalId, 0, 8) && (nSpecOffs < 6)) // Hayato and laser sword
        {
            bLoadDefPal = FALSE;

            //Create the img ticket
            ClearSetImgTicket(
                CreateImgTicket(indexCPS2Sprites_Hayato, 0,
                    CreateImgTicket(indexCPS2Sprites_Hayato, 1, NULL, 0, 0)
                )
            );

            sDescNode* NodeGet[2] = {
                GetMainTree()->GetDescNode(uUnitId, nSpecOffs, 0, -1),
                GetMainTree()->GetDescNode(uUnitId, nSpecOffs, 1, -1)
            };

            //Set each palette
            CreateDefPal(NodeGet[0], 0);
            CreateDefPal(NodeGet[1], 1);

            SetSourcePal(0, uUnitId, 0, 6, 8);
            SetSourcePal(1, uUnitId, 1, 6, 8);
            break;
        }

        if ((SpecSel(&nSpecOffs, uPalId, 6, 8)) ||
            (SpecSel(&nSpecOffs, uPalId, 7, 8)))
        {
            // super shadow trail...?
            nTargetImgId = 0;
            break;
        }

        break;
    }

    case indexCPS2Sprites_Ruby: //Ruby Heart
    {
        nExtraAmt = 1;

        if (
               CreateExtraPal(uUnitId, uPalId, 0x0B, 1, 11)
            || CreateExtraPal(uUnitId, uPalId, 0x0C, 1, 12)
            || CreateExtraPal(uUnitId, uPalId, 0x0D, 1, 13)
            || CreateExtraPal(uUnitId, uPalId, 0x0E, 1, 14)
            || CreateExtraPal(uUnitId, uPalId, 0x10, 1, 15) // fireball super of hers
            )
        {
            break;
        }

        break;
    }

    case indexCPS2Sprites_SonSon:
    {
        // Core sprite join
        if (SpecSel(&nSpecOffs, uPalId, 0, 8))
        {
            bLoadDefPal = FALSE;

            //Create the img ticket
            ClearSetImgTicket(
                CreateImgTicket(uUnitId, 0,
                    CreateImgTicket(uUnitId, 1,
                        CreateImgTicket(uUnitId, 2,
                            CreateImgTicket(uUnitId, 3,
                                CreateImgTicket(uUnitId, 4,
                                    CreateImgTicket(uUnitId, 5,
                                        CreateImgTicket(uUnitId, 6
                )))))))
            );

            //Set each palette
            sDescNode* NodeGet[7] = {
                GetMainTree()->GetDescNode(uUnitId, nSpecOffs, 0, -1),
                GetMainTree()->GetDescNode(uUnitId, nSpecOffs, 1, -1),
                GetMainTree()->GetDescNode(uUnitId, nSpecOffs, 2, -1),
                GetMainTree()->GetDescNode(uUnitId, nSpecOffs, 3, -1),
                GetMainTree()->GetDescNode(uUnitId, nSpecOffs, 4, -1),
                GetMainTree()->GetDescNode(uUnitId, nSpecOffs, 5, -1),
                GetMainTree()->GetDescNode(uUnitId, nSpecOffs, 6, -1)
            };

            //Set each palette
            CreateDefPal(NodeGet[0], 0);
            CreateDefPal(NodeGet[1], 1);
            CreateDefPal(NodeGet[2], 2);
            CreateDefPal(NodeGet[3], 3);
            CreateDefPal(NodeGet[4], 4);
            CreateDefPal(NodeGet[5], 5);
            CreateDefPal(NodeGet[6], 6);

            SetSourcePal(0, uUnitId, 0, 6, 8);
            SetSourcePal(1, uUnitId, 1, 6, 8);
            SetSourcePal(2, uUnitId, 2, 6, 8);
            SetSourcePal(3, uUnitId, 3, 6, 8);
            SetSourcePal(4, uUnitId, 4, 6, 8);
            SetSourcePal(5, uUnitId, 5, 6, 8);
            SetSourcePal(6, uUnitId, 6, 6, 8);
            break;
        }

        nExtraAmt = 1;
        if (CreateExtraPal(uUnitId, uPalId, 0x0B, 1, 0x09) || // strawberry
            CreateExtraPal(uUnitId, uPalId, 0x0C, 1, 0x08) ||  // peach
            CreateExtraPal(uUnitId, uPalId, 0x16, 1, 0x0c)) // giant monkey lasers
        {
            break;
        }

        nExtraAmt = 6;
        if (CreateExtraPal(uUnitId, uPalId, 0x0F, 1, 11) || // giant monkey
            CreateExtraPal(uUnitId, uPalId, 0x17, 1, 11) || // giant monkey when hit
            CreateExtraPal(uUnitId, uPalId, 0x1D, 2, 11, 0, 2)) // giant monkey laser reflect
        {
            break;
        }
        break;
    }

    case indexCPS2Sprites_Amingo:
    {
        nExtraAmt = 1;

        if (CreateExtraPal(uUnitId, uPalId, 0x09, 1, 11) ||
            CreateExtraPal(uUnitId, uPalId, 0x0B, 1, 11))
        {
            break;
        }

        break;
    }

    case indexCPS2Sprites_Cable:
    {
        if (SpecSel(&nSpecOffs, uPalId, 6, 8))
        {
            // unknown core palette highlight
            nTargetImgId = 0;
            break;
        }

        break;
    }

    case indexCPS2Sprites_Abyss1:
    {
        // Handle his super armor frame
        if (SpecSel(&nSpecOffs, uPalId, 4, 8))
        {
            nTargetImgId = 0;
            break;
        }
        break;
    }
    
    case indexCPS2Sprites_Abyss2:
    {
        // Core sprite join
        if (SpecSel(&nSpecOffs, uPalId, 0, 8))
        {
            bLoadDefPal = FALSE;

            //Create the img ticket
            ClearSetImgTicket(
                CreateImgTicket(uUnitId, 0,
                                CreateImgTicket(uUnitId, 4,
                                    CreateImgTicket(uUnitId, 5,
                                        CreateImgTicket(uUnitId, 6
                                        ))))
            );

            //Set each palette
            sDescNode* NodeGet[7] = {
                GetMainTree()->GetDescNode(uUnitId, nSpecOffs, 0, -1),
                GetMainTree()->GetDescNode(uUnitId, nSpecOffs, 4, -1),
                GetMainTree()->GetDescNode(uUnitId, nSpecOffs, 5, -1),
                GetMainTree()->GetDescNode(uUnitId, nSpecOffs, 6, -1)
            };

            //Set each palette
            CreateDefPal(NodeGet[0], 0);
            CreateDefPal(NodeGet[1], 1);
            CreateDefPal(NodeGet[2], 2);
            CreateDefPal(NodeGet[3], 3);

            SetSourcePal(0, uUnitId, 0, 6, 8);
            SetSourcePal(1, uUnitId, 4, 6, 8);
            SetSourcePal(2, uUnitId, 5, 6, 8);
            SetSourcePal(3, uUnitId, 6, 6, 8);
            break;
        }

        break;
    }

    case indexCPS2Sprites_ChunLi: // Chun-Li
    {
        // Handle her legs
        if (SpecSel(&nSpecOffs, uPalId, 0, 8))
        {
            bLoadDefPal = FALSE;

            //Create the img ticket
            ClearSetImgTicket(
                CreateImgTicket(uUnitId, 0,
                    CreateImgTicket(uUnitId, 1, NULL, 0, 0)
                )
            );

            //Set each palette
            sDescNode* NodeGet[2] = {
                GetMainTree()->GetDescNode(uUnitId, nSpecOffs, 0, -1),
                GetMainTree()->GetDescNode(uUnitId, nSpecOffs, 1, -1)
            };

            //Set each palette
            CreateDefPal(NodeGet[0], 0);
            CreateDefPal(NodeGet[1], 1);

            SetSourcePal(0, uUnitId, 0, 6, 8);
            SetSourcePal(1, uUnitId, 1, 6, 8);
        }
        break;
    }
    case indexCPS2Sprites_Megaman:
    {
        // Megaman has an extra range per button of 0x57 palettes.
        if (CreateExtraPal(uUnitId, uPalId, 0x09, 0x57, 0x26) || // hair
            CreateExtraPal(uUnitId, uPalId, 0x0A, 0x57, 0x0B) || // teleport intro
            CreateExtraPal(uUnitId, uPalId, 0x0B, 0x57, 0x00, 0, 9) || // Megaman intro
            CreateExtraPal(uUnitId, uPalId, 0x2F, 0x57, 0x00, 0, 9) || // Charging buster
            CreateExtraPal(uUnitId, uPalId, 0x41, 0x57, 0x0D) || // teleport intro
            CreateExtraPal(uUnitId, uPalId, 0x42, 0x57, 0x25) || // Dr Light
            CreateExtraPal(uUnitId, uPalId, 0x14, 0x57, 0x01, 0, 9) || // Rush
            CreateExtraPal(uUnitId, uPalId, 0x1D, 0x57, 0x02, 0, 9) || // Beat
            CreateExtraPal(uUnitId, uPalId, 0x26, 0x57, 0x24, 0, 9) //|| // Beat Plane
            //CreateExtraPal(uUnitId, uPalId, 0x55, 0x57, 0x29) // HMM Missiles
            )
        {
            fImgIsFromNewImgDatRange = true;
            break;
        }
        else if ((uPalId == (0x5E + EXTRA_OMNI)) || // Roll: cross character load
                 (uPalId == (0xB5 + EXTRA_OMNI)) ||
                 (uPalId == (0x10C + EXTRA_OMNI)) ||
                 (uPalId == (0x163 + EXTRA_OMNI)) ||
                 (uPalId == (0x1BA + EXTRA_OMNI)) ||
                 (uPalId == (0x211 + EXTRA_OMNI)))
        {
            bLoadDefPal = FALSE;

            nImgUnitId = indexCPS2Sprites_Roll;
            nTargetImgId = 0;

            ClearSetImgTicket(CreateImgTicket(nImgUnitId, 0));

            CreateDefPal(NodeGet, 0);

            SetSourcePal(0, 0x1C, 0x5E + EXTRA_OMNI, 6, 0x57);
            break;
        }
        else if (((uPalId >= (0x38 + EXTRA_OMNI)) && (uPalId <= (0x3F + EXTRA_OMNI))) || // Rush Drill: joined
                 ((uPalId >= (0x8F + EXTRA_OMNI)) && (uPalId <= (0x96 + EXTRA_OMNI))) ||
                 ((uPalId >= (0xE6 + EXTRA_OMNI)) && (uPalId <= (0xEC + EXTRA_OMNI))) ||
                 ((uPalId >= (0x13D + EXTRA_OMNI)) && (uPalId <= (0x144 + EXTRA_OMNI))) ||
                 ((uPalId >= (0x194 + EXTRA_OMNI)) && (uPalId <= (0x19B + EXTRA_OMNI))) ||
                 ((uPalId >= (0x1EB + EXTRA_OMNI)) && (uPalId <= (0x1F2 + EXTRA_OMNI))))
        {
            bLoadDefPal = FALSE;

            int nXOffs = 0;
            int nYOffs = 0;
            int nPeerPaletteDistance = 0x1E;

            //Create the img ticket
            ClearSetImgTicket(
                CreateImgTicket(0x1D, 0xB,
                    CreateImgTicket(0x1D, 0x0C, nullptr, nXOffs, nYOffs)
                )
            );

            //Set each palette
            sDescNode* NodeRushDrill[2] = {
                GetMainTree()->GetDescNode(Node01, Node02, Node03, -1),
                GetMainTree()->GetDescNode(Node01, Node02, Node03 + nPeerPaletteDistance, -1)
            };

            //Set each palette
            CreateDefPal(NodeRushDrill[0], 0);
            CreateDefPal(NodeRushDrill[1], 1);

            int nFirstExtraPalette = GetFirstExtraValueFromExtraPaletteId(NodeGet->uPalId, 0x38, 0x57, 0x08);
            SetSourcePal(0, NodeGet->uUnitId, nFirstExtraPalette, 6, 0x57);
            SetSourcePal(1, NodeGet->uUnitId, nFirstExtraPalette + nPeerPaletteDistance, 6, 0x57);

            break;
        }
        else if ((uPalId == (0x40 + EXTRA_OMNI)) || // Rush Drill: all white sprite.  No matching metal.
                 (uPalId == (0x97 + EXTRA_OMNI)) ||
                 (uPalId == (0xED + EXTRA_OMNI)) ||
                 (uPalId == (0x145 + EXTRA_OMNI)) ||
                 (uPalId == (0x19C + EXTRA_OMNI)) ||
                 (uPalId == (0x1F3 + EXTRA_OMNI)))
        {
            bLoadDefPal = FALSE;

            nImgUnitId = 0x1D;
            nTargetImgId = 0x0B; // rush drill

            ClearSetImgTicket(CreateImgTicket(nImgUnitId, nTargetImgId));

            CreateDefPal(NodeGet, 0);

            // Boring white sprite
            SetSourcePal(0, uUnitId, 0x40 + EXTRA_OMNI, 6, 0x57);
            break;
        }
        else if (((uPalId >= (0x56 + EXTRA_OMNI)) && (uPalId <= (0x5D + EXTRA_OMNI))) || // Rush Drill metal bits
                 ((uPalId >= (0xAD + EXTRA_OMNI)) && (uPalId <= (0xB4 + EXTRA_OMNI))) ||
                 ((uPalId >= (0x104 + EXTRA_OMNI)) && (uPalId <= (0x10B + EXTRA_OMNI))) ||
                 ((uPalId >= (0x15B + EXTRA_OMNI)) && (uPalId <= (0x162 + EXTRA_OMNI))) ||
                 ((uPalId >= (0x1B2 + EXTRA_OMNI)) && (uPalId <= (0x1B9 + EXTRA_OMNI))) ||
                 ((uPalId >= (0x209 + EXTRA_OMNI)) && (uPalId <= (0x210 + EXTRA_OMNI))))
        {
// If you load an ACT file when using reversed palette display the ACT is applied to the visually first code-wise second palette
// Since we don't want that, I'm just sticking with forward-only joins for now.
#ifdef REVERSE_PALETTES_SUPPORT_ACT_PASTING
            // BUGBUG: Going from 0x55 to 0x56 (and so forth for all buttons) leaves sprites drawn incorrectly.
            bLoadDefPal = FALSE;

            int nXOffs = 0;
            int nYOffs = 0;
            int nPeerPaletteDistance = -0x1E;

            //Create the img ticket
            ClearSetImgTicket(
                CreateImgTicket(0x1D, 0xB,
                    CreateImgTicket(0x1D, 0x0C, nullptr, nXOffs, nYOffs)
                )
            );

            //Set each palette
            sDescNode* NodeRushDrill[2] = {
                GetMainTree()->GetDescNode(Node01, Node02, Node03 + nPeerPaletteDistance, -1),
                GetMainTree()->GetDescNode(Node01, Node02, Node03, -1)
            };

            //Set each palette
            CreateDefPal(NodeRushDrill[0], 0);
            CreateDefPal(NodeRushDrill[1], 1);

            int nFirstExtraPalette = GetFirstExtraValueFromExtraPaletteId(NodeGet->uPalId, 0x56, 0x57, 0x08);
            SetSourcePal(0, NodeGet->uUnitId, nFirstExtraPalette + nPeerPaletteDistance, 6, 0x57);
            SetSourcePal(1, NodeGet->uUnitId, nFirstExtraPalette, 6, 0x57);
#else
            bLoadDefPal = FALSE;

            nImgUnitId = 0x1D; // Pull in Roll's sprite here.
            nTargetImgId = 0x0C; // rush drill

            ClearSetImgTicket(CreateImgTicket(nImgUnitId, nTargetImgId));

            CreateDefPal(NodeGet, 0);

            SetSourcePal(0, uUnitId, 0x40, 6, 0x57); 
#endif
            break;
        }
        else if (((uPalId >= (0x43 + EXTRA_OMNI)) && (uPalId <= (0x4B + EXTRA_OMNI))) || // Hyper Megaman: Armor: joined
                 ((uPalId >= (0x9A + EXTRA_OMNI)) && (uPalId <= (0xA2 + EXTRA_OMNI))) ||
                 ((uPalId >= (0xF1 + EXTRA_OMNI)) && (uPalId <= (0xF9 + EXTRA_OMNI))) ||
                 ((uPalId >= (0x148 + EXTRA_OMNI)) && (uPalId <= (0x150 + EXTRA_OMNI))) ||
                 ((uPalId >= (0x19F + EXTRA_OMNI)) && (uPalId <= (0x1A7 + EXTRA_OMNI))) ||
                 ((uPalId >= (0x1F6 + EXTRA_OMNI)) && (uPalId <= (0x1FE + EXTRA_OMNI))))
        {
            bLoadDefPal = FALSE;

            int nXOffs = 31;
            int nYOffs = 12;
            int nPeerPaletteDistance = 9;

            //Create the img ticket
            ClearSetImgTicket(
                CreateImgTicket(uUnitId, 0x27,
                    CreateImgTicket(uUnitId, 0x28, nullptr, nXOffs, nYOffs)
                )
            );

            //Set each palette
            sDescNode* NodeHMMM[2] = {
                GetMainTree()->GetDescNode(Node01, Node02, Node03, -1),
                GetMainTree()->GetDescNode(Node01, Node02, Node03 + nPeerPaletteDistance, -1)
            };

            //Set each palette
            CreateDefPal(NodeHMMM[0], 0);
            CreateDefPal(NodeHMMM[1], 1);

            int nFirstExtraPalette = GetFirstExtraValueFromExtraPaletteId(NodeGet->uPalId, 0x43, 0x57, 0x09); // HMM has 9 palettes
            SetSourcePal(0, NodeGet->uUnitId, nFirstExtraPalette, 6, 0x57);
            SetSourcePal(1, NodeGet->uUnitId, nFirstExtraPalette + nPeerPaletteDistance, 6, 0x57);

            break;
        }
        else if (((uPalId >= (0x4C + EXTRA_OMNI)) && (uPalId <= (0x54 + EXTRA_OMNI))) || // Hyper Megaman: core: flip the HMM logic.
                 ((uPalId >= (0xA3 + EXTRA_OMNI)) && (uPalId <= (0xAB + EXTRA_OMNI))) ||
                 ((uPalId >= (0xFA + EXTRA_OMNI)) && (uPalId <= (0x102 + EXTRA_OMNI))) ||
                 ((uPalId >= (0x151 + EXTRA_OMNI)) && (uPalId <= (0x159 + EXTRA_OMNI))) ||
                 ((uPalId >= (0x1A8 + EXTRA_OMNI)) && (uPalId <= (0x1B0 + EXTRA_OMNI))) ||
                 ((uPalId >= (0x1FF + EXTRA_OMNI)) && (uPalId <= (0x207 + EXTRA_OMNI))))
        {
#ifdef REVERSE_PALETTES_SUPPORT_ACT_PASTING
            bLoadDefPal = FALSE;

            int nXOffs = -31;
            int nYOffs = -12;
            int nPeerPaletteDistance = -9;

            //Create the img ticket
            ClearSetImgTicket(
                CreateImgTicket(uUnitId, 0x28,
                    CreateImgTicket(uUnitId, 0x27, nullptr, nXOffs, nYOffs)
                )
            );

            //Set each palette
            sDescNode* NodeHMMM[2] = {
                GetMainTree()->GetDescNode(Node01, Node02, Node03, -1),
                GetMainTree()->GetDescNode(Node01, Node02, Node03 + nPeerPaletteDistance, -1)
            };

            //Set each palette
            CreateDefPal(NodeHMMM[0], 0);
            CreateDefPal(NodeHMMM[1], 1);

            int nFirstExtraPalette = GetFirstExtraValueFromExtraPaletteId(NodeGet->uPalId, 0x4C, 0x57, 0x09); // HMM has 9 palettes
            SetSourcePal(0, NodeGet->uUnitId, nFirstExtraPalette, 6, 0x57);
            SetSourcePal(1, NodeGet->uUnitId, nFirstExtraPalette + nPeerPaletteDistance, 6, 0x57);
#else
            nTargetImgId = 0x28;
            fImgIsFromNewImgDatRange = true;
#endif
            break;
        }
        else if ((uPalId == (0x55 + EXTRA_OMNI)) || // HMM missiles.  The palette display is reverse order which is OK for this one-off joined display.
                 (uPalId == (0xAC + EXTRA_OMNI)) ||
                 (uPalId == (0x103 + EXTRA_OMNI)) ||
                 (uPalId == (0x15A + EXTRA_OMNI)) ||
                 (uPalId == (0x1B1 + EXTRA_OMNI)) ||
                 (uPalId == (0x208 + EXTRA_OMNI)))
        {
            // This is an interesting triple sprite join.  Should be logical enough.  If you want the simple approach, use:
                //        CreateExtraPal(uUnitId, uPalId, 0x55, 0x57, 0x29)
            // If you want to just show the missiles + core body, use:
#ifdef JUST_THE_BODY_NO_ARMOR_PLS
            bLoadDefPal = FALSE;

            int nXOffs = 0;
            int nYOffs = -10;
            int nPeerPaletteDistance = -7;

            //Create the img ticket
            ClearSetImgTicket(
                CreateImgTicket(uUnitId, 0x28,
                    CreateImgTicket(uUnitId, 0x29, nullptr, nXOffs, nYOffs)
                )
            );

            //Set each palette
            sDescNode* NodeHMMM[2] = {
                GetMainTree()->GetDescNode(Node01, Node02, Node03 + nPeerPaletteDistance, -1),
                GetMainTree()->GetDescNode(Node01, Node02, Node03, -1)
            };

            //Set each palette
            CreateDefPal(NodeHMMM[0], 0);
            CreateDefPal(NodeHMMM[1], 1);

            int nFirstExtraPalette = GetFirstExtraValueFromExtraPaletteId(NodeGet->uPalId, 0x55, 0x57, 0x1); // HMM missiles have 1 palette
            SetSourcePal(0, NodeGet->uUnitId, nFirstExtraPalette, 6, 0x57);
            SetSourcePal(1, NodeGet->uUnitId, nFirstExtraPalette + nPeerPaletteDistance, 6, 0x57);
#else
            bLoadDefPal = FALSE;

            int nXOffs = 0 + 31;
            int nYOffs = -10 + 12;
            int nDistanceToBody = -7;
            int nDistanceToArmor = -16;

            //Create the img ticket
            ClearSetImgTicket(
                CreateImgTicket(uUnitId, 0x27,
                    CreateImgTicket(uUnitId, 0x28, 
                        CreateImgTicket(uUnitId, 0x29, nullptr, nXOffs, nYOffs),
                            31, 12)
                )
            );

            //Set each palette
            sDescNode* NodeHMMM[3] = {
                GetMainTree()->GetDescNode(Node01, Node02, Node03 + nDistanceToArmor, -1),
                GetMainTree()->GetDescNode(Node01, Node02, Node03 + nDistanceToBody, -1),
                GetMainTree()->GetDescNode(Node01, Node02, Node03, -1)
            };

            //Set each palette
            CreateDefPal(NodeHMMM[0], 0);
            CreateDefPal(NodeHMMM[1], 1);
            CreateDefPal(NodeHMMM[2], 2);

            int nFirstExtraPalette = GetFirstExtraValueFromExtraPaletteId(NodeGet->uPalId, 0x55, 0x57, 0x1); // HMM missiles have 1 palette
            SetSourcePal(0, NodeGet->uUnitId, nFirstExtraPalette + nDistanceToArmor, 6, 0x57);
            SetSourcePal(1, NodeGet->uUnitId, nFirstExtraPalette + nDistanceToBody, 6, 0x57);
            SetSourcePal(2, NodeGet->uUnitId, nFirstExtraPalette, 6, 0x57);
#endif

            break;
        }

        break;
    }

    case indexCPS2Sprites_Roll: // Roll
    {
        // Handle the cross-unit Megaman sprites first...
        if (CreateExtraPal(indexCPS2Sprites_Megaman, uPalId, 0x09, 0x57, 0x26) || // hair
            CreateExtraPal(indexCPS2Sprites_Megaman, uPalId, 0x0A, 0x57, 0x0B) || // teleport intro
            CreateExtraPal(indexCPS2Sprites_Megaman, uPalId, 0x14, 0x57, 0x01, 0, 9) || // Rush
            CreateExtraPal(indexCPS2Sprites_Megaman, uPalId, 0x1D, 0x57, 0x02, 0, 9) || // Beat
            CreateExtraPal(indexCPS2Sprites_Megaman, uPalId, 0x26, 0x57, 0x24, 0, 9) || // Beat Plane
            CreateExtraPal(indexCPS2Sprites_Megaman, uPalId, 0x42, 0x57, 0x25) || // Dr Light
            CreateExtraPal(indexCPS2Sprites_Megaman, uPalId, 0x5E, 0x57, 0x00) // Megaman
            //CreateExtraPal(uUnitId, uPalId, 0x55, 0x57, 0x29) // Hyper Roll Missiles: no sprite available
            )
        {
            nImgUnitId = 0x1C;
            fImgIsFromNewImgDatRange = true;
            break;
        }
        else if (CreateExtraPal(uUnitId, uPalId, 0x0B, 0x57, 0x00, 0, 9) || // Roll intro
                 CreateExtraPal(uUnitId, uPalId, 0x2F, 0x57, 0x00, 0, 9) || // Roll Charging buster
                 CreateExtraPal(uUnitId, uPalId, 0x4C, 0x57, 0x00, 0, 9)) //  Hyper Roll ?
        {
            break;
        }        
        else if ((uPalId == 0x1) || // Button Extra 01: Reuse Megaman's Rush sprite
                 (uPalId == 0x9) ||
                 (uPalId == 0x11) ||
                 (uPalId == 0x19) ||
                 (uPalId == 0x21) ||
                 (uPalId == 0x29))
        {
            bLoadDefPal = FALSE;

            nImgUnitId = 0x1C;
            nTargetImgId = 1; // Rush

            ClearSetImgTicket(CreateImgTicket(nImgUnitId, nTargetImgId));

            CreateDefPal(NodeGet, 0);

            SetSourcePal(0, uUnitId, GetBasicOffset(uPalId), 6, 8);
            break;
        }
        else if ((uPalId == 0x2) || // Pull in Megaman's Beat sprite
                 (uPalId == 0xA) ||
                 (uPalId == 0x12) ||
                 (uPalId == 0x1A) ||
                 (uPalId == 0x22) ||
                 (uPalId == 0x2A))
        {
            bLoadDefPal = FALSE;

            nImgUnitId = indexCPS2Sprites_Megaman;
            nTargetImgId = 0x2; // Beat!

            ClearSetImgTicket(CreateImgTicket(nImgUnitId, nTargetImgId));

            CreateDefPal(NodeGet, 0);

            SetSourcePal(0, uUnitId, GetBasicOffset(uPalId), 6, 8);
            break;
        }
        else if (((uPalId >= (0x38 + EXTRA_OMNI)) && (uPalId <= (0x3F + EXTRA_OMNI))) || // Rush Drill
                 ((uPalId >= (0x8F + EXTRA_OMNI)) && (uPalId <= (0x96 + EXTRA_OMNI))) ||
                 ((uPalId >= (0xE6 + EXTRA_OMNI)) && (uPalId <= (0xEC + EXTRA_OMNI))) ||
                 ((uPalId >= (0x13D + EXTRA_OMNI)) && (uPalId <= (0x144 + EXTRA_OMNI))) ||
                 ((uPalId >= (0x194 + EXTRA_OMNI)) && (uPalId <= (0x19B + EXTRA_OMNI))) ||
                 ((uPalId >= (0x1EB + EXTRA_OMNI)) && (uPalId <= (0x1F2 + EXTRA_OMNI))))
        {
            bLoadDefPal = FALSE;

            int nXOffs = 0;
            int nYOffs = 0;
            int nPeerPaletteDistance = 0x1E;

            //Create the img ticket
            ClearSetImgTicket(
                CreateImgTicket(uUnitId, 0xB,
                    CreateImgTicket(uUnitId, 0x0C, nullptr, nXOffs, nYOffs)
                )
            );

            //Set each palette
            sDescNode* NodeRushDrill[2] = {
                GetMainTree()->GetDescNode(Node01, Node02, Node03, -1),
                GetMainTree()->GetDescNode(Node01, Node02, Node03 + nPeerPaletteDistance, -1)
            };

            //Set each palette
            CreateDefPal(NodeRushDrill[0], 0);
            CreateDefPal(NodeRushDrill[1], 1);

            int nFirstExtraPalette = GetFirstExtraValueFromExtraPaletteId(NodeGet->uPalId, 0x38, 0x57, 0x08);
            SetSourcePal(0, NodeGet->uUnitId, nFirstExtraPalette, 6, 0x57);
            SetSourcePal(1, NodeGet->uUnitId, nFirstExtraPalette + nPeerPaletteDistance, 6, 0x57);

            break;
        }
        else if (((uPalId == (0x40 + EXTRA_OMNI))) || // Rush Drill: all white sprite.  No matching metal.
                 ((uPalId == (0x97 + EXTRA_OMNI))) ||
                 ((uPalId == (0xED + EXTRA_OMNI))) ||
                 ((uPalId == (0x145 + EXTRA_OMNI))) ||
                 ((uPalId == (0x19C + EXTRA_OMNI))) ||
                 ((uPalId == (0x1F3 + EXTRA_OMNI))))
        {
            bLoadDefPal = FALSE;

            nTargetImgId = 0x0B; // rush drill

            ClearSetImgTicket(CreateImgTicket(nImgUnitId, nTargetImgId));

            CreateDefPal(NodeGet, 0);

            SetSourcePal(0, uUnitId, 0x40, 6, 0x57);
            break;
        }
        else if (((uPalId >= (0x56 + EXTRA_OMNI)) && (uPalId <= (0x5D + EXTRA_OMNI))) || // Rush Drill metal bits
                 ((uPalId >= (0xAD + EXTRA_OMNI)) && (uPalId <= (0xB4 + EXTRA_OMNI))) ||
                 ((uPalId >= (0x104 + EXTRA_OMNI)) && (uPalId <= (0x10B + EXTRA_OMNI))) ||
                 ((uPalId >= (0x15B + EXTRA_OMNI)) && (uPalId <= (0x162 + EXTRA_OMNI))) ||
                 ((uPalId >= (0x1B2 + EXTRA_OMNI)) && (uPalId <= (0x1B9 + EXTRA_OMNI))) ||
                 ((uPalId >= (0x209 + EXTRA_OMNI)) && (uPalId <= (0x210 + EXTRA_OMNI))))
        {
#ifdef REVERSE_PALETTES_SUPPORT_ACT_PASTING
            bLoadDefPal = FALSE;

            int nXOffs = 0;
            int nYOffs = 0;
            int nPeerPaletteDistance = -0x1E;

            //Create the img ticket
            ClearSetImgTicket(
                CreateImgTicket(uUnitId, 0xB,
                    CreateImgTicket(uUnitId, 0x0C, nullptr, nXOffs, nYOffs)
                )
            );

            //Set each palette
            sDescNode* NodeRushDrill[2] = {
                GetMainTree()->GetDescNode(Node01, Node02, Node03 + nPeerPaletteDistance, -1),
                GetMainTree()->GetDescNode(Node01, Node02, Node03, -1)
            };

            //Set each palette
            CreateDefPal(NodeRushDrill[0], 0);
            CreateDefPal(NodeRushDrill[1], 1);

            int nFirstExtraPalette = GetFirstExtraValueFromExtraPaletteId(NodeGet->uPalId, 0x56, 0x57, 0x08);
            SetSourcePal(0, NodeGet->uUnitId, nFirstExtraPalette + nPeerPaletteDistance, 6, 0x57);
            SetSourcePal(1, NodeGet->uUnitId, nFirstExtraPalette, 6, 0x57);
#else
            nTargetImgId = 0x0C;
            fImgIsFromNewImgDatRange = true;
#endif
            break;
        }

        break;
    }
    case indexCPS2Sprites_BBHood: // BBHood
    {
        if (CreateExtraPal(uUnitId, uPalId, 0x0c, 0x1, 0x08)) // Cruel Hunting
        {
            break;
        }
        else if (uPalId == (0x09 + EXTRA_OMNI)) //  bottle
        {
            SetExtraImg(0x07, uUnitId, uPalId);
            break;
        }
        else if (uPalId == (0x0a + EXTRA_OMNI)) //  water
        {
            SetExtraImg(0x0e, uUnitId, uPalId);
            break;
        }
        else if (uPalId == (0x0b + EXTRA_OMNI)) //  water puddle
        {
            SetExtraImg(0x0f, uUnitId, uPalId);
            break;
        }
        else if (uPalId == (0x13 + EXTRA_OMNI)) //  apple for you
        {
            SetExtraImg(0x0a, uUnitId, uPalId);
            break;
        }
        else if (uPalId == (0x14 + EXTRA_OMNI)) //  man in suit
        {
            SetExtraImg(0x09, uUnitId, uPalId);
            break;
        }

        break;
    }

    case indexCPS2Sprites_Charlie:
    {
        if ((SpecSel(&nSpecOffs, uPalId, 6, 8)) ||
            (SpecSel(&nSpecOffs, uPalId, 7, 8)))
        {
            // super shadow trail...?
            nTargetImgId = 0;
            break;
        }

        break;
    }

    case indexCPS2Sprites_Sakura: // Sakura
    {
        if ((SpecSel(&nSpecOffs, uPalId, 6, 8)) ||
            (SpecSel(&nSpecOffs, uPalId, 7, 8)))
        {
            // super shadow trail...?
            nTargetImgId = 0;
            break;
        }

        CreateExtraPal(uUnitId, uPalId, 0x1D, 0x1, 0x00); // Dark Sakura

        // Cherry blossoms
        CreateExtraPal(uUnitId, uPalId, 0x0B, 0x1, 0x08, 0, 1);
        break;
    }

    case indexCPS2Sprites_Dan: //Dan
    {
        if (SpecSel(&nSpecOffs, uPalId, 2, 8))
        {
            SetExtraImg(1, uUnitId, uPalId);
            break;
        }

        if ((SpecSel(&nSpecOffs, uPalId, 6, 8)) ||
            (SpecSel(&nSpecOffs, uPalId, 7, 8)))
        {
            // super shadow trail...?
            nTargetImgId = 0;
            break;
        }

        break;
    }

    case indexCPS2Sprites_Cammy: //Cammy
    {
        CreateExtraPal(uUnitId, uPalId, 0x09, 0x09, 11, 0, 9); // Counter flash
        break;
    }
    case indexCPS2Sprites_Dhalsim: //Dhalsim
    {
        CreateExtraPal(uUnitId, uPalId, 0x09, 0x05, 11, 0, 5); // teleport frames
        break;
    }

    case indexCPS2Sprites_Bison: //M.Bison
    {
        if (CreateExtraPal(uUnitId, uPalId, 0x09, 2, 0x08) ||
            CreateExtraPal(uUnitId, uPalId, 0x0A, 2, 0x09))
        {
            break;
        }

        break;
    }

    case indexCPS2Sprites_Ken:
    {
        if (SpecSel(&nSpecOffs, uPalId, 6, 8))
        {
            // unknown core palette highlight
            nTargetImgId = 0;
            break;
        }

        break;
    }

    case indexCPS2Sprites_Gambit: //Gambit
    {
        if (SpecSel(&nSpecOffs, uPalId, 6, 8))
        {
            // unknown core palette highlight
            nTargetImgId = 0;
            break;
        }

        CreateExtraPal(uUnitId, uPalId, 0x09, 0x05, 0, 0, 5); // win pose. 11 looks broken so I'm using 0.
        break;
    }
    case indexCPS2Sprites_Juggy: //Juggernaut
    {
        CreateExtraPal(uUnitId, uPalId, 0x09, 0x0A, 11, 0, 10); // Headcrush + power up.
        break;
    }
    case indexCPS2Sprites_Storm: //Storm
    {
        nExtraAmt = 3;

        if (CreateExtraPal(uUnitId, uPalId, 0x09, 1, 11))
        {
            break;
        }

        nExtraAmt = 4;

        if (CreateExtraPal(uUnitId, uPalId, 0x0F, 1, 12) ||
            CreateExtraPal(uUnitId, uPalId, 0x13, 1, 13))
        {
            break;
        }

        nExtraAmt = 1;

        if (CreateExtraPal(uUnitId, uPalId, 0x1B, 1, 14))
        {
            break;
        }

        nExtraAmt = 18;
        if (CreateExtraPal(uUnitId, uPalId, 0x19, 1, 15))
        {
            break;
        }

        break;
    }

    case indexCPS2Sprites_Sabretooth:
    {
        if (SpecSel(&nSpecOffs, uPalId, 6, 8))
        {
            // unknown core palette highlight
            nTargetImgId = 0;
            break;
        }

        break;
    }

    case indexCPS2Sprites_Magneto: // Magneto
    {
        if (SpecSel(&nSpecOffs, uPalId, 6, 8))
        {
            // unknown core palette highlight
            nTargetImgId = 0;
            break;
        }

        if (uPalId == (0x0A + EXTRA_OMNI)) //  c.mp (ball - all buttons) / c.hk (effect after c.mp)
        {
            SetExtraImg(11, uUnitId, uPalId);
            break;
        }

        break;
    }

    case indexCPS2Sprites_Shuma: // Shuma Gorath
    {
        if (!CreateExtraPal(uUnitId, uPalId, 0x11, 0x30, 0x00, 0, 0x30))
        {
            // Everything he has works great with the default sprite
            SetExtraImg(0, uUnitId, uPalId);
        }

        break;
    }

    case indexCPS2Sprites_SilverSamurai: //Silver Samurai
    {
        if (SpecSel(&nSpecOffs, uPalId, 6, 8))
        {
            // unknown core palette highlight
            nTargetImgId = 0;
            break;
        }

        CreateExtraPal(uUnitId, uPalId, 0x09, 0x08, 0x00, 0, 8);
        break;
    }
    case indexCPS2Sprites_OmegaRed: //Omega Red
    {
        CreateExtraPal(uUnitId, uPalId, 0x09, 0x04, 0x0B, 0, 4);
        break;
    }
    case indexCPS2Sprites_Spiral: //Spiral
    {
        if ((uPalId >= (0x09 + EXTRA_OMNI)) && (uPalId <= (0x2A + EXTRA_OMNI)))
        {
            // Metamorphosis super
            int nOffs = (uPalId - (0x09 + EXTRA_OMNI)) * 2;

            // Ensure we're loading for the right character that Spiral is copying from.                
            nImgUnitId = MVC2_D_0x31_EXTRAREDIR[nOffs];
            nTargetImgId = 0xFF00 + MVC2_D_0x31_EXTRAREDIR[nOffs + 1];

            if ((nImgUnitId == indexCPS2Sprites_Sentinel) && ((nTargetImgId & 0xFF) == 0x0)) // Sentinel guts join
            {
                bLoadDefPal = FALSE;

                //Create the img ticket
                ClearSetImgTicket(
                    CreateImgTicket(indexCPS2Sprites_Sentinel, 0,
                        CreateImgTicket(indexCPS2Sprites_Sentinel, 1)
                    )
                );

                sDescNode* JoinedNode[2] = {
                    GetMainTree()->GetDescNode(Node01, Node02, Node03, -1),
                    GetMainTree()->GetDescNode(Node01, Node02, Node03 + 1, -1),
                };

                //Set each palette
                CreateDefPal(JoinedNode[0], 0);
                CreateDefPal(JoinedNode[1], 1);

                SetSourcePal(0, NodeGet->uUnitId, NodeGet->uPalId, 1, 1 );
                SetSourcePal(1, NodeGet->uUnitId, NodeGet->uPalId + 1, 1, 1);
            }
            else
            {
                SetSourcePal(0, NodeGet->uUnitId, NodeGet->uPalId, 1, 1);
            }

            break;
        }

        if (
            CreateExtraPal(uUnitId, uPalId, 0x2D, 0x1C, 11, 0, 6) || // power enhance
            CreateExtraPal(uUnitId, uPalId, 0x33, 0x1C, 12, 0, 6) || // speed enhance
            CreateExtraPal(uUnitId, uPalId, 0x3B, 0x1C, 12, 0, 12)   // metamorphosis
            )
        {
            break;
        }

        break;
    }
    case indexCPS2Sprites_Colossus: //Colossus
    {
        if (SpecSel(&nSpecOffs, uPalId, 6, 8))
        {
            // unknown core palette highlight
            nTargetImgId = 0;
            break;
        }

        CreateExtraPal(uUnitId, uPalId, 0x09, 32, 0, 0, 32);
        break;
    }
    case indexCPS2Sprites_Sentinel: // 0x34
    {
        if (SpecSel(&nSpecOffs, uPalId, 0, 8) && (nSpecOffs < 6)) // guts, flames
        {
            bLoadDefPal = FALSE;

            //Create the img ticket
            ClearSetImgTicket(
                CreateImgTicket(indexCPS2Sprites_Sentinel, 0,
                    CreateImgTicket(indexCPS2Sprites_Sentinel, 1 ,
                        CreateImgTicket(indexCPS2Sprites_Sentinel, 3)
                    )
                )
            );

            sDescNode* NodeGet[3] = {
                GetMainTree()->GetDescNode(uUnitId, nSpecOffs, 0, -1),
                GetMainTree()->GetDescNode(uUnitId, nSpecOffs, 1, -1),
                GetMainTree()->GetDescNode(uUnitId, nSpecOffs, 3, -1)
            };

            //Set each palette
            CreateDefPal(NodeGet[0], 0);
            CreateDefPal(NodeGet[1], 1);
            CreateDefPal(NodeGet[2], 2);

            SetSourcePal(0, uUnitId, 0, 6, 8);
            SetSourcePal(1, uUnitId, 1, 6, 8);
            SetSourcePal(2, uUnitId, 3, 6, 8);
            break;
        }

        if (SpecSel(&nSpecOffs, uPalId, 6, 8))
        {
            // unknown core palette highlight
            nTargetImgId = 0;
            break;
        }

        break;
    }
    case indexCPS2Sprites_Blackheart:
    {
        nExtraAmt = 1; // These are all one-offs
        if (CreateExtraPal(uUnitId, uPalId, 0x0D, 1, 2) || // LP, HP, A1 demons
            CreateExtraPal(uUnitId, uPalId, 0x0E, 1, 1) || // Dark Thunder, etc
            CreateExtraPal(uUnitId, uPalId, 0x10, 1, 8) || // Inferno
            CreateExtraPal(uUnitId, uPalId, 0x13, 1, 11) || // Armageddon
            CreateExtraPal(uUnitId, uPalId, 0x14, 1, 12) || // HP throw skulls
            CreateExtraPal(uUnitId, uPalId, 0x19, 1, 2) // LK, HK, A2 demons
            )
        {
            break;
        }
        break;
    }
    case indexCPS2Sprites_Thanos:
    {
        nExtraAmt = 1; // These are all one-offs
        if (CreateExtraPal(uUnitId, uPalId, 0x0C, 1, 0) || // Win pose flash
            CreateExtraPal(uUnitId, uPalId, 0x0D, 1, 8) || // Terraxia teleport
            CreateExtraPal(uUnitId, uPalId, 0x0F, 1, 8) || // Terraxia incoming
            CreateExtraPal(uUnitId, uPalId, 0x10, 1, 9)    // Terraxia hugging
            )
        {
            break;
        }
        break;
    }
    case indexCPS2Sprites_Jin: 
    {
        if (CreateExtraPal(uUnitId, uPalId, 0x09, 6, 0, 0, 6) || // Power-up glow
            CreateExtraPal(uUnitId, uPalId, 0x2D, 6, 11, 0, 6) ||
            CreateExtraPal(uUnitId, uPalId, 0x51, 3, 12) ||
            CreateExtraPal(uUnitId, uPalId, 0x52, 3, 13) ||
            CreateExtraPal(uUnitId, uPalId, 0x53, 3, 14) ||
            CreateExtraPal(uUnitId, uPalId, 0x63, 6, 15, 0, 6)
            )
            break;

        break;
    }
    case indexCPS2Sprites_CapCom: //CapCom
    {
        // Handle the joined ninja sprites
        if (SpecSel(&nSpecOffs, uPalId, 1, 8) || SpecSel(&nSpecOffs, uPalId, 2, 8))
        {
            bLoadDefPal = FALSE;

            //Create the img ticket
            ClearSetImgTicket(
                CreateImgTicket(uUnitId, 1,
                    CreateImgTicket(uUnitId, 2, NULL, 28, 4)
                )
            );

            //Set each palette
            sDescNode* NodeGet[2] = {
               GetMainTree()->GetDescNode(uUnitId, nSpecOffs, 1, -1),
               GetMainTree()->GetDescNode(uUnitId, nSpecOffs, 2, -1)
            };

            //Set each palette
            CreateDefPal(NodeGet[0], 0);
            CreateDefPal(NodeGet[1], 1);

            SetSourcePal(0, uUnitId, 1, 6, 8);
            SetSourcePal(1, uUnitId, 2, 6, 8);

            break;
        }

        if (SpecSel(&nSpecOffs, uPalId, 6, 8))
        {
            // unknown core palette highlight
            nTargetImgId = 0;
            break;
        }

        nExtraAmt = 4;

        if (CreateExtraPal(uUnitId, uPalId, 0x09, 1, 11))
        {
            break;
        }

        nExtraAmt = 1;

        if (CreateExtraPal(uUnitId, uPalId, 0x0D, 1, 12))
        {
            break;
        }

        nExtraAmt = 6;

        if (CreateExtraPal(uUnitId, uPalId, 0x0E, 2, 15) ||
            CreateExtraPal(uUnitId, uPalId, 0x0F, 2, 14))
        {
            break;
        }

        break;
    }
    case indexCPS2Sprites_Bonerine: //Bonerine
    {
        if (SpecSel(&nSpecOffs, uPalId, 0, 8) || // core sprite
            SpecSel(&nSpecOffs, uPalId, 6, 8))   // unknown highlight
        {
            bLoadDefPal = FALSE;

            //Create the img ticket
            ClearSetImgTicket(
                CreateImgTicket(uUnitId, 0,
                    CreateImgTicket(uUnitId, 1, NULL, 0, 0)
                )
            );

            sDescNode* NodeGet[2] = {
               GetMainTree()->GetDescNode(uUnitId, nSpecOffs, uPalId % 8, -1),
               GetMainTree()->GetDescNode(uUnitId, nSpecOffs, (uPalId + 1) % 8, -1)
            };

            //Set each palette
            CreateDefPal(NodeGet[0], 0);
            CreateDefPal(NodeGet[1], 1);

            SetSourcePal(0, uUnitId, uPalId % 8, 6, 8);
            SetSourcePal(1, uUnitId, (uPalId + 1) % 8, 6, 8);
            break;
        }

        if (SpecSel(&nSpecOffs, uPalId, 7, 8))
        {
            // unknown core palette highlight
            nTargetImgId = 1;
            break;
        }


        break;
    }
    case indexCPS2Sprites_Kobun: // Kobun
    {
        if ((uPalId == 0x1) ||
            (uPalId == 0x9) ||
            (uPalId == 0x11) ||
            (uPalId == 0x19) ||
            (uPalId == 0x21) ||
            (uPalId == 0x29))
        {
            // Tron Bonne body
            bLoadDefPal = FALSE;

            nImgUnitId = indexCPS2Sprites_Tron;
            nTargetImgId = 1;

            ClearSetImgTicket(CreateImgTicket(nImgUnitId, nTargetImgId));

            CreateDefPal(NodeGet, 0);

            SetSourcePal(0, uUnitId, 0, 6, 8);

            break;
        }
        else if ((uPalId == 0x2) || 
                 (uPalId == 0xA) ||
                 (uPalId == 0x12) ||
                 (uPalId == 0x1A) ||
                 (uPalId == 0x22) ||
                 (uPalId == 0x2A))
        {
            // Tron Bonne has a lunch sprite we can reuse here.
            bLoadDefPal = FALSE;

            nImgUnitId = indexCPS2Sprites_Tron;
            nTargetImgId = 0x0C;

            ClearSetImgTicket(CreateImgTicket(nImgUnitId, nTargetImgId));

            CreateDefPal(NodeGet, 0);

            SetSourcePal(0, uUnitId, 0, 6, 8);

            break;
        }
        else if ((uPalId == 0x6) ||
                 (uPalId == 0xE) ||
                 (uPalId == 0x16) ||
                 (uPalId == 0x1E) ||
                 (uPalId == 0x26) ||
                 (uPalId == 0x2E) ||
                 (uPalId == 0x7) || 
                 (uPalId == 0xF) ||
                 (uPalId == 0x17) ||
                 (uPalId == 0x1F) ||
                 (uPalId == 0x27) ||
                 (uPalId == 0x2F))
        {
            // Kobun assist sprites.
            SetExtraImg(0, uUnitId, 0x0);
            break;
        }
        else if (CreateExtraPal(uUnitId, uPalId, 0x09, 5, 0, 0, 5))
        {
            // King Kobun.  Just reuse the Kobun core sprite for now. :(
            break;
        }
        break;
    }
    case MVC2_D_TEAMVIEW_LOCATION: // Team View: generated.
    {
        bLoadDefPal = FALSE;

        UINT16 nJoinedUnit1 = indexMVC2AMagneto;
        UINT16 nJoinedUnit2 = indexMVC2AStorm;
        UINT16 nJoinedUnit3 = indexMVC2APsylocke;
        bool fTeamFound = false;
        UINT16 nSrcAmt = 1;
        UINT16 nNodeIncrement = 1;

        UINT16 nTeamViewNode = (UINT16)floor(NodeGet->uPalId / (UINT16)ARRAYSIZE(DEF_BUTTONLABEL6_MVC2));
        const sDescTreeNode* pCurrentNode = &MVC2_A_TEAMVIEW_COLLECTION[nTeamViewNode];

        for (UINT16 nTeamIndex = 0; nTeamIndex < ARRAYSIZE(mvc2TeamList); nTeamIndex++)
        {
            if (_wcsicmp(mvc2TeamList[nTeamIndex].pszTeamName, pCurrentNode->szDesc) == 0)
            {
                nJoinedUnit1 = mvc2TeamList[nTeamIndex].nCharacterOne;
                nJoinedUnit2 = mvc2TeamList[nTeamIndex].nCharacterTwo;
                nJoinedUnit3 = mvc2TeamList[nTeamIndex].nCharacterThree;
                fTeamFound = true;
                break;
            }
        }

        if (!fTeamFound)
        {
            OutputDebugString(L"WARNING: MVC2 Team lookup failed. Please fix.  Will use MSP for now.\n");
        }

        // Fudge some visual offsets here so fatter sprites don't collide.
        int nXOffsetForSecond = 100;
        int nYOffsetForSecond = 0;
        int nXOffsetForThird = nXOffsetForSecond + 80;
        int nYOffsetForThird = 0;

        if (nJoinedUnit2 == indexMVC2ASentinel)
        {
            nXOffsetForSecond += 40;
            nXOffsetForThird += 40;
        }
        else if (nJoinedUnit2 == indexMVC2AStrider)
        {
            nXOffsetForSecond += 280;
            nXOffsetForThird += 80;
        }
        else if (nJoinedUnit2 == indexMVC2ADrDoom)
        {
            nXOffsetForSecond += 80;
            nXOffsetForThird += 80;
        }
        else if (nJoinedUnit2 == indexMVC2AColossus)
        {
            nXOffsetForThird += 80;
        }

        if (nJoinedUnit3 == indexMVC2ASentinel)
        {
            nXOffsetForThird += 40;
        }
        else if (nJoinedUnit3 == indexMVC2ACaptainCommando)
        {
            nXOffsetForThird += 50;
        }
        else if (nJoinedUnit3 == indexMVC2AAkuma)
        {
            nXOffsetForThird += 20;
        }

        UINT16 nNodeIndex = ((NodeGet->uPalId) % ARRAYSIZE(DEF_BUTTONLABEL6_MVC2));
        UINT16 nPaletteIndex = nNodeIndex * 8;  // this is 8 since we're dealing with base mvc2 character palettes

        ClearSetImgTicket(
            CreateImgTicket(nJoinedUnit1, k_nSpecialTeamSpriteImageIndex,
                CreateImgTicket(nJoinedUnit2, k_nSpecialTeamSpriteImageIndex,
                    CreateImgTicket(nJoinedUnit3, k_nSpecialTeamSpriteImageIndex, nullptr, nXOffsetForThird, nYOffsetForThird),
                    nXOffsetForSecond, nYOffsetForSecond)
            )
        );

        //Set each palette
        sDescNode* JoinedNode[3] = {
           GetMainTree()->GetDescNode(nJoinedUnit1, nNodeIndex, 0, -1),
           GetMainTree()->GetDescNode(nJoinedUnit2, nNodeIndex, 0, -1),
           GetMainTree()->GetDescNode(nJoinedUnit3, nNodeIndex, 0, -1)
        };

        //Set each palette
        CreateDefPal(JoinedNode[0], 0);
        CreateDefPal(JoinedNode[1], 1);
        CreateDefPal(JoinedNode[2], 2);

        nSrcAmt = 6;
        nNodeIncrement = 8; // this is 8 since we're dealing with base mvc2 character palettes
        SetSourcePal(0, nJoinedUnit1, 0, nSrcAmt, nNodeIncrement);
        SetSourcePal(1, nJoinedUnit2, 0, nSrcAmt, nNodeIncrement);
        SetSourcePal(2, nJoinedUnit3, 0, nSrcAmt, nNodeIncrement);
    
        break;
    }
    }

    if (bLoadDefPal)
    {
        int nBasicOffset = GetBasicOffset(uPalId);

        if ((nImgUnitId == indexCPS2Sprites_Rogue) && (nBasicOffset == 5))
        {
            // Rogue's darkened dash sprite is missing a sprite association in img.dat, so just reuse the normal dash sprite
            nBasicOffset = 4;
        }

        // This flag is used to de-extra-ize sprite values.  But for imgdat2020 sprites we actually want a higher range.
        // So here we allow either choice of ranges, with the explicit need to ask for the new range.
        const int nBitFlagToUse = fImgIsFromNewImgDatRange ? 0xFF : 0x0F;

        // Old extra targetimgids will be 0xFF0x, so allow for that.
        if ((nTargetImgId != -1) && ((0xFF & nTargetImgId) > nBitFlagToUse))
        {
            OutputDebugString(L"WARNING: The desired nTargetImgId is out of range and is being modified\n");
        }

        ClearSetImgTicket(CreateImgTicket(nImgUnitId, (nTargetImgId != -1) ? (nTargetImgId & nBitFlagToUse) : nBasicOffset));

        CreateDefPal(NodeGet, 0);

        if (nBasicOffset != -1)
        {
            SetSourcePal(0, uUnitId, nBasicOffset, 6, 8);
        }
        else
        {
            // For Extras, CreateExtraPal handles the call to SetSourcePal
            // For anybody that wants multisprite export, they need to define their node increment and corrected starting point above.
        }
    }

    return TRUE;
}
