#!/bin/sh

# Startup Processes

# Autorandr
autorandr --change &

# slstatus
slstatus &

# Picom (Compositor)

#picom -fb --experimental-backends &

# System Tray
#trayer --align center --SetDockType true --SetPartialStrut true --expand true --width 7 --transparent true --alpha 0 --tint 0x100a40 --height 17 &

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

# Problem?
#xsetroot -name "    Red @ Artix Linux [RUNIT] [DWMv6.2] ; This user supports the eternal science of Marxism-Leninism-Maoism, Principally Maoism. Long Live the Masses! Long Live the Revolution! Long Live the Revolutionary Communist Leaders! Combat the vicious Imperialist and Fascist Filth." &

# Wallpaper and LockScreenUpdate
xwallpaper --zoom ~/Pictures/Wallpapers/SolMount.jpg
