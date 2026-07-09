# Coop Deluxe for Legacy Systems

This fork aims to add legacy hardware and software compatibility to run sm64coopDX on older hardware.

## Why?

**Why not?** Coop Deluxe can run perfectly on low power devices (e.g. R36S) and on OpenGL 1.0 devices, but the original devs won't add compatibility because "there is no one to test/there is no real need". Keep in mind that there are people who can't afford a modern PC, so this is a real benefit to them.

## Goals
- Full compatibility in DirectX9, OpenGL pre-4.0 and Glide (Voodoo3) devices.
- Compatibility with Windows 2000 and above without the need of Extended Kernel or similar
- Fix glitches related to old OpenGL versions on iGPUs (for example, texture glitches on Intel HD Graphics for Arrandale)
- Optimizations for low RAM usage (might be 100MB, but can be higher according to the possibilities) 

# Original README.MD
![sm64coopdx Logo](textures/segment2/custom_coopdx_logo.rgba32.png)

sm64coopdx is an online multiplayer project for the Super Mario 64 PC port that synchronizes all entities and every level for multiple players. The project was started by the Coop Deluxe Team. The purpose is to actively maintain and improve, but also continue sm64ex-coop, created by djoslin0. More features, customization, and power to the Lua API allow modders and players to enjoy Super Mario 64 more than ever!

Feel free to report bugs or contribute to the project.

## Initial Goal (Accomplished)
Create a mod for the PC port where multiple people can play together online.

Unlike previous multiplayer projects, this one synchronizes enemies and events. This allows players to interact with the same world at the same time.

Interestingly enough though, the goal of the project has slowly evolved over time from simply just making a Super Mario 64 multiplayer mod to constantly maintaining and improving the project (notably the Lua API.)

## Documentation

sm64coopdx is moddable via Lua, similar to Roblox and Garry's Mod's Lua APIs. To get started, click [here](docs/lua/lua.md) to see the Lua documentation. If you want to contribute to the repo, you can view the C documentation [here](docs/c/c.md).

## Wiki
The wiki is made using GitHub's wiki feature, you can go to the wiki tab or click [here](https://github.com/coop-deluxe/sm64coopdx/wiki).

## Community
We have an official Discord server open to the public [here](https://discord.gg/TJVKHS4).
