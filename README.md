# Personal-RTRXdwm-And-Desktop-Build
This Repository contains my RTRXdwm build along with related Desktop Files.

RTRXdwm - R. T. Redreovich's X dwm is a custom build of dwm. It contains tons of patches which you may require in a dynamic window manager. With some changes, you can easily use this.

Why did I rename it? It is pretty much a whole package you would need, and if supplemented with my configuration, really you have an entire Desktop Suite. Plus the Name looked cooler. B)

# Things to do

- Fix bug where Bottom bar flies upwards when using Picom-pijulius.
- Understand and rectify the Bottom bar.
- Patch Barpadding and status2d into the Bottom bar.
- Patch Fancybar? (idk I will think about it)
- Fix layoutmenu (currently the layout pops up but the indexing is broken and if you click on any layout, it simply doesn't run, though you can probably just use the hotkeys or layout cycle, do you even need this? might as well use the menu for something else...)

# Custom Kernel

For installing my custom kernel (Linux6.0-Xanmod Stable)

- [Build it yourself](https://notabug.org/Marcoapc/voidxanmodK)

- [Download my binaries for Linux6.0-Xanmod Stable and Headers](https://github.com/Red1922/Linux-Xanmod-Binaries-For-Void-Users)

# Attention

Before Compiling, remember to check the config.def.h file for personalized issues. As this build was created solely to suit my own needs and in accordance to my system. Addresses and Program Commands may not resonate with your system.

- Please note that only the patches inside the rtrxdwm-6.4/Patched folder are the ones that have been patched into my built. Any .diff or .patch in the build folder are just there for future patching and are currently in the process of being patched in. If you have already patched it or know how to patch it correctly without issues, do notify me.

# Desktop Previews

![Personal-RTRXdwm-And-Desktop-Build](https://github.com/Red1922/Personal-RTRXdWM-And-Desktop-Build/blob/main/Media/Screenshots/Term.png?raw=true)

![Personal-RTRXdwm-And-Desktop-Build](https://github.com/Red1922/Personal-RTRXdwm-And-Desktop-Build/blob/main/Media/Screenshots/TermWPicom.png?raw=true)

![Personal-RTRXdwm-And-Desktop-Build](https://github.com/Red1922/Personal-RTRXdwm-And-Desktop-Build/blob/main/Media/Screenshots/Preview.png?raw=true)

![Personal-RTRXdwm-And-Desktop-Build](https://github.com/Red1922/Personal-RTRXdwm-And-Desktop-Build/blob/main/Media/Screenshots/Conky.png?raw=true)


Workflow (Old)

https://imgur.com/uF0KU10

# Wallpaper

![Personal-RTRXdwm-And-Desktop-Build](https://github.com/Red1922/Personal-RTRXdwm-And-Desktop-Build/blob/main/Media/Wallpapers/4085047void.png?raw=true)

Refer my [main wallpaper repo](https://github.com/Red1922/Wallpapers) for more wallpapers.

# SLSTATUS

[Here](https://github.com/Red1922/slstatus)

# ST Build
[Here](https://github.com/Red1922/Personal-ST-build)

# Other Information

- I used [Void Base iso](https://voidlinux.org/download/) (GLIBC Live Image) for installation. (Previous setup used Artix Base Iso)

- Terminal: st; "[neofetch](https://github.com/dylanaraps/neofetch) | [lolcat](https://github.com/busyloop/lolcat)" to get rainbow coloured neofetch. (I do not use Alacritty any longer. Dot file is deprecated for this setup.)

- Shell: [ZSH](https://www.zsh.org/) (Some of my dotfiles and scripts may have `#!/bin/zsh` as the shebang, so replace it with `#!/bin/sh` or `#!/bin/bash` to make them work in case it doesn't.)
- ZSH Plugins: [ZSH-Autosuggestions](https://github.com/zsh-users/zsh-autosuggestions); [Fast-Syntax-Highlighting](https://github.com/zdharma-continuum/fast-syntax-highlighting) via [Oh My Zsh](https://github.com/ohmyzsh/ohmyzsh)

Steps to switch shell (for convenience)
```
sudo -s

chsh -s /bin/zsh root

exit

chsh -s /bin/zsh username
```

- NeoVim Theme: [NvChad](https://nvchad.com/)

- Emacs Theme: [DOOM Emacs](https://github.com/doomemacs/doomemacs)

- Icon Theme: [Candy Icons](https://github.com/EliverLara/candy-icons)

- Mouse Cursor Theme: LyraB Cursors (User) | Nordzy Cursors Light (Sudo)

- GTK Theme: [ABYSS INK](https://www.pling.com/p/1324963)

- GTK Appearance configured using [lxappearance](https://github.com/lxde/lxappearance).

- QT Appearance configured using [qt5ct](https://sourceforge.net/projects/qt5ct/).

- After installing qt5ct and qt5-styleplugins and configuring it, please add `QT_QPA_PLATFORMTHEME=qt5ct` to /etc/environment and restart your system for making qt apps respect your theming.

- File Manager: [Thunar](https://gitlab.xfce.org/xfce/thunar); Plugins and Utilities: thunar-archive-plugin, xarchiver, file-roller & tumblerd, I use a patched version of Thunar, refer [Thunar-extended](https://aur.archlinux.org/packages/thunar-extended) on the Arch User Repository. I also have Nemo because I botched the patch. :)

- Code & Text Editor: [Neovim](https://github.com/neovim/neovim) (Terminal).

- IDE: [VSCodium](https://github.com/VSCodium/vscodium) (Frankly I haven't opened Codium in a long time, Neovim4Life)

- Audio Visualizer: [CAVA](https://github.com/karlstav/cava)

- Music Player: MPD (Tip, use [mpd-rich-presence-discord](https://github.com/justas-d/mpd-rich-presence-discord) to get MPD as status on Discord.)

- I use [Pipewire](https://pipewire.org/) (additionally [pipewire-pulse](https://docs.pipewire.org/page_man_pipewire_pulse_1.html) to run Pulseaudio programs, [WirePlumber](https://pipewire.pages.freedesktop.org/wireplumber/) for Profile and Device Management and related packages + lib32 packages). (Please ommit my configuration if you do not have 7.1 Surround Sound Supporting Headphones. The Void Linux Pipewire template pre configures it systemwide so you just need to run it and it works OotB)

- Screenshot utilities used: [Scrot](https://github.com/dreamer/scrot) + [Xclip](https://github.com/astrand/xclip) (Lightweight and instant screenshots) and [Flameshot](https://flameshot.org/) (For in case I need to make edits to the Screenshot). (Scripts are included.)

- I am using [network-manager-applet](https://gitlab.gnome.org/GNOME/network-manager-applet) (`nmcli` / `nmtui` (terminal)).

Starting Services in Runit by symlinking:
```
sudo ln -s /etc/runit/sv/<service-name> /run/runit/service/
```

- I use [rEFInd](https://www.rodsbooks.com/refind/).

- Refer [This Article](https://deepu.tech/rust-terminal-tools-linux-mac-windows-fish-zsh/) for tools I have Switched over to. Aliases are present in my .zshrc.

- For issues please DM me on revolt.chat ---> `@R.T.Redreovič`
- or Discord ---> `@R.T.Redreovič#6804`

- [A good guide for Artix Linux users.](https://gist.github.com/themagicalmammal/37276c97897d40598e975f5e563252a6)

- [And for Void Linux users.](https://gist.github.com/themagicalmammal/e443d3c5440d566f8206e5b957ab1493)

- Some of these packages were available on AUR when I used Artix, on void, you might have to use xbps-src or compile from source.

# Special Thanks to

- EFLinux for a great [Artix Linux/Runit installation video guide.](https://www.youtube.com/watch?v=mIpZA6z-Ctk)

- Endeavour OS/BSPWM Community Edition for their [dotfiles.](https://github.com/EndeavourOS-Community-Editions/bspwm)

- My friends & many other people who brought me to GNU/Linux and helped me learn & troubleshoot.
