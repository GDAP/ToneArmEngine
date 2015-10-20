#include "OpenGLBasicPass.h"
#include <GL\glew.h>
#include "OpenGLRenderModule.h"
#include "Engine.h"

namespace vgs {
IMPLEMENT_RTTI( OpenGLBasicPass, RenderPass )
/*
========
OpenGLBasicPass::CreateWithPriority

	Creates the pass and sets the priority.
========
*/
OpenGLBasicPass* OpenGLBasicPass::CreateWithPriority( unsigned int priority ) {
	OpenGLBasicPass* pass = new OpenGLBasicPass();
	if ( pass ) {
		pass->SetPassType( PassType::DIFFUSE );
		pass->SetPriority( priority );
		return pass;
	} else {
		delete pass;
		return NULL;
	}
}
/*
========
OpenGLBasicPass::BeginPass

	Enables required things on GPU.
========
*/
void OpenGLBasicPass::BeginPass( void ) {
	glEnable( GL_DEPTH_TEST );
}
/*
========
OpenGLBasicPass::BeginPass

	Resets GL State.
========
*/
void OpenGLBasicPass::FinishPass( void ) {
	glDisable( GL_DEPTH_TEST );
}
/*
========
OpenGLBasicPass::ProcessRenderable

	Called for each object being rendered.
========
*/
void OpenGLBasicPass::ProcessRenderable( Renderable* obj ) {
	int i = glGetError();
	if (i > 0) {
		int j = 0;
	}
	obj->PreRender();
	i = glGetError();
	if (i > 0) {
		int j = 0;
	}
	obj->Render();
	i = glGetError();
	if (i > 0) {
		int j = 0;
	}
	obj->PostRender();
	i = glGetError();
	if (i > 0) {
		int j = 0;
	}
}
}