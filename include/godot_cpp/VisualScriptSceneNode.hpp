#ifndef VISUALSCRIPTSCENENODE_H
#define VISUALSCRIPTSCENENODE_H

#if defined(_WIN32) && defined(_GD_CPP_BINDING_IMPL)
#  define GD_CPP_BINDING_API __declspec(dllexport)
#elif defined(_WIN32)
#  define GD_CPP_BINDING_API __declspec(dllimport)
#else
#  define GD_CPP_BINDING_API
#endif


#include "core/CoreTypes.hpp"

#include <godot.h>



#include "VisualScriptNode.hpp"


namespace godot {



class GD_CPP_BINDING_API VisualScriptSceneNode : public VisualScriptNode {
public:

	void _init();



	void set_node_path(const NodePath path);
	NodePath get_node_path();
};

}
#endif
