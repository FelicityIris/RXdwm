/*
 * Xresources preferences to load at startup
 */
ResourcePref resources[] = {
		{ "borderpx",          	      INTEGER,  &borderpx },
		{ "gappx",          	        INTEGER,  &gappx },
		{ "snap",          		        INTEGER,  &snap },
		{ "scalepreview",             INTEGER,  &scalepreview },
		{ "systraypinning",           INTEGER,  &systraypinning },
		{ "systrayonleft",            INTEGER,  &systrayonleft },
		{ "systrayspacing",           INTEGER,  &systrayspacing },
		{ "systraypinningfailfirst",  INTEGER,  &systraypinningfailfirst },
		{ "showsystray",              INTEGER,  &showsystray },
		{ "showbar",          	      INTEGER,  &showbar },
		{ "topbar",          	        INTEGER,  &topbar },
		{ "extrabar",          	      INTEGER,  &extrabar },
		{ "statussep",          	    STRING,   &statussep },
    
    { "font",                     STRING,   &font },
		{ "dmenufont",                STRING,   &dmenufont },

		{ "normbgcolor",              STRING,   &normbgcolor },
		{ "normfgcolor",              STRING,   &normfgcolor },
		{ "selbordercolor",           STRING,   &selbordercolor },
		{ "selfgcolor",               STRING,   &selfgcolor },
		
    { "urgentcolor",              STRING,   &urgentcolor },
		
    { "mfact",      	 	          FLOAT,    &mfact },
		{ "nmaster",          	      INTEGER,  &nmaster },
		{ "resizehints",       	      INTEGER,  &resizehints },
		{ "attachdirection",      	 	INTEGER,  &attachdirection },
};
