#!/bin/bash

#runsvdir ~/.runit/runsvdir &

# Define Smart Autostart Command
run() {
  if ! pgrep -f "$1" ;
  then
    "$@"
  fi
}

# Audio
run pipewire &
run mpd &

# Environment Variables
#export QT_QPA_PLATFORMTHEME=qt5ct

# Processes
# Autorandr
autorandr --change &

# Session
#lxsession & # Bugging about some error immediately after login
run lxqt-policykit-agent &
#run lxqt-session &

# Keyboard
setxkbmap us &                    # Set Keyboard as US (ANSI)
xset r rate 200 55 &              # Set Keyboard Delay & Repeat Rate (Fast & Smooth Keyboard)
#setxkbmap -option compose:ralt &  # Set Alt Graph Key as Compose Key
setxkbmap -option compose:rctrl &  # Set Right Ctrl Key as Compose Key

# Cursor
xsetroot -cursor_name left_ptr &  # Set left_ptr as default cursor

# X11
#xbanish -d -t 7 -s &              # Hides cursor on mousepress | May bug out sometimes
run unclutter --timeout 5 --jitter 20 --ignore-scrolling &  # Hides cursor when not in use | Found it more preferable

# Compositor
run picom &
#picom --config=$HOME/.config/picom/picomlite.conf & # A Lighter config without Blur and rounded corners turned off for terminals and a few programs.

# slstatus
run slstatus &

# Network Manager Applet
run nm-applet --indicator &

# IWD (IWGTK) Applet
run snixembed --fork & # Needed to embed iwgtk indicator on dwm/awesome/i3
#iwgtk -i &

# Blutooth Manager Applet
run blueman-applet &

bluetoothctl power off &

# Volume Control Applet
#sleep 10 && run pa-applet & # Due to Race Conditions with Pipewire

# Notifications Daemon
run dunst &

# Playerctl Daemon
run playerctld &

# MPD Notifications
sleep 10 && run musnify-mpd &

# mpDris2
sleep 10 && run mpDris2 &

# MPD to LibreFM scrobbler
sleep 10 && run mpdas &

# Emacs
#run emacs --daemon &

# Clipmenu
run clipmenud &

# Android to Linux Notifications Server
#run a2ln &

# Conky
#run conky --config=/home/redreovich/.config/conky/conkymin.conf &
#run conky --config=/home/redreovich/.config/conky/conkykeybind.conf & # The SysMons are cool but cause stuttering plus not really essential on a daily use case.
#run conky --config=/home/redreovich/.config/conky/conkympd.conf &

# Low Battery Notifier
#~/Scripts/bat_notifier.sh &
#run xfce4-power-manager &
# run lxqt-powermanagement &

# Wallpaper and LockScreenUpdate
#xwallpaper --zoom ~/Pictures/Wallpapers/FV/SWARM-GXB-1920x1080.png                   # Razer
#xwallpaper --zoom ~/Pictures/Wallpapers/FV/SCATTER-GXB-1920x1080.png                 # Razer
#xwallpaper --zoom ~/Pictures/Wallpapers/blue-firewatch-hd.jpg                        # Firewatch
#xwallpaper --zoom ~/Pictures/Wallpapers/flame-firewatch-hd.jpg &                     # Firewatch
#xwallpaper --zoom ~/Pictures/Wallpapers/Catppuccin/mandelbrot_gap_blue.png &         # Catppuccin | Mandelbrot
#xwallpaper --zoom ~/Pictures/Wallpapers/Catppuccin/Bridge.jpg &                      # Catppuccin | Landscape
#xwallpaper --zoom ~/Pictures/Wallpapers/Firewatch/firewatch-dusksky &                # Firewatch | Landscape
#xwallpaper --zoom ~/Pictures/Wallpapers/Void/VoidLinuxMinimalGreenNameCatp.png &     # Void | Catppuccin Mocha | Name
#xwallpaper --zoom ~/Pictures/Wallpapers/Void/VoidLinuxMinGreenNameCatp.png &          # Void | Catppuccin Mocha - Darker | Name
#xwallpaper --zoom ~/Pictures/Wallpapers/Void/VoidGamerCatp.png &                     # Void | Wall Geometry
#xwallpaper --zoom ~/Pictures/Wallpapers/RoyalBlueWaves1.jpg
xwallpaper --zoom ~/Pictures/Wallpapers/FV/wp9710376-razer-live-wallpapers.jpg

# Screensaver
#xscreensaver --no-splash # Will turn on when needed.

# Startup Sound
#mpv --no-video ~/Core/borealis_startup_4.mp3 &

# Fin
notify-send --icon=~/Pictures/Core/VoidVoidedLogo.png  "Welcome" "To Void Linux on RTRXdwm"
