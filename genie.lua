dofile( "bubblewrap/Scripts/Bubblewrap.lua" )
dofile ( "bubblewrap/Scripts/Bubblewrap_Scripts.lua" )

-- Solution.
PsySolutionGame( "MiniLD59" )

SFML2DIR = "D:/Projects/libraries/SFML-2.2"

-- Build externals.
dofile ("bubblewrap/External/genie.lua")

loadLibraries {
	"sfml",
}

-- Build engine.
dofile ("bubblewrap/bubblewrap_genie.lua")

-- Build game source.
dofile ("./Source/genie.lua")

