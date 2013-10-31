/*
 * Spider.h
 *
 *  Created on: 13 okt 2013
 *      Author: alecca
 */

#ifndef SPIDER_H_
#define SPIDER_H_
#include <lua.h>
#include <string>
#include <map>
#include <vector>
#include <iostream>
#include "vendor/luahtml/luahtml.h"
#include "luascript/luascript.h"
#include <luabind/luabind.hpp>
#include <libxml/parser.h>
#include <libxml/tree.h>
#include <libxml/xmlIO.h>
using namespace std;
typedef void (*spider_render_element)(xmlElement *);
static int __printx(lua_State *state) ;
namespace spider {

class Spider {
public:
	Spider();
	~Spider();
	lua_State *luaState() {
		return _luaState;
	}

    void setTemplate(string* newTemplate) {
        _template = newTemplate;
	}
	void preprocess();
	void render();
    luabind::object *data() {
        return m_data;
    }
    void setData(luabind::object *data);

	xmlDocPtr documentElement() {
		return _document;
	}
	void addRenderCallback(spider_render_element callback) {
		this->on_render_element = callback;
	}
    string *xml() {
		return _xml;
    }

private:
    luabind::object *m_data;
    string *_xml;
	spider_render_element on_render_element;
	xmlDocPtr _document;
    string *_template;
	lua_State *_luaState;
};

} /* namespace spider */
#endif /* SPIDER_H_ */
