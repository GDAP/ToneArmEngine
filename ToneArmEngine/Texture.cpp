#include "Texture.h"

namespace vgs {
/*
========
Texture::Texture

	Texture default constructor
========
*/
Texture::Texture( void ) :
	m_textureType( TextureType::DIFFUSE ),
	m_referenceCount( 1 )
{}
/*
========
Texture::~Texture

	Texture destructor
========
*/
Texture::~Texture( void ) 
{}
/*
========
Texture::Duplicate

	Duplicates the texture.
========
*/
Texture* Texture::Duplicate( void ) {
	++m_referenceCount;
	return this;
}
/*
========
Texture::Destroy

	Destorys the texture
========
*/
void Texture::Destroy( void ) {
	--m_referenceCount;
	if ( m_referenceCount == 0 ) {
		delete this;
	}
}
}