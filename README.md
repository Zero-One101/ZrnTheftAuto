# ZrnTheftAuto
A recreation of various elements of GTA V's Online mode

ZrnTheftAuto, or ZTA, is an attempt at using Unreal Engine 4 to replicate parts of GTA V's Online mode, with a primary focus
on non-mission play. This includes driving a variety of vehicles, PvP, multiple weapons, traffic AI, police AI, pedestrians
and more elements that the player tends to interact with while playing GTA Online. Above all, these should work in a
multiplayer setting, allowing multiple people to connect to a ZTA server. Since there is no master server, no data, such as
rank or money, will be saved after leaving a server. However, it may be possible to save data on a per-server basis.

# How to Use the Project
## Requirements
This requires the following:
- A version of Unreal Engine 4, equal to or greater than the current version of 4.12.0
- Visual Studio 2015, or other supported IDE

## Building the Project
These instructions assume a computer running Windows, with VS2015.
Clone or download the repository to your computer. Locate the .uproject file and right-click on it.
Select "Generate Visual Studio project files"
After generation has completed, double-click the .uproject file, and select the version of Unreal Engine 4 to build for.
Click "OK"

The necessary files should now be generated, and you should be able to open up the project in Unreal Engine 4.
