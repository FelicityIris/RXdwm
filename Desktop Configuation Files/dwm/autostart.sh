#!/bin/sh

# Startup Processes

# Autorandr
autorandr --change &

# slstatus
slstatus &

# Picom (Compositor)

#picom -fb --experimental-backends &

# Network-Applet Daemon

nm-applet --indicator &

#Blutooth-Applet Daemon

blueman-applet &

# Notifications Daemon

dunst &

# Cursor

xsetroot -cursor_name left_ptr &

# Terminal
st &

# Low Battery Notifier

sh ~/.config/bspwm/scripts/low_bat_notifier.sh &

# Wallpaper and LockScreenUpdate
#xwallpaper --zoom ~/Pictures/Wallpapers/SolMount.jpg
xwallpaper --zoom ~/Pictures/Wallpapers/SolShip1.png
