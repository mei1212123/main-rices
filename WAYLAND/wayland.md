# WAYLAND INSTRUCTIONS

```
sudo pacman -S nvidia-open-dkms nvidia-utils lib32-nvidia-utils nvidia-settings vulkan-icd-loader lib32-vulkan-icd-loader
```

```
paru -S matcha-gtk-theme mcmojave-cursors hyprland-nvidia swaybg grim slurp xdg-desktop-portal-hyprland-git qt5-wayland qt6-wayland polkit-kde-agent waybar-hyprland-git wofi 
```
or
```
yay -S matcha-gtk-theme mcmojave-cursors hyprland-nvidia swaybg grim slurp xdg-desktop-portal-hyprland-git qt5-wayland qt6-wayland polkit-kde-agent waybar-hyprland-git wofi
```

for Nvidia bullshit 
in ```/etc/mkinitcpio.conf``` add ```nvidia nvidia_modeset nvidia_uvm nvidia_drm``` to ur modules
and in ur ```/etc/modprobe.d/nvidia.conf``` add ```options nvidia-drm modeset=1``` add ```nvidia-drm.modeset=1``` to your boot args in ```/boot/loader/XXX.conf``` for systemd boot or ```/etc/default/grub``` in grub 
so it will look like: 
```
options nvidia-drm.modeset=1
```
for systemd boot and
```
GRUB_CMDLINE_LINUX_DEFAULT="nvidia-drm.modeset=1"
```
for grub
