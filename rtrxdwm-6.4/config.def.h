/* See LICENSE file for copyright and license details. */

/* alt-tab configuration */
static const unsigned int tabModKey 		= 0x40;	/* if this key is hold the alt-tab functionality stays acitve. This key must be the same as key that is used to active functin altTabStart `*/
static const unsigned int tabCycleKey 	= 0x17;	/* if this key is hit the alt-tab program moves one position forward in clients stack. This key must be the same as key that is used to active functin altTabStart */
static const unsigned int tabPosY 			= 1;	  /* tab position on Y axis, 0 = bottom, 1 = center, 2 = top */
static const unsigned int tabPosX 			= 1;	  /* tab position on X axis, 0 = left, 1 = center, 2 = right */
static const unsigned int maxWTab 			= 400;	/* tab menu width */
static const unsigned int maxHTab 			= 100;	/* tab menu height */

/* appearance */
static unsigned int borderpx  = 2;        /* border pixel of windows */
static unsigned int gappx     = 0;        /* gaps between windows */
static unsigned int snap      = 15;       /* snap pixel */
static int scalepreview       = 5;        /* tag preview scaling */
static unsigned int systraypinning  = 0;   /* 0: sloppy systray follows selected monitor, >0: pin systray to monitor X */
static unsigned int systrayonleft   = 0;   	/* 0: systray in the right corner, >0: systray on left of status text */
static unsigned int systrayspacing  = 2;   /* systray spacing */
static int systraypinningfailfirst  = 1;   /* 1: if pinning fails, display systray on the first monitor, False: display systray on the last monitor*/
static int showsystray        = 1;        /* 0 means no systray */
static int showbar            = 1;        /* 0 means no standard bar */
static int topbar             = 1;        /* 0 means standard bar at bottom */
static int extrabar           = 1;        /* 0 means no extra bar */
static char statussep         = ';';      /* separator between statuses */

#define ICONSIZE bh   /* icon size */
#define ICONSPACING 7 /* space between icon and title */

static char font[]            = "Iosevka Nerd Font:size=11";
static char dmenufont[]       = "Iosevka Nerd Font:size=11";
static const char *fonts[]    = { font };

static char normfgcolor[]     = "#a0a0ff";
static char normbgcolor[]     = "#11111b";
static char selbordercolor[]  = "#585ba0";
static char selfgcolor[]      = "#a6e3a1";

static char urgentcolor[]     = "#f38ba8";
static char *colors[][3]      = {
	/*                 fg           bg            border   */
	[SchemeNorm]   = { normfgcolor, normbgcolor,  normbgcolor },
	[SchemeSel]    = { selfgcolor,  normbgcolor,  selbordercolor },
	[SchemeUrg]    = { urgentcolor, normbgcolor,  urgentcolor },
  [SchemeTitle]  = { selfgcolor,  normbgcolor,  normbgcolor },
};

static const char *tags[] = { "۱", "۲", "۳", "۴", "۵", "۶", "۷", "۸", "۹"};

#include "rules.h"

/* layout(s) */
static float mfact              = 0.5; /* factor of master area size [0.05..0.95] */
static int nmaster              = 1;    /* number of clients in master area */
static int resizehints          = 1;    /* 1 means respect size hints in tiled resizals */
static const int lockfullscreen = 1; /* 1 will force focus on the fullscreen window */
static int attachdirection      = 0;    /* 0 default, 1 above, 2 aside, 3 below, 4 bottom, 5 top */

/* mouse scroll resize */
static const int scrollsensitivity    = 30; /* 1 means resize window by 1 pixel for each scroll event */

#include "layouts.c"
#include "fibonacci.c"
static const Layout layouts[] = {
	/* symbol     arrange function */
	{ "[T]",      tile },    /* first entry is default */
	{ "><>",      NULL },    /* no layout function means floating behavior */
	{ "[M]",      monocle },
	{ "[@]",      spiral },
 	{ "[D]",      dwindle },
	{ "|M|",      centeredmaster },
	{ ">M>",      centeredfloatingmaster },
	{ "[G]",      grid },
};

/* key definitions */
#define MODKEY Mod4Mask
#define LAUNCHKEY Mod4Mask|Mod1Mask
#define TAGKEYS(KEY,TAG) \
	{ MODKEY,                       KEY,      view,           {.ui = 1 << TAG} }, \
	{ MODKEY|ControlMask,           KEY,      toggleview,     {.ui = 1 << TAG} }, \
	{ MODKEY|ShiftMask,             KEY,      tag,            {.ui = 1 << TAG} }, \
	{ MODKEY|ControlMask|ShiftMask, KEY,      toggletag,      {.ui = 1 << TAG} },

/* helper for spawning shell commands in the pre dwm-5.0 fashion */
#define SHCMD(cmd) { .v = (const char*[]){ "/bin/sh", "-c", cmd, NULL } }

/* commands */
static const char *dmenucmd[] = { "dmenu_run", "-i", "-fn", dmenufont, "-nb", normbgcolor, "-nf", normfgcolor, "-sb", normbgcolor, "-sf", selfgcolor, NULL };
static const char *dmenudruncmd[] = { "j4dmrun", NULL};
static char dmenumon[2] = "0"; /* component of dmenucmd, manipulated in spawn() */

static const char *termcmd[]  = { "alacritty", NULL };
static const char *layoutmenu_cmd = "layoutmenu.sh";

static const char *upvol[] = {"pamixer", "-ui", "5", NULL};
static const char *downvol[] = {"pamixer", "-ud", "5", NULL};
static const char *mutevol[] = {"pamixer", "-t", NULL};
static const char *playpause[] = {"playerctl", "play-pause", NULL};
static const char *playnext[] = {"playerctl", "next", NULL};
static const char *playprev[] = {"playerctl", "previous", NULL};
static const char *brightup[] = {"xbacklight", "-inc", "25%", NULL};
static const char *brightdown[] = {"xbacklight", "-dec", "25%", NULL};
static const char *lockscreen[] = {"betterlockscreen", "-l", "blur", NULL};

#include "xresources.h"

#include <X11/XF86keysym.h>
#include "mpdcontrol.c"
#include "movestack.c"
#include "focusurgent.c"
#include "keys.h"
#include "mouse.h"

//Fin
