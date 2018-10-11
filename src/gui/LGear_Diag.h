/////////////////////////////////////////////////////////////////////////////
// Name:        LGear_Diag.h
// Purpose:     Manager of the Landing Gear
// Author:      Matthew Gong
// Created:     07/25/2005
// Copyright:   (c) Matthew Gong
// Licence:     GPL licence
/////////////////////////////////////////////////////////////////////////////

#if defined(__GNUG__) && !defined(__APPLE__)
// #pragma interface
#endif

// -*- C++ -*- generated by wxGlade 0.4cvs on Mon Jul 25 09:33:27 2005

#include <wx/wx.h>
#include <wx/image.h>
// begin wxGlade: ::dependencies
// end wxGlade


#ifndef LGEAR_DIAG_H
#define LGEAR_DIAG_H

#include <wx/txtstrm.h>
#include "FGXMLElement.h"

class LGearDialog;


class ClientData_LGear : public wxClientData
{
  public:
    ClientData_LGear();
    ~ClientData_LGear(){}

    void Load(JSBSim::Element * el);
    void Save(wxTextOutputStream & out, const wxString & prefix);
    wxString GetText() const;
    void ShowDialog();

  protected:
    wxString name;
    wxString type;
    double x,y,z;
    wxString loc_unit;
    double spring_coeff;
    wxString spring_coeff_unit;
    double damping_coeff;
    wxString damping_coeff_unit;
    double static_friction;
    double dynamic_friction;
    double rolling_friction;
    double max_steer;
    wxString max_steer_unit;
    wxString brake_group;
    bool retractable;

    friend class LGearDialog;
};

class LGearDialog: public wxDialog {
public:
    // begin wxGlade: LGearDialog::ids
    // end wxGlade

    LGearDialog(wxWindow* parent, int id, const wxString& title=wxT("Landing Gear Setup"), const wxPoint& pos=wxDefaultPosition, const wxSize& size=wxSize(490, 435), long style=wxDEFAULT_DIALOG_STYLE);
    void Load(const ClientData_LGear * data);
    void Save(ClientData_LGear * data);

private:
    // begin wxGlade: LGearDialog::methods
    void set_properties();
    void do_layout();
    // end wxGlade

protected:
    // begin wxGlade: LGearDialog::attributes
    wxStaticBox* sizer_4_staticbox;
    wxStaticText* label_name;
    wxTextCtrl* text_ctrl_name;
    wxStaticText* label_type;
    wxTextCtrl* text_ctrl_type;
    wxStaticText* label_x;
    wxTextCtrl* text_ctrl_x;
    wxStaticText* label_y;
    wxTextCtrl* text_ctrl_y;
    wxStaticText* label_z;
    wxTextCtrl* text_ctrl_z;
    wxComboBox* combo_box_unit;
    wxStaticText* label_spring;
    wxTextCtrl* text_ctrl_spring;
    wxComboBox* combo_box_spring;
    wxStaticText* label_damping;
    wxTextCtrl* text_ctrl_damping;
    wxComboBox* combo_box_damping;
    wxStaticText* label_static_friction;
    wxTextCtrl* text_ctrl_static_friction;
    wxStaticText* label_dynamic_friction;
    wxTextCtrl* text_ctrl_dynamic_friction;
    wxStaticText* label_rolling_friction;
    wxTextCtrl* text_ctrl_rolling_friction;
    wxStaticText* label_max_steer;
    wxTextCtrl* text_ctrl_max_steer;
    wxComboBox* combo_box_max_steer;
    wxStaticText* label_brake_group;
    wxComboBox* combo_box_brake_group;
    wxStaticText* label_retractable;
    wxCheckBox* checkbox_retractable;
    wxButton* button_ok;
    wxButton* button_cancel;
    // end wxGlade

public :
    bool TransferDataToWindow(){return true;}
    bool TransferDataFromWindow(){return true;}
    bool Validate(){return true;}

}; // wxGlade: end class


#endif // LGEAR_DIAG_H