#include "Bubblewrap/Bubblewrap.hpp"
#include "Bubblewrap/Registers/BubblewrapRegister.hpp"
#include "Bubblewrap/Registers/SfmlRegisters.hpp"
#include "Bubblewrap/Math/Matrix3.hpp"

int main()
{
	Bubblewrap::Game::GameSettings settings;
	settings.WindowCount_ = 1;
	settings.WindowSettings_ = new Bubblewrap::Render::Window::WindowSettings[ 1 ];
	settings.WindowSettings_[ 0 ].Width_ = 800;
	settings.WindowSettings_[ 0 ].Height_ = 600;
	settings.WindowSettings_[ 0 ].Title_ = "Ludum Dare #32 - Mind Like A Bot";
	settings.WindowSettings_[ 0 ].Name_ = "Main";
	settings.WindowSettings_[ 0 ].Colour_ = Bubblewrap::Render::Colour( 0.8f, 0.8f, 0.8f );
	settings.WindowSettings_[ 0 ].Colour_ = Bubblewrap::Render::Colour( 1.0f, 0.0f, 0.0f );
	Bubblewrap::Logs::StaticLog::Instance()->SetLogLevel( Bubblewrap::Logs::StaticLog::WARNING );
	settings.Registers_.push_back( Bubblewrap::Registers::SfmlRegisters::RegisterUtilities );
	settings.Registers_.push_back( Bubblewrap::Registers::SfmlRegisters::RegisterAudio );
	settings.Registers_.push_back( Bubblewrap::Registers::SfmlRegisters::RegisterGraphics );
	settings.Resources_.push_back( "textures" );
	settings.Resources_.push_back( "shaders" );
	//settings.Paths_.push_back("MindLikeABot.exe");
	settings.Paths_.push_back("assets");
	settings.TypeRegistration_ = ( [ ]( Bubblewrap::Base::ObjectRegister* Register )
	{

	} );
	settings.Packages_.push_back( "basics.json" );
	settings.BaseObject_ = "basics:MainMenu";
	Bubblewrap::Game::Game Game;
	Game.Run( settings );
}