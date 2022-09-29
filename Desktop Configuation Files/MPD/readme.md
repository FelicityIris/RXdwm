# In your `/home/username/.config/mpd, you are supposed to create

- A Folder: `playlists`

- `mpd.conf` as provided

- `mpd.db`: press `u` in ncmpcpp to update database

- `mpd.log`

- `mpd.pid`

- `mpdstate`

- `socket`

- `sticker.sql`

# Keep in mind that the `MPDHOST` in my config file has a personalized value therefore you will need to edit that as per your system. No `~/.config/mpd/socket` or `$HOME/.config/socket` do not work. Alternatively just provide localhost or ::1 or 127.0.0.1 as your MPDHOST (same addresses) but you won't be able to access Whole System File Browser without a socket.

# Please keep in mind that you will have to edit the MPDHOST variable in `dwm-6.2/mpdcontrol.c` file as well if you wish to use MPD hotkeys in DWM.
