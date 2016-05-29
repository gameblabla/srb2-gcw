// SONIC ROBO BLAST 2
//-----------------------------------------------------------------------------
// Copyright (C) 2004-2016 by Sonic Team Junior.
//
// This program is free software distributed under the
// terms of the GNU General Public License, version 2.
// See the 'LICENSE' file for more details.
//-----------------------------------------------------------------------------
/// \file  y_inter.h
/// \brief Tally screens, or "Intermissions" as they were formally called in Doom

extern boolean usebuffer;

void Y_IntermissionDrawer(void);
void Y_Ticker(void);
void Y_StartIntermission(void);
void Y_EndIntermission(void);
void Y_EndGame(void);

typedef enum
{
	int_none,
	int_coop,     // Single Player/Cooperative
	int_match,    // Match
	int_teammatch,// Team Match
//	int_tag,      // Tag
	int_ctf,      // CTF
	int_spec,     // Special Stage
	int_nights,   // NiGHTS into Dreams
	int_nightsspec,// NiGHTS special stage
	int_race,     // Race
	int_classicrace, // Competition
} intertype_t;
extern intertype_t intertype;
