#include "StdAfx.h"
//#include "Gamedef.h"
#include "Game_MVC2_D.h"

BOOL CGame_MVC2_D::UpdatePalImg(int Node01, int Node02, int Node03, int Node04)
{
	//Reset palette sources
	ClearSrcPal();

	if(Node01 == -1)
	{
		return FALSE;
	}

	UINT8 uUnitId;
	UINT16 uPalId;

	//Reset the extra amount
	nExtraAmt = 6;

	

	int nSpecOffs;
	bLoadDefPal = TRUE;

	sDescNode * NodeGet = MainDescTree.GetDescNode(Node01, Node02, Node03, Node04);

	if(NodeGet == NULL)
	{
		return FALSE;
	}

	uUnitId = NodeGet->uUnitId;
	uPalId = NodeGet->uPalId;

	//Change the image id if we need to
	nTargetImgId = 0;
	nImgUnitId = uUnitId;
	
	//Get rid of any palettes if there are any
	BasePalGroup.FlushPalAll();

	switch(uUnitId)
	{
	case 0x01: //Zangeif
		{
			if(uPalId >= (0x11 + EXTRA_OMNI) && uPalId <= (0x16 + EXTRA_OMNI))
			{
				SetExtraImg(11, uUnitId, uPalId);
				break;
			}

			if(uPalId >= (0x17 + EXTRA_OMNI) && uPalId <= (0x3A + EXTRA_OMNI))
			{
				SetExtraImg(12, uUnitId, uPalId);
				break;
			}

			break;
		}
	case 0x03: //Morrigan
		{
			if(CreateExtraPal(uUnitId, uPalId, 0x3A, 3, 11, 0, 2)
				|| CreateExtraPal(uUnitId, uPalId, 0x4B, 9, 12, 0, 2)
				|| CreateExtraPal(uUnitId, uPalId, 0x4D, 9, 13, 0, 7)
				|| CreateExtraPal(uUnitId, uPalId, 0x81, 1, 14))
			{
				break;
			}

			break;
		}

	case 0x06: //Cyclops
		{
			if(CreateExtraPal(uUnitId, uPalId, 0x19, 1, 11))
				break;

			if(uPalId >= (0x29 + EXTRA_OMNI) && uPalId <= (0x58 + EXTRA_OMNI))
			{
				SetExtraImg(12, uUnitId, uPalId);
				break;
			}

			if(
				CreateExtraPal(uUnitId, uPalId, 0x59, 2, 13)
				|| CreateExtraPal(uUnitId, uPalId, 0x5A, 2, 13)
				)
			{
				break;
			}


			break;
		}
	case 0x07: //Wolverine
		{
			if(SpecSel(&nSpecOffs, uPalId, 0, 8))
			{
				bLoadDefPal = FALSE;

				//Create the img ticket
				ClearSetImgTicket(
					CreateImgTicket(0x07, 0,
						CreateImgTicket(0x07, 1, NULL, 20, 4)
					)
				);

				//Set each palette
				sDescNode * NodeGet[2] = {
					MainDescTree.GetDescNode(uUnitId, nSpecOffs, 0, -1),
					MainDescTree.GetDescNode(uUnitId, nSpecOffs, 1, -1)
				};

				//Set each palette
				CreateDefPal(NodeGet[0], 0);
				CreateDefPal(NodeGet[1], 1);

				SetSourcePal(0, uUnitId, 0, 6, 8);
				SetSourcePal(1, uUnitId, 1, 6, 8);
				

			
				break;
			}

			nExtraAmt = 1;
			CreateExtraPal(uUnitId, uPalId, 0x11, 1, 11);
			
			break;
		}

	case 0x09: //Iceman
		{
			if(SpecSel(&nSpecOffs, uPalId, 1, 8) || SpecSel(&nSpecOffs, uPalId, 2, 8))
			{
				SetExtraImg(0, uUnitId, uPalId);
			}

			nExtraAmt = 4;
			if(CreateExtraPal(uUnitId, uPalId, 0x09, 1, 11))
			{
				break;
			}

			nExtraAmt = 0x4A - 0x21 + 1;
			CreateExtraPal(uUnitId, uPalId, 0x21, 1, 0);

			break;
		}
	case 0x0A: //Rogue
		{
			if(uPalId > 0x1D + EXTRA_OMNI && uPalId <= 0x22 + EXTRA_OMNI)
			{
				SetExtraImg(11, uUnitId, uPalId);
				break;
			}

			break;
		}

	case 0x0B: //Captain America
		{
			if(SpecSel(&nSpecOffs, uPalId, 0, 8))
			{
				bLoadDefPal = FALSE;

				//Create the img ticket
				ClearSetImgTicket(
					CreateImgTicket(uUnitId, 0,
						CreateImgTicket(uUnitId, 1, NULL, -22, -17)
					)
				);

				//Set each palette
				sDescNode * NodeGet[2] = {
					MainDescTree.GetDescNode(uUnitId, nSpecOffs, 0, -1),
					MainDescTree.GetDescNode(uUnitId, nSpecOffs, 1, -1)
				};

				//Set each palette
				CreateDefPal(NodeGet[0], 0);
				CreateDefPal(NodeGet[1], 1);

				SetSourcePal(0, uUnitId, 0, 6, 8);
				SetSourcePal(1, uUnitId, 1, 6, 8);
				
			}
			break;
		}
	case 0x0C: //Spider-Man
		{
			if(
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

	case 0x0D: //Hulk
		{
			nExtraAmt = 1;
			CreateExtraPal(uUnitId, uPalId, 0x0A, 1, 11);
			break;
		}

	case 0x0F: //Dr Doom
		{
			if(
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
	
	case 0x10: //Tron
		{
			if(SpecSel(&nSpecOffs, uPalId, 0, 8))
			{
				bLoadDefPal = FALSE;

				//Create the img ticket
				ClearSetImgTicket(
					CreateImgTicket(0x10, 0,
						CreateImgTicket(0x10, 1, NULL, -4, -50)
					)
				);

				//Set each palette
				sDescNode * NodeGet[2] = {
					MainDescTree.GetDescNode(uUnitId, nSpecOffs, 0, -1),
					MainDescTree.GetDescNode(uUnitId, nSpecOffs, 1, -1)
				};

				//Set each palette
				CreateDefPal(NodeGet[0], 0);
				CreateDefPal(NodeGet[1], 1);

				SetSourcePal(0, uUnitId, 0, 6, 8);
				SetSourcePal(1, uUnitId, 1, 6, 8);

				break;
				
			}

			nExtraAmt = 1;

			if(
				CreateExtraPal(uUnitId, uPalId, 0x11, 1, 11)
				|| CreateExtraPal(uUnitId, uPalId, 0x13, 1, 12)
				|| CreateExtraPal(uUnitId, uPalId, 0x14, 1, 13)
				|| CreateExtraPal(uUnitId, uPalId, 0x15, 1, 14)
				)
			{
				break;
			}

			break;
		}

	case 0x11: //Jill Valentine
		{
			nExtraAmt = 1;

			if(
				CreateExtraPal(uUnitId, uPalId, 0x09, 1, 11)
				|| CreateExtraPal(uUnitId, uPalId, 0x0A, 1, 12)
				|| CreateExtraPal(uUnitId, uPalId, 0x0B, 1, 2)
				)
			{
				break;
			}

			break;
		}
	case 0x12: //Hayato
		{
			if(SpecSel(&nSpecOffs, uPalId, 0, 8) && nSpecOffs < 6)
			{
				bLoadDefPal = FALSE;

				//Create the img ticket
				ClearSetImgTicket(
					CreateImgTicket(0x12, 0,
						CreateImgTicket(0x12, 1, NULL, -63, 32)
					)
				);

				sDescNode * NodeGet[2] = {
					MainDescTree.GetDescNode(uUnitId, nSpecOffs, 0, -1),
					MainDescTree.GetDescNode(uUnitId, nSpecOffs, 1, -1)
				};

				//Set each palette
				CreateDefPal(NodeGet[0], 0);
				CreateDefPal(NodeGet[1], 1);

				SetSourcePal(0, uUnitId, 0, 6, 8);
				SetSourcePal(1, uUnitId, 1, 6, 8);
				

			
			}
			
			break;
		}
	case 0x13: //Ruby Heart
		{
			nExtraAmt = 1;

			if(
				CreateExtraPal(uUnitId, uPalId, 0x0B, 1, 11)
				|| CreateExtraPal(uUnitId, uPalId, 0x0C, 1, 12)
				|| CreateExtraPal(uUnitId, uPalId, 0x0D, 1, 13)
				|| CreateExtraPal(uUnitId, uPalId, 0x0E, 1, 14)
				|| CreateExtraPal(uUnitId, uPalId, 0x10, 1, 15)
				)
			{
				break;
			}

			break;
		}
	case 0x14: //Son Son
		{
			if(
				CreateExtraPal(uUnitId, uPalId, 0x0F, 1, 11)
				|| CreateExtraPal(uUnitId, uPalId, 0x17, 1, 11)
				|| CreateExtraPal(uUnitId, uPalId, 0x1D, 2, 11, 0, 2)
				)
			{
				break;
			}
			break;
		}
	case 0x15: //Amingo
		{
			nExtraAmt = 1;

		
			if(
				CreateExtraPal(uUnitId, uPalId, 0x09, 1, 11)
				|| CreateExtraPal(uUnitId, uPalId, 0x0B, 1, 11)
				)
			{
				break;
			}

			break;
		}
	case 0x23: //Dan
		{
			if(SpecSel(&nSpecOffs, uPalId, 2, 8))
			{
				SetExtraImg(1, uUnitId, uPalId);
			}

			break;
		}

	case 0x24: //Cammy
		{
			if(uPalId >= (0x09 + EXTRA_OMNI) && uPalId <= (0x3E + EXTRA_OMNI))
			{
				SetExtraImg(11, uUnitId, uPalId);
			}
			break;
		}
	case 0x25: //Dhalsim
		{
			if(uPalId >= (0x09 + EXTRA_OMNI) && uPalId <= (0x26 + EXTRA_OMNI))
			{
				SetExtraImg(11, uUnitId, uPalId);
			}
			break;
		}
	case 0x26: //M.Bison
		{
			if(
				CreateExtraPal(uUnitId, uPalId, 0x09, 1, 11)
				|| CreateExtraPal(uUnitId, uPalId, 0x0A, 1, 12)
				)
			{
				break;
			}

			break;
		}
	case 0x28: //Gambit
		{
			if(uPalId >= (0x09 + EXTRA_OMNI) && uPalId <= (0x26 + EXTRA_OMNI))
			{
				SetExtraImg(11, uUnitId, uPalId);
			}
			break;
		}
	case 0x29: //Juggernaut
		{
			if(uPalId >= (0x09 + EXTRA_OMNI) && uPalId <= (0x44 + EXTRA_OMNI))
			{
				SetExtraImg(11, uUnitId, uPalId);
			}
			break;
		}
	case 0x2A: //Storm
		{
			nExtraAmt = 3;

			if(CreateExtraPal(uUnitId, uPalId, 0x09, 1, 11))
				break;

			nExtraAmt = 4;

			if(CreateExtraPal(uUnitId, uPalId, 0x0F, 1, 12))
				break;

			nExtraAmt = 4;

			if(CreateExtraPal(uUnitId, uPalId, 0x13, 1, 13))
				break;

			nExtraAmt = 1;

			if(CreateExtraPal(uUnitId, uPalId, 0x1B, 1, 14))
				break;

			nExtraAmt = 18;
			if(CreateExtraPal(uUnitId, uPalId, 0x19, 1, 15))
				break;
			

			break;
		}
	case 0x2C:
		{
			if(uPalId == 0x09 + EXTRA_OMNI)
			{
				SetExtraImg(11, uUnitId, uPalId);
			}

			break;
		}
		
	case 0x2F: //Silver Samurai
		{
			if(uPalId >= (0x09 + EXTRA_OMNI) && uPalId <= (0x37 + EXTRA_OMNI))
			{
				SetExtraImg(0, uUnitId, uPalId);
			}

			break;
		}
	case 0x30: //Omega Red
		{
			if(uPalId >= (0x09 + EXTRA_OMNI) && uPalId <= (0x20 + EXTRA_OMNI))
			{
				SetExtraImg(11, uUnitId, uPalId);
			}

			break;
		}
	case 0x31: //Spiral
		{

			if(uPalId >= (0x09 + EXTRA_OMNI) && uPalId <= (0x2A + EXTRA_OMNI))
			{
				int nOffs = (uPalId - (0x09 + EXTRA_OMNI)) * 2;

				nImgUnitId = MVC2_D_0x31_EXTRAREDIR[nOffs];
				nTargetImgId = 0xFF00 + MVC2_D_0x31_EXTRAREDIR[nOffs + 1];

				SetExtraImg(0, uUnitId, uPalId);
				break;
			}

			if(
				CreateExtraPal(uUnitId, uPalId, 0x2D, 0x1C, 11, 0, 6)
				|| CreateExtraPal(uUnitId, uPalId, 0x33, 0x1C, 12, 0, 6)
				)
			{
				break;
			}

			break;
		}
	case 0x32: //Colossus
		{
			if(uPalId >= (0x09 + EXTRA_OMNI))
			{
				SetExtraImg(0, uUnitId, uPalId);
				
			}
			
			break;
		}
	case 0x37: //Jin
		{
			if(uPalId >= (0x09 + EXTRA_OMNI) && uPalId <= (0x2C + EXTRA_OMNI))
			{
				SetExtraImg(0, uUnitId, uPalId);
				break;
			}

			if(
				CreateExtraPal(uUnitId, uPalId, 0x2D, 6, 11, 0, 6)
				|| CreateExtraPal(uUnitId, uPalId, 0x51, 3, 12)
				|| CreateExtraPal(uUnitId, uPalId, 0x52, 3, 13)
				|| CreateExtraPal(uUnitId, uPalId, 0x53, 3, 14)
				|| CreateExtraPal(uUnitId, uPalId, 0x63, 6, 15, 0, 6)
				)
				break;

			break;
		}
	case 0x38: //CapCom
		{
			if(SpecSel(&nSpecOffs, uPalId, 1, 8) || SpecSel(&nSpecOffs, uPalId, 2, 8))
			{
				bLoadDefPal = FALSE;

				//Create the img ticket
				ClearSetImgTicket(
					CreateImgTicket(uUnitId, 1,
						CreateImgTicket(uUnitId, 2, NULL, 28, 4)
					)
				);

				//Set each palette
				sDescNode * NodeGet[2] = {
					MainDescTree.GetDescNode(uUnitId, nSpecOffs, 1, -1),
					MainDescTree.GetDescNode(uUnitId, nSpecOffs, 2, -1)
				};

				//Set each palette
				CreateDefPal(NodeGet[0], 0);
				CreateDefPal(NodeGet[1], 1);

				SetSourcePal(0, uUnitId, 1, 6, 8);
				SetSourcePal(1, uUnitId, 2, 6, 8);

				break;
			}


			nExtraAmt = 4;

			if(CreateExtraPal(uUnitId, uPalId, 0x09, 1, 11))
				break;

			nExtraAmt = 1;

			if(CreateExtraPal(uUnitId, uPalId, 0x0D, 1, 12))
				break;

			nExtraAmt = 6;

			if(
				CreateExtraPal(uUnitId, uPalId, 0x0E, 2, 13)
				|| CreateExtraPal(uUnitId, uPalId, 0x0F, 2, 14)
				)
				break;		


			break;
		}
	case 0x39: //Bonerine
		{
			if(SpecSel(&nSpecOffs, uPalId, 0, 8))
			{
				bLoadDefPal = FALSE;

				//Create the img ticket
				ClearSetImgTicket(
					CreateImgTicket(uUnitId, 0,
						CreateImgTicket(uUnitId, 1, NULL, 25, 6)
					)
				);

				sDescNode * NodeGet[2] = {
					MainDescTree.GetDescNode(uUnitId, nSpecOffs, 0, -1),
					MainDescTree.GetDescNode(uUnitId, nSpecOffs, 1, -1)
				};

				//Set each palette
				CreateDefPal(NodeGet[0], 0);
				CreateDefPal(NodeGet[1], 1);

				SetSourcePal(0, uUnitId, 0, 6, 8);
				SetSourcePal(1, uUnitId, 1, 6, 8);
				
			}

			break;
		}
		
	}

	if(bLoadDefPal)
	{
		int nBasicOffset = GetBasicOffset(uPalId);
		ClearSetImgTicket(CreateImgTicket(nImgUnitId, nTargetImgId ? (nTargetImgId & 0x000F) : nBasicOffset));

		CreateDefPal(NodeGet, 0);


		if(nBasicOffset != -1)
		{
			SetSourcePal(0, uUnitId, nBasicOffset, 6, 8);
		}
		//else
		//{
		//	//SetSourcePal(0, uUnitId, uPalId, 0, 0);
		//}
	}

	return TRUE;
}