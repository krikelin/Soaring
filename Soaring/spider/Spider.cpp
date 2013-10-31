/*
 * Spider.cpp
 *
 *  Created on: 13 okt 2013
 *      Author: alecca
 */

#include "Spider.h"
static char *_printx_buffer;
static int __printx(lua_State *state) {
	int args = lua_gettop(state);
	const char * str = lua_tostring(state, 1);
	strcat(_printx_buffer, str);
	return 2;
}
namespace spider {
Spider::Spider() {
	// TODO Auto-generated constructor stub
    _luaState = lua_open();
    luaL_openlibs(_luaState);
    lua_register(_luaState, "__printx", __printx);
    luabind::open(_luaState);


}
void Spider::setData(luabind::object *data) {
    m_data = data;
}

void Spider::preprocess() {

    char * templ = new char  [_template->length() + 1];
    _printx_buffer = new char[_template->length() * 100];
	memset(_printx_buffer, 0, sizeof(_printx_buffer));
    strcpy(templ, _template->c_str());
    luabind::object obj = luabind::globals(this->luaState());
    obj["data"] = *(this->data());
	luaHtml_call(this->_luaState, templ, LUAHTML_MODE_STRING);
	/**
	 * Create template
	 */
	//lua_getglobal(_luaState, "result");
	const char *xmlData = _printx_buffer;

	// Parse xml
	this->_document = xmlParseMemory(xmlData, sizeof(xmlData));
	cout << xmlData;
    free(_printx_buffer);
    this->_xml = new    std::string(xmlData);
	if(!_document) {

	}
}


Spider::~Spider() {
	// TODO Auto-generated destructor stub
	delete _document;
}

} /* namespace spider */
