#ifndef __OPENGLRENDERERSETTINGS_H__
#define __OPENGLRENDERERSETTINGS_H__

#include <glm\glm.hpp>
namespace vgs {

struct OpenGLRendererSettings {
	unsigned int	majorVersion;
	unsigned int	minorVersion;

	unsigned int	frameRateCap;

	glm::vec4		clearColor;

	OpenGLRendererSettings( void ) :
		majorVersion( 3 ),
		minorVersion( 2 ),
		frameRateCap( 30 ),
		clearColor( 0.14f, 0.82f, 0.66f, 1.0f )
	{}
};

}

#endif //__OPENGLRENDERSETTINGS_H__