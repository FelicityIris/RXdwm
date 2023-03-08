/* commands */
static const char *dmenucmd[] = { "dmenu_run", "-i", "-fn", dmenufont, "-nb", normbgcolor, "-nf", normfgcolor, "-sb", normbgcolor, "-sf", selfgcolor, NULL };
static const char *dmenudruncmd[] = { "j4dmrun", NULL};
static char dmenumon[2] = "0"; /* component of dmenucmd, manipulated in spawn() */

//static const char *termcmd[]  = { "alacritty", "msg", "create-window", NULL };
static const char *termcmd[]  = { "alacritty", "msg", "create-window", "||", "alacritty", NULL };
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

static const Key keys[] = { /* modifier                     key                       function        argument */
	{ LAUNCHKEY,                    XK_p,                     spawn,          {.v = dmenucmd } },
	{ MODKEY|ShiftMask,             XK_p,                     spawn,          {.v = dmenudruncmd } },
	{ MODKEY,                       XK_p,                     spawn,          SHCMD("rofi -show drun") },
	//{ MODKEY,                       XK_Return,                spawn,          {.v = termcmd } },
	{ MODKEY,                       XK_Return,                spawn,          SHCMD("alacritty msg create-window || alacritty") },
	{ LAUNCHKEY,                    XK_Return,                spawn,          SHCMD("alacritty msg create-window --class=scratchpad || alacritty --class=scratchpad") },
	{ LAUNCHKEY,                    XK_1,                     spawn,          SHCMD("st -g 175x25 -c scratchpad") },
  { LAUNCHKEY,                    XK_2,                     spawn,          SHCMD("thunar") },
	{ LAUNCHKEY,                    XK_3,                     spawn,          SHCMD("firefox") },
	{ LAUNCHKEY,                    XK_4,                     spawn,          SHCMD("zathura") },
	{ LAUNCHKEY,                    XK_5,                     spawn,          SHCMD("alacritty msg create-window --class eva -t 'eva | Calculator' -e eva -f 64 || alacritty --class eva -t 'eva | Calculator' -e eva -f 64") },
	{ LAUNCHKEY,                    XK_6,                     spawn,          SHCMD("alacritty msg create-window --class btop -t BTOP++ -e btop || alacritty --class btop -t BTOP++ -e btop") },
	{ LAUNCHKEY,                    XK_7,                     spawn,          SHCMD("alacritty msg create-window --class btm -t Bottom -e btm || alacritty --class btm -t Bottom -e btm") },
	{ LAUNCHKEY,                    XK_8,                     spawn,          SHCMD("alacritty msg create-window --class ncmpcpp -t NCMPCPP -e ncmpcpp || alacritty --class ncmpcpp -t NCMPCPP -e ncmpcpp") },
	{ LAUNCHKEY,                    XK_9,                     spawn,          SHCMD("alacritty && notify-send 'Alacritty socket created.'") },
	{ MODKEY,                       XK_b,                     togglebar,      {0} },
	{ MODKEY,                       XK_b,                     toggleextrabar, {0} },
  { MODKEY|ShiftMask,             XK_b,                     toggleborder,   {0} },
	{ MODKEY,                       XK_j,                     focusstack,     {.i = +1 } },
	{ MODKEY,                       XK_k,                     focusstack,     {.i = -1 } },
	{ MODKEY,                       XK_i,                     incnmaster,     {.i = +1 } },
	{ MODKEY,                       XK_d,                     incnmaster,     {.i = -1 } },
	{ MODKEY,                       XK_h,                     setmfact,       {.f = -0.05} },
	{ MODKEY,                       XK_l,                     setmfact,       {.f = +0.05} },
	{ MODKEY|ShiftMask,             XK_h,                     setcfact,       {.f = +0.25} },
	{ MODKEY|ShiftMask,             XK_l,                     setcfact,       {.f = -0.25} },
	{ MODKEY|ShiftMask,             XK_o,                     setcfact,       {.f =  0.00} },
	{ MODKEY|ShiftMask,             XK_j,                     movestack,      {.i = +1 } },
	{ MODKEY|ShiftMask,             XK_k,                     movestack,      {.i = -1 } },
	{ MODKEY|ShiftMask,             XK_Return,                zoom,           {0} },
	{ MODKEY,                       XK_Tab,                   view,           {0} },
	{ MODKEY,                       XK_q,                     killclient,     {0} },
	{ MODKEY,                       XK_t,                     setlayout,      {.v = &layouts[0]} },
	{ MODKEY,                       XK_f,                     setlayout,      {.v = &layouts[1]} },
	{ MODKEY,                       XK_m,                     setlayout,      {.v = &layouts[2]} },
	{ MODKEY,                       XK_r,                     setlayout,      {.v = &layouts[3]} },
	{ MODKEY|ShiftMask,             XK_r,                     setlayout,      {.v = &layouts[4]} },
	{ MODKEY,                       XK_u,                     setlayout,      {.v = &layouts[5]} },
	{ MODKEY,                       XK_o,                     setlayout,      {.v = &layouts[6]} },
	{ MODKEY,                       XK_g,                     setlayout,      {.v = &layouts[7]} },
	{ MODKEY,                       XK_space,                 setlayout,      {0} },
	{ MODKEY|ShiftMask,             XK_space,                 togglefloating, {0} },
	{ MODKEY|ShiftMask,             XK_f,                     togglefullscr,  {0} },
	{ MODKEY,                       XK_Down,                  moveresize,     {.v = "0x 25y 0w 0h" } },
	{ MODKEY,                       XK_Up,                    moveresize,     {.v = "0x -25y 0w 0h" } },
	{ MODKEY,                       XK_Right,                 moveresize,     {.v = "25x 0y 0w 0h" } },
	{ MODKEY,                       XK_Left,                  moveresize,     {.v = "-25x 0y 0w 0h" } },
	{ MODKEY|ShiftMask,             XK_Down,                  moveresize,     {.v = "0x 0y 0w 25h" } },
	{ MODKEY|ShiftMask,             XK_Up,                    moveresize,     {.v = "0x 0y 0w -25h" } },
	{ MODKEY|ShiftMask,             XK_Right,                 moveresize,     {.v = "0x 0y 25w 0h" } },
	{ MODKEY|ShiftMask,             XK_Left,                  moveresize,     {.v = "0x 0y -25w 0h" } },
	{ MODKEY,                       XK_0,                     view,           {.ui = ~0 } },
	{ MODKEY|ShiftMask,             XK_0,                     tag,            {.ui = ~0 } },
	{ MODKEY,                       XK_comma,                 focusmon,       {.i = -1 } },
	{ MODKEY,                       XK_period,                focusmon,       {.i = +1 } },
  { MODKEY|ControlMask,           XK_u,                     focusurgent,    {0} },
	{ MODKEY|ShiftMask,             XK_comma,                 tagmon,         {.i = -1 } },
	{ MODKEY|ShiftMask,             XK_period,                tagmon,         {.i = +1 } },
  { Mod1Mask,             		    XK_Tab,                   altTabStart,	   {0} },
	{ MODKEY,                       XK_minus,                 setgaps,        {.i = -1 } },
	{ MODKEY,                       XK_equal,                 setgaps,        {.i = +1 } },
	{ MODKEY|ShiftMask,             XK_equal,                 setgaps,        {.i = 0  } },
	TAGKEYS(                        XK_1,                      0)
	TAGKEYS(                        XK_2,                      1)
	TAGKEYS(                        XK_3,                      2)
	TAGKEYS(                        XK_4,                      3)
	TAGKEYS(                        XK_5,                      4)
	TAGKEYS(                        XK_6,                      5)
	TAGKEYS(                        XK_7,                      6)
	TAGKEYS(                        XK_8,                      7)
	TAGKEYS(                        XK_9,                      8)
	{ MODKEY|ShiftMask,             XK_c,                     quit,           {0} },
	{ MODKEY|ControlMask|ShiftMask, XK_q,                     quit,           {1} },
	{ MODKEY,                       XK_F1,                    mpdchange,      {.i = -1} },
	{ MODKEY,                       XK_F2,                    mpdchange,      {.i = +1} },
	{ MODKEY,                       XK_Escape,                mpdcontrol,     {0} },
	{0,                             XF86XK_AudioLowerVolume,  spawn,          {.v = downvol} },
	{0,                             XF86XK_AudioMute,         spawn,          {.v = mutevol} },
	{0,                             XF86XK_AudioRaiseVolume,  spawn,          {.v = upvol} },
	{0,                             XF86XK_AudioPlay,         spawn,          {.v = playpause} },
	{0,                             XF86XK_AudioNext,         spawn,          {.v = playnext} },
	{0,                             XF86XK_AudioPrev,         spawn,          {.v = playprev} },
	{0,                             XF86XK_MonBrightnessUp,   spawn,          {.v = brightup} },
	{0,                             XF86XK_MonBrightnessDown, spawn,          {.v = brightdown} },
	{ MODKEY,                       XK_x,                     spawn,          {.v = lockscreen} },
  {ShiftMask,                     XK_Print,                 spawn,          SHCMD("flameshot gui") },
	{0,                             XK_Print,                 spawn,          SHCMD("screenshot-scrot-xclip.sh") },
	{ MODKEY,                       XK_Print,                 spawn,          SHCMD("screenshot-scrot-full.sh") },
	{ MODKEY|ShiftMask,             XK_e,                     spawn,          SHCMD("dmenu-power") },
	{ LAUNCHKEY,                    XK_space,                 spawn,          SHCMD("bash switch") },
	{ LAUNCHKEY,                    XK_c,                     spawn,          SHCMD("clipmenu -i") },
	{ LAUNCHKEY,                    XK_x,                     spawn,          SHCMD("mpdmenu -l :: -b") },
	{ LAUNCHKEY,                    XK_z,                     spawn,          SHCMD("mpdmenu -p :: -b") },
	{ LAUNCHKEY,                    XK_w,                     spawn,          SHCMD("dmenu_websearch") },
};
