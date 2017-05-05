///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Mar 29 2017)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#ifndef __NONAME_H__
#define __NONAME_H__

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/statusbr.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/string.h>
#include <wx/stattext.h>
#include <wx/statline.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/statbmp.h>
#include <wx/slider.h>
#include <wx/textctrl.h>
#include <wx/gbsizer.h>
#include <wx/filepicker.h>
#include <wx/panel.h>
#include <wx/scrolwin.h>
#include <wx/sizer.h>
#include <wx/frame.h>

///////////////////////////////////////////////////////////////////////////

#define albedo_slider 1000
#define specular_slider 1001

///////////////////////////////////////////////////////////////////////////////
/// Class _main_window
///////////////////////////////////////////////////////////////////////////////
class _main_window : public wxFrame 
{
	private:
	
	protected:
		wxStatusBar* m_statusBar1;
		wxPanel* options_panel;
		wxStaticText* m_staticText1;
		wxScrolledWindow* texture_selector_scroll;
		wxStaticLine* m_staticline33;
		wxPanel* albedo_panel;
		wxStaticText* texture_name_label1;
		wxStaticBitmap* albedo_preview;
		wxStaticLine* m_staticline11;
		wxSlider* albedo_red_slider;
		wxTextCtrl* albedo_red_input;
		wxStaticText* red_label1;
		wxSlider* albedo_green_slider;
		wxTextCtrl* albedo_green_input;
		wxStaticText* green_label;
		wxSlider* albedo_blue_slider;
		wxTextCtrl* albedo_blue_input;
		wxStaticText* blue_label;
		wxStaticLine* m_staticline21;
		wxFilePickerCtrl* albedo_file_picker;
		wxStaticLine* m_staticline331;
		wxPanel* normal_panel;
		wxStaticText* texture_name_label11;
		wxStaticBitmap* normal_preview;
		wxStaticLine* m_staticline111;
		wxFilePickerCtrl* normal_file_picker;
		wxStaticLine* m_staticline3311;
		wxPanel* specular_color_panel;
		wxStaticText* texture_name_label12;
		wxStaticBitmap* specualr_color_preview;
		wxStaticLine* m_staticline112;
		wxSlider* specular_red_slider;
		wxTextCtrl* specular_red_input;
		wxStaticText* red_label11;
		wxSlider* specular_green_slider;
		wxTextCtrl* specular_green_input;
		wxStaticText* green_label1;
		wxSlider* specular_blue_slider;
		wxTextCtrl* specular_blue_input;
		wxStaticText* blue_label1;
		wxStaticLine* m_staticline211;
		wxFilePickerCtrl* specular_color_file_picker;
		wxStaticLine* m_staticline33111;
		wxPanel* roughness_panel;
		wxStaticText* roughness_texture_name_labell;
		wxStaticBitmap* roughness_color_preview;
		wxStaticLine* m_staticline113;
		wxSlider* rougness_slider;
		wxTextCtrl* roughness_input;
		wxStaticText* red_label12;
		wxStaticLine* m_staticline212;
		wxFilePickerCtrl* smoothness_file_picker;
		wxStaticLine* ao_;
		wxPanel* emission_panel;
		wxStaticText* texture_name_label13;
		wxStaticBitmap* emission_preview;
		wxStaticLine* m_staticline114;
		wxSlider* emission_slider;
		wxTextCtrl* emission_input;
		wxStaticText* red_label13;
		wxStaticLine* m_staticline213;
		wxFilePickerCtrl* emission_file_picker;
		wxStaticLine* m_staticline332;
		wxPanel* height_panel;
		wxStaticText* texture_name_label14;
		wxStaticBitmap* height_color_preview;
		wxStaticLine* m_staticline115;
		wxSlider* height_slider;
		wxTextCtrl* height_input;
		wxStaticText* red_label14;
		wxStaticLine* m_staticline214;
		wxFilePickerCtrl* heightmap_file_picker;
		wxStaticLine* m_staticline333;
		wxPanel* porosity_panel;
		wxStaticText* texture_name_label15;
		wxStaticBitmap* porosity_color_preview;
		wxStaticLine* m_staticline116;
		wxSlider* porosity_slider;
		wxTextCtrl* porosity_input;
		wxStaticText* red_label15;
		wxStaticLine* m_staticline215;
		wxFilePickerCtrl* porosity_file_picker;
		wxStaticLine* m_staticline334;
		wxPanel* translucense_panel;
		wxStaticText* texture_name_label17;
		wxStaticBitmap* translucence_color_preview;
		wxStaticLine* m_staticline118;
		wxSlider* translucence_slider;
		wxTextCtrl* translucence_red_input;
		wxStaticText* red_label17;
		wxStaticLine* m_staticline217;
		wxFilePickerCtrl* translucense_file_picker;
		wxStaticLine* m_staticline3341;
		wxPanel* ao_panel;
		wxStaticText* texture_name_label16;
		wxStaticBitmap* ao_color_preview;
		wxStaticLine* m_staticline117;
		wxSlider* ao_slider;
		wxTextCtrl* ao_input;
		wxStaticText* red_label16;
		wxStaticLine* m_staticline216;
		wxFilePickerCtrl* ao_file_picker;
	
	public:
		
		_main_window( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 1498,1149 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );
		
		~_main_window();
	
};

#endif //__NONAME_H__
