/*
* This is a template header file for a user modules derived from
* DefaultGUIModel with a custom GUI.
*/

#include <QMdiArea>
#include <default_gui_model.h>

class PluginTemplate : public DefaultGUIModel {
	
	Q_OBJECT
	
	public:
	
		PluginTemplate(void);
		virtual ~PluginTemplate(void);
	
		void execute(void);
		void createGUI(DefaultGUIModel::variable_t *, int);
		void customizeGUI(void);
	
	protected:
	
		virtual void update(DefaultGUIModel::update_flags_t);
	
	private:
	
		double some_parameter;
		double some_state;
		double period;
		double Number;
		double answer;
	
	private slots:
	// these are custom functions that can also be connected
	// to events through the Qt API. they must be implemented
	// in add_button.cpp
	
		void aBttn_event(void);
		void bBttn_event(void);
		void cBttn_event(void);
};
