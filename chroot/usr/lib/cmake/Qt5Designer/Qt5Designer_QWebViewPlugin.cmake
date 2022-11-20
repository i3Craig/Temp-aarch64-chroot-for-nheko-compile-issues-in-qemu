
add_library(Qt5::QWebViewPlugin MODULE IMPORTED)


_populate_Designer_plugin_properties(QWebViewPlugin RELEASE "designer/libqwebview.so" FALSE)

list(APPEND Qt5Designer_PLUGINS Qt5::QWebViewPlugin)
set_property(TARGET Qt5::Designer APPEND PROPERTY QT_ALL_PLUGINS_designer Qt5::QWebViewPlugin)
set_property(TARGET Qt5::QWebViewPlugin PROPERTY QT_PLUGIN_TYPE "designer")
set_property(TARGET Qt5::QWebViewPlugin PROPERTY QT_PLUGIN_EXTENDS "")
set_property(TARGET Qt5::QWebViewPlugin PROPERTY QT_PLUGIN_CLASS_NAME "QWebViewPlugin")
