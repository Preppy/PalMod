# PalMod
PalMod is a PALette MODification tool for classic fighting games, mostly centered around Capcom games.

<a href="https://github.com/Preppy/PalMod/tree/master/palmod">PalMod</a> is the active branch.  That's where I'm releasing binaries from.  Releases for major version increments will be found <a href="https://github.com/Preppy/PalMod/releases">here</a>.  Regular smaller updates and occasional betas/previews are published to https://zachd.com/palmod/releases .

PalMod Development Discord: https://discord.gg/Eqk5RHZbSE (for people that want to work directly on PalMod's code or image library)

PalMod Gallery Discord: https://discord.gg/SmcXK2mkZJ (for people that want to share PALette MODifications made with PalMod with each other, and/or benefit from other people's efforts)

# Extending PalMod
PalMod is designed to be extensible.

As a developer you should be able to use the <a href="https://github.com/Preppy/PalMod/tree/master/palmod/newgamedummy">NewGameDummy</a> template to add your new game in on rebuild.

As an end user, PalMod has a Developer Mode available under File : Load that lets you load any arbitrary file and view it as if it was palette data.  The <a href="https://zachd.com/palmod">PalMod site</a> has some guides on using the Extra Files that drive this mode.

If you have features or support that should be added to PalMod to benefit others, please hit us up.  The one caveat is that, for space and time considerations, the normal build of PalMod is going to focus solely on support for fighting games where such support in PalMod will in turn help support the growth of the associated fighting game community.  If you want to figure out how to palmod non-fighting games, that would not typically be something that we would integrate into PalMod -- but hopefully the tools and information we provide helps you figure out how to extend PalMod for your needs.

# Reporting Issues
Please either post them to the <a href="https://github.com/Preppy/PalMod/issues">Issues page</a> or for even faster responses use the "Problems" channel in the <a href="https://discord.gg/Eqk5RHZbSE">PalMod Development Discord</a>.

# Other Platforms
PalMod is a Windows application.  It should work on other platforms through Windows emulation tools such as WINE.  There may be bugs in your emulator: we will make a good faith attempt to work around emulator bugs if you let us know about them.

# History
PalMod was originally created in 2007 by DrewDos in conjunction with Magnetro, eidrian, and myself.  LKG is a mirror of the 2008 version of this code, when that development cycle ended.  This was version "1.22".  There are a number of further variants of 1.22: some binary hacks of it, and a couple recompiles.  In all cases I have folded every positive change I know of into the active branch.  There is also a very similar version of "1.22" at DrewDos's PalMod branch on GitHub.  PalMod development was resurrected in 2020 to incorporate all those hacked-in changes to the normal workflow, to add new games, and to add other new features and support.

Since that point, we've had a team of people interested in adding and extending support for their various games.  We've gone from the 2 initial games supported with the first release of PalMod (Third Strike and MvC2) to currently supporting over 250 games for a variety of hardware and color formats.
