# Pipewire
killall pipewire
killall wireplumber
killall pipewire-pulse

exec pipewire &disown
exec wireplumber &disown
exec pipewire-pulse &disown

# MPD
killall mpd

exec mpd --no-daemon

