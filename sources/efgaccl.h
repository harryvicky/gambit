//
// FILE: efgaccl.h -- Names for various extensive form GUI accelerators
//
// $Id$
//

#ifndef EFGACCL_H
#define EFGACCL_H

#include "accels.h"

const int NUM_EFG_EVENTS = 75;

AccelEvent efg_events[NUM_EFG_EVENTS] = 
{
  AccelEvent("FileSave", efgmenuFILE_SAVE),
  AccelEvent("FilePrintPreview", efgmenuFILE_PRINT_PREVIEW),
  AccelEvent("FileClose", efgmenuFILE_CLOSE),
  AccelEvent("NodeAdd", efgmenuEDIT_NODE_ADD),
  AccelEvent("NodeDelete", efgmenuEDIT_NODE_DELETE),
  AccelEvent("NodeInsert", efgmenuEDIT_NODE_INSERT),
  AccelEvent("NodeLabel", efgmenuEDIT_NODE_LABEL),
  AccelEvent("SetMark", efgmenuEDIT_NODE_SET_MARK),
  AccelEvent("GoToMark", efgmenuEDIT_NODE_GOTO_MARK),
  AccelEvent("ActionDelete", efgmenuEDIT_ACTION_DELETE),
  AccelEvent("ActionInsert", efgmenuEDIT_ACTION_INSERT),
  AccelEvent("ActionLabel", efgmenuEDIT_ACTION_LABEL),
  AccelEvent("ActionProbs", efgmenuEDIT_ACTION_PROBS),
  AccelEvent("InfosetMerge", efgmenuEDIT_INFOSET_MERGE),
  AccelEvent("InfosetBreak", efgmenuEDIT_INFOSET_BREAK),
  AccelEvent("InfosetSplit", efgmenuEDIT_INFOSET_SPLIT),
  AccelEvent("InfosetJoin", efgmenuEDIT_INFOSET_JOIN),
  AccelEvent("InfosetLabel", efgmenuEDIT_INFOSET_LABEL),
  AccelEvent("InfosetPlayer", efgmenuEDIT_INFOSET_PLAYER),
  AccelEvent("InfosetReveal", efgmenuEDIT_INFOSET_REVEAL),
  AccelEvent("OutcomeAttach", efgmenuEDIT_OUTCOMES_ATTACH),
  AccelEvent("OutcomeDetach", efgmenuEDIT_OUTCOMES_DETACH),
  AccelEvent("OutcomeLabel", efgmenuEDIT_OUTCOMES_LABEL),
  AccelEvent("OutcomePayoffs", efgmenuEDIT_OUTCOMES_PAYOFFS),
  AccelEvent("TreeCopy", efgmenuEDIT_TREE_COPY),
  AccelEvent("TreeMove", efgmenuEDIT_TREE_MOVE),
  AccelEvent("TreeDelete", efgmenuEDIT_TREE_DELETE),
  AccelEvent("TreeLabel", efgmenuEDIT_TREE_LABEL),
  AccelEvent("TreePlayers", efgmenuEDIT_TREE_PLAYERS),
  AccelEvent("TreeInfosets", efgmenuEDIT_TREE_INFOSETS),
  AccelEvent("SubgamesMarkAll", efgmenuSUBGAME_MARKALL),
  AccelEvent("SubgamesMark", efgmenuSUBGAME_MARK),
  AccelEvent("SubgamesUnmarkAll", efgmenuSUBGAME_UNMARKALL),
  AccelEvent("SubgamesUnmark", efgmenuSUBGAME_UNMARK),
  AccelEvent("SubgamesCollapseAll", efgmenuSUBGAME_COLLAPSEALL),
  AccelEvent("SubgamesCollapse", efgmenuSUBGAME_COLLAPSE),
  AccelEvent("SubgamesExpandLevel", efgmenuSUBGAME_EXPAND),
  AccelEvent("SubgamesExpandBranch", efgmenuSUBGAME_EXPANDBRANCH),
  AccelEvent("SubgamesExpandAll", efgmenuSUBGAME_EXPANDALL),
  AccelEvent("SupportUndominated", efgmenuSUPPORT_UNDOMINATED),
  AccelEvent("SupportSelect", efgmenuSUPPORT_SELECT_FROMLIST),
  AccelEvent("SupportSelectNext", efgmenuSUPPORT_SELECT_NEXT),
  AccelEvent("SupportSelectPrevious", efgmenuSUPPORT_SELECT_PREVIOUS),
  AccelEvent("SolveStandard", efgmenuSOLVE_STANDARD),
  AccelEvent("SolveEfgEnumPure", efgmenuSOLVE_CUSTOM_EFG_ENUMPURE),
  AccelEvent("SolveEfgLcp", efgmenuSOLVE_CUSTOM_EFG_LCP),
  AccelEvent("SolveEfgLp", efgmenuSOLVE_CUSTOM_EFG_LP),
  AccelEvent("SolveEfgLiap", efgmenuSOLVE_CUSTOM_EFG_LIAP),
  AccelEvent("SolveEfgPolEnum", efgmenuSOLVE_CUSTOM_EFG_POLENUM),
  AccelEvent("SolveEfgQre", efgmenuSOLVE_CUSTOM_EFG_QRE),
  AccelEvent("SolveNfgEnumPure", efgmenuSOLVE_CUSTOM_NFG_ENUMPURE),
  AccelEvent("SolveNfgEnumMixed", efgmenuSOLVE_CUSTOM_NFG_ENUMMIXED),
  AccelEvent("SolveNfgLcp", efgmenuSOLVE_CUSTOM_NFG_LCP),
  AccelEvent("SolveNfgLp", efgmenuSOLVE_CUSTOM_NFG_LP),
  AccelEvent("SolveNfgLiap", efgmenuSOLVE_CUSTOM_NFG_LIAP),
  AccelEvent("SolveNfgSimpDiv", efgmenuSOLVE_CUSTOM_NFG_SIMPDIV),
  AccelEvent("SolveNfgPolEnum", efgmenuSOLVE_CUSTOM_NFG_POLENUM),
  AccelEvent("SolveNfgQre", efgmenuSOLVE_CUSTOM_NFG_QRE),
  AccelEvent("SolveNfgQreGrid", efgmenuSOLVE_CUSTOM_NFG_QREGRID),
  AccelEvent("SolveNfgReduced", efgmenuSOLVE_NFG_REDUCED),
  AccelEvent("SolveNfgAgent", efgmenuSOLVE_NFG_AGENT),
  AccelEvent("InspectSolutions", efgmenuINSPECT_SOLUTIONS),
  AccelEvent("InspectCursor", efgmenuINSPECT_CURSOR),
  AccelEvent("InspectInfosets", efgmenuINSPECT_INFOSETS),
  AccelEvent("InspectZoomWindow", efgmenuINSPECT_ZOOM_WIN),
  AccelEvent("InspectGameInfo", efgmenuINSPECT_GAMEINFO),
  AccelEvent("PrefsDisplay", efgmenuPREFS_DISPLAY),
  AccelEvent("PrefsLegend", efgmenuPREFS_LEGEND),
  AccelEvent("PrefsColors", efgmenuPREFS_COLORS),
  AccelEvent("PrefsAccels", efgmenuPREFS_ACCELS),
  AccelEvent("PrefsSave", efgmenuPREFS_SAVE),
  AccelEvent("PrefsLoad", efgmenuPREFS_LOAD),
  AccelEvent("ZoomIn", efgmenuPREFS_INC_ZOOM),
  AccelEvent("ZoomOut", efgmenuPREFS_DEC_ZOOM),
  AccelEvent("Redraw", efgmenuPREFS_REDRAW),
};

#endif  // EFGACCL_H
