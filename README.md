# Personal-RTRXdwm-And-Desktop-Build

This Project has been Archived. Please refer the Newer Super Repository for the Desktop Configuration and Theming Files

- Contacts
- - Matrix: `@r.t.redreovic:envs.net`
- - Email: [r.t.redreovich.public.fnto7@8shield.net](mailto:r.t.redreovich.public.fnto7@8shield.net)

![Personal-RTRXdwm-And-Desktop-Build](https://github.com/Red1922/Personal-RTRXdWM-And-Desktop-Build/blob/main/Media/Core/rtrxdwmcore.png?raw=true)

This Repository contains the files and configurations related to RTRXdwm.

RTRXdwm - RT Redreovič's X dynamic window manager is a custom build of dwm. It contains several patches one may require in a dynamic window manager. With marginal changes, one can easily use this portably.

Why was the Window Manager renamed? It is a whole package one would need to set up a functional X Display Server as well as a couple more features.

# Things that could have be done

- Fix layoutmenu
- - Currently the layout pops up but the indexing is broken and if one clicks on any layout, it simply doesn't run, though one can probably just use the hotkeys or layout cycle.

- Fix Menu Bug in Electron Apps.

- Fix Focus Ghosting in Applications after switching tags.

# Attention

Before Compiling, remember to check the \*.h files for personalized issues.

- Please note that only the patches inside the rtrxdwm-6.4/Patched/ directory are the ones that have been patched into the build. Any .diff or .patch in the rtrxdwm-6.4/Unpatched/ directory were removed at an earlier date for any reason.

# Desktop Previews (Outdated)

![Personal-RTRXdwm-And-Desktop-Build](https://github.com/Red1922/Personal-RTRXdWM-And-Desktop-Build/blob/main/Media/Screenshots/Term.png?raw=true)

![Personal-RTRXdwm-And-Desktop-Build](https://github.com/Red1922/Personal-RTRXdwm-And-Desktop-Build/blob/main/Media/Screenshots/TermWPicom.png?raw=true)

![Personal-RTRXdwm-And-Desktop-Build](https://github.com/Red1922/Personal-RTRXdwm-And-Desktop-Build/blob/main/Media/Screenshots/Preview.png?raw=true)

![Personal-RTRXdwm-And-Desktop-Build](https://github.com/Red1922/Personal-RTRXdwm-And-Desktop-Build/blob/main/Media/Screenshots/Conky.png?raw=true)


# Wallpaper (Outdated)

![Personal-RTRXdwm-And-Desktop-Build](https://github.com/Red1922/Personal-RTRXdwm-And-Desktop-Build/blob/main/Media/Wallpapers/SWARM-1920x1080.png?raw=true)

Refer the [main wallpaper repo](https://github.com/Red1922/Wallpapers) for more wallpapers.

# SLSTATUS

[Here](https://github.com/Red1922/slstatus)

# ST Build (No Longer in Usage)
[Here](https://github.com/Red1922/Personal-ST-build)

# Other Information

- The [Void Linux Base iso](https://voidlinux.org/download/) (GLIBC Live Image) was used for installation.

- Terminal: Alacritty; "[neofetch](https://github.com/dylanaraps/neofetch) | [lolcat](https://github.com/busyloop/lolcat)" to get rainbow coloured neofetch.

- Shell: [ZSH](https://www.zsh.org/)

- NeoVim Theme: [NvChad](https://nvchad.com/) (No Longer in Usage. Replaced by Helix Editor)

- Emacs Theme: [DOOM Emacs](https://github.com/doomemacs/doomemacs)

- Icon Theme: Papirus Icons

- Mouse Cursor Theme: [Nordzy Cursors](https://github.com/alvatip/Nordzy-cursors

- GTK Theme: Catppuccin Altar

- GTK Appearance configured using [lxappearance](https://github.com/lxde/lxappearance).

- QT Appearance configured using [qt5ct](https://sourceforge.net/projects/qt5ct/).

- After installing qt5ct and qt5-styleplugins and configuring it, please add `QT_QPA_PLATFORMTHEME=qt5ct` to /etc/environment and restart your system for making qt apps respect your theming.

- File Manager: None

- Code & Text Editor: Helix (Terminal).

- IDE: Helix, [VSCodium](https://github.com/VSCodium/vscodium) (for when the need arises)

- Audio Visualizer: [CAVA](https://github.com/karlstav/cava)

- Music Player: MPD (Client: NCMPCPP)

- Screenshot utilities used: [Scrot](https://github.com/dreamer/scrot) + [Xclip](https://github.com/astrand/xclip) (Lightweight and instant screenshots) and [Flameshot](https://flameshot.org/) (For in case the Screenshots need to be edited).

- [Good Guide on Void Linux Optimization.](https://gist.github.com/themagicalmammal/e443d3c5440d566f8206e5b957ab1493)

- [Decent Rust Replacements for GNU Coreutil Prorams.](https://deepu.tech/rust-terminal-tools-linux-mac-windows-fish-zsh/)

# Special Thanks to

- EFLinux for a great [Artix Linux (Runit) installation video guide.](https://www.youtube.com/watch?v=mIpZA6z-Ctk)

- Endeavour OS/BSPWM Community Edition for their [dotfiles.](https://github.com/EndeavourOS-Community-Editions/bspwm)

- My friends & many other people who brought me to GNU/Linux and helped me learn & troubleshoot.
