# Personal-DWM-and-desktop-Build
This Repository contains my DWM build along with related Desktop Files.

# Custom Kernel

For installing my custom kernel (Linux6.0-Xanmod Stable)

- [Build it yourself](https://notabug.org/Marcoapc/voidxanmodK)

- [Download my binaries for Linux6.0-Xanmod Stable and Headers](https://github.com/Red1922/Linux-Xanmod-Binaries-For-Void-Users)

# Attention

Before Compiling, remember to check the config.def.h file for personalized issues. As this build was created solely to suit my own needs and in accordance to my system. Addresses and Program Commands may not resonate with your system.

- Please note that only the patches inside the dwm-6.4/Patched folder are the ones that have been patched into my built. Any .diff or .patch in the build folder are just there for future patching and are currently in the process of being patched in. If you have already patched it or know how to patch it correctly without issues, do notify me.

# Desktop Previews

![Personal-DWM-and-desktop-Build](https://github.com/Red1922/Personal-DWM-and-desktop-Build/blob/main/Media/Screenshots/Term.png?raw=true)

![Personal-DWM-and-desktop-Build](https://github.com/Red1922/Personal-DWM-and-desktop-Build/blob/main/Media/Screenshots/TermWPicom.png?raw=true)

![Personal-DWM-and-desktop-Build](https://github.com/Red1922/Personal-DWM-and-desktop-Build/blob/main/Media/Screenshots/Preview.png?raw=true)

![Personal-DWM-and-desktop-Build](https://github.com/Red1922/Personal-DWM-and-desktop-Build/blob/main/Media/Screenshots/Conky.png?raw=true)


Workflow (Old)

https://imgur.com/uF0KU10

# Wallpaper

![Personal-DWM-and-desktop-Build](https://github.com/Red1922/Personal-DWM-and-desktop-Build/blob/main/Media/Wallpapers/4085047void.png?raw=true)

Refer my [main wallpaper repo](https://github.com/Red1922/Wallpapers) for more wallpapers.

# SLSTATUS

[Here](https://github.com/Red1922/slstatus)

# ST Build
[Here](https://github.com/Red1922/Personal-ST-build)

# Other Information

- I used Void Base iso for installation. (Previous setup used Artix Base Iso)

- Terminal: st; `neofetch | lolcat` to get rainbow coloured neofetch. (I do not use Alacritty any longer. Dot file is deprecated for this setup.)

- Shell: ZSH; (Some of my dotfiles and scripts may have `#!/bin/zsh` as the shebang, so replace it with `#!/bin/sh` or `#!/bin/bash` to make them work in case it doesn't.)

Steps to switch shell (for convenience)
```
sudo -s

chsh -s /bin/zsh root

exit

chsh -s /bin/zsh username
```

- NeoVim Theme: [NvChad](https://nvchad.com/)

- Emacs Theme: [DOOM Emacs](https://github.com/doomemacs/doomemacs)

- Icon Theme: Candy Icons

- Mouse Cursor Theme: Nordzy Cursors (Light)

- GTK Theme: Midnight Blue

- GTK Appearance configured using lxappearance.

- QT Appearance configured using qt5ct.

- After installing qt5ct and qt5-styleplugins and configuring it, please add `QT_QPA_PLATFORMTHEME=qt5ct` to /etc/environment and restart your system for making qt apps respect your theming.

- File Manager: Thunar; Plugins and Utilities: thunar-archive-plugin, xarchiver, file-roller & tumblerd

- Code & Text Editor: NVim (Terminal).

- IDE: VSCodium.

- Audio Visualizer: cava

- Music Player: MPD (Tip, use mpd-rich-presence-discord to get MPD as status on Discord.)

- I use pipewire (additionally pipewire-pulse, wireplumber and related packages + lib32 packages).

- Screenshot utilities used: Scrot + Xclip (Lightweight and instant screenshots) and Flameshot (For in case I need to make edits to the Screenshot).

- I am using network-manager-applet (`nmcli` / `nmtui` (terminal)).

Starting Services in Runit by symlinking
```
sudo ln -s /etc/runit/sv/<service-name> /run/runit/service/
```

- I use rEFInd.

- For issues please DM me on revolt.chat ---> `@R.T.Redreovič`
- or Discord ---> `@R.T.Redreovič#6804`

- [A good guide for Artix Linux users.](https://gist.github.com/themagicalmammal/37276c97897d40598e975f5e563252a6)

- [And for Void Linux users.](https://gist.github.com/themagicalmammal/e443d3c5440d566f8206e5b957ab1493)

- Some of these packages were available on AUR when I used Artix, on void, you might have to use xbps-src or compile from source.

# Special Thanks to

- EFLinux for a great [Artix Linux/Runit installation video guide.](https://www.youtube.com/watch?v=mIpZA6z-Ctk)

- Endeavour OS/BSPWM Community Edition for their [dotfiles.](https://github.com/EndeavourOS-Community-Editions/bspwm)

- My friends & many other people who brought me to GNU/Linux and helped me learn & troubleshoot.
