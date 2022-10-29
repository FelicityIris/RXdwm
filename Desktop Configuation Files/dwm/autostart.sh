#!/bin/sh

# Startup Processes

# Autorandr
autorandr --change &

# slstatus
slstatus &

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

# Conky
#conky --config=/home/redreovich/.config/conky/conkymin.conf &
#conky --config=/home/redreovich/.config/conky/conkykeybind.conf &
#conky --config=/home/redreovich/.config/conky/conkympd.conf &

# Low Battery Notifier
sh ~/Scripts/low_bat_notifier.sh &

# Wallpaper and LockScreenUpdate
xwallpaper --zoom ~/Pictures/Wallpapers/4085047void.png
